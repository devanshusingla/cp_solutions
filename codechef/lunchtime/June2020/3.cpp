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
#define MM(X,y) multimap<X,Y>
#define Q(T) queue<T>
#define St(T) stack<T>
#define PQ(T) priority_queue<T>

// use cin.ignore() after cin statement.
using namespace std ;

void solve(){
    long n;
    int k;
    cin>>n>>k;

    ll a[n];
    multimap<ll,int> m;
    for(long i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=29; i>=0; i--){
        ll mask = 1<<i;
        int count = 0;

        for(long j=0; j<n; j++){
            if(a[j]&mask){
                count++;
            }
        }
        //cout<<count<<" "<<mask<<" "<<i<<endl;
        m.insert({(ll)count*mask,i});
    }

    ll x=0;
    int count=0;
    for(auto i=m.rbegin(); i!=m.rend(); i++){
        //cout<<(*i).F<<" "<<(*i).S<<endl;
        if((*i).F>0){
            if(count++<k){
                x += (((ll)1)<<(*i).S);
            } else break;
        }
        else break;
    }

    cout<<x<<endl;
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
    for(int i=0; i<t; i++){
        solve() ;
    }
}