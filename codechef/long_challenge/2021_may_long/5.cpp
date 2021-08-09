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

void dpf(long node, V(long) g[], long n, int vis[], ll h[], ll t[]){
    vis[node] = 1;
    for(auto i:g[node]){
        if(!vis[i]){
            dpf(i, g, n, vis, h, t);
            t[node] += h[i] + t[i] + 2*h[node]*h[i];
            t[node] %= MOD;
            h[node] += h[i];
            h[node] %= MOD;
        }
    }
    h[node] = (2*h[node]+1)%MOD;
    t[node] = (t[node]+1)%MOD;
    // show(node);
    // cout<<"h: "<<h[node]<<" t: "<<t[node]<<endl;
    return;
}

void solve(){
    long n;
    cin>>n;
    V(long) g[n];

    for(long i=0; i<n-1; i++){
        long x,y;
        cin>>x>>y;
        x--;y--;
        g[x].pb(y);
        g[y].pb(x);
    }

    int vis[n] = {};

    ll h[n] = {}, t[n] = {};
    dpf(0, g, n, vis, h, t);

    cout<<t[0]<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    ll t ;
    cin>>t ;
    cin.ignore() ;
    
    rep(i,t) solve();
}