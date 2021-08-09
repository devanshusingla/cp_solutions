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
#define mp make_pair
#define clr(x) x.clear()
#define F first
#define S second
#define MAX(x, y) (x) > (y) ? (x) : (y)
#define MIN(x, y) (x) < (y) ? (x) : (y)
#define ABS(x) MAX((x),(-(x)))

// use cin.ignore() after cin statement.
using namespace std ;

void solve(){
    long n,q;
    cin>>n>>q;
    int arr[n];
    for(long i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> v[n];
    for(int i=0; i<n-1; i++){
        long x,y;
        cin>>x>>y;
        x--;y--;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(long i=0; i<q; i++){
        long x,y;
        int min, vis[n]={};
        queue<pair<int,int>> q;
        cin>>x>>y;
        x--;y--;
        q.push({100,x});
        vis[x] = 1;
        while(!q.empty()){
            cout<<q.front().S+1<<" "<<q.front().F<<endl;
            if(q.front().S == y){
                cout<<q.front().F<<endl;
                break;
            }
            x=q.front().S;
            min = q.front().F;
            /*for(auto j:v[x]){
                cout<<j<<endl;
            }*/
            for(auto j:v[x]){
                if(vis[j]) continue;
                q.push({MIN(min,ABS(arr[j]-arr[x])),j});
                //cout<<q.back().S<<" "<<q.back().F<<endl;
                vis[j]=1;
            }
            //cout<<endl;
            q.pop();
        }
        cout<<endl;
    }
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