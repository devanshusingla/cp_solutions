/************************************************************
/  AUTHOR :  DEVANSHU SINGLA                                /
/  NICK :  DSINGLA                                          /
/  INSTITUTE :  IITK                                        /
************************************************************/
//                     TEMPLATE                            //

#include <bits/stdc++.h>
#define ll long long
#define N 100005
#define MOD 1000000007
#define pb push_back
#define F first
#define S second
#define rep(i,n) for(auto i=0*(n); i<(n); i++)
#define irep(i,n) for(auto i=(0*(n)+1); i<=(n); i++)
#define drep(i,n) for(auto i=(n)-1; i>=0; i--)
#define srep(i,s,n) for(auto i=(s); i<(n); i++)
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define show(x) cout<<#x<<" = "<<x<<endl;
#define V(T) vector<T>
#define P(X,Y) pair<X,Y>
#define M(X,Y) map<X,Y>
#define MM(X,Y) multimap<X,Y>
#define Q(T) queue<T>
#define St(T) stack<T>
#define PQ(T) priority_queue<T>

// use cin.ignore() after cin statement.
using namespace std ;

void solve(){
    int n,m;
    cin>>n>>m;
    int r[n];
    int c[n][m];
    rep(i,n) cin>>r[i];
    rep(i,n) {
        int x=0;
        rep(j,m){ 
            cin>>c[i][j];
            c[i][j]+=x;
            x=c[i][j];
        }
    }

    int rank[n][m];

    rep(j,m){
        MM(int,int) mm;
        rep(i,n){
            mm.insert({r[i]+c[i][j], i});
        }
        int k=1;
        auto i=mm.rbegin();
        int x=(*i).F;
        int y=1;
        rank[(*i).S][j] = y;
        i++;
        for(; i!=mm.rend(); i++){
            if((*i).F==x){
                rank[(*i).S][j] = y;
                k++;
            } else {
                y+=k;
                k=1;
                x=(*i).F;
                rank[(*i).S][j] = y;
            }
        }
    }

    int count = 0;
    rep(i,n){
        /*
        rep(j,m){
            cout<<r[i] + c[i][j]<<" ";
        }
        cout<<endl;

        rep(j,m){
            cout<<rank[i][j]<<" ";
        }
        cout<<endl;
        */
        int x = 0;
        int z=c[i][0];
        irep(j,m-1){
            if(c[i][j]>z){
                x=j;
                z=c[i][j];
            }
        }
        int y=0;
        z=rank[i][0];
        irep(j,m-1){
            if(rank[i][j]<z){
                y=j;
                z=rank[i][j];
            }
        }
        if(x!=y) count++;
        //cout<<"x: "<<x<<" y: "<<y<<endl;
    }
    cout<<count<<endl;
    
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;
    cin>>t ;
    cin.ignore() ;
    
    rep(i,t) solve();
}