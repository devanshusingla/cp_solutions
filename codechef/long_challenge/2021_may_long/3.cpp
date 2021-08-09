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

ll dfs(long node, V(long) g[], int vis[]){
    vis[node] = 1;
    ll sum=0;

    multiset<ll, greater<ll>> m;
    for(auto child:g[node]){
        if(!vis[child]){
            m.insert(dfs(child, g, vis));
        }
    }
    ll w=0;
    // cout<<"Node: "<<node+1<<endl;
    for(auto i:m){
        // cout<<i<<" ";
        w++;
        sum += (i*w)%MOD;
        sum %= MOD;
    }
    // cout<<endl;
    // cout<<"\nsum: "<<sum+1<<endl<<endl;

    return (sum+1)%MOD;
}

void solve(){
    // cout<<endl<<endl;
    
    long n;
    ll x;
    cin>>n>>x;

    V(long) g[n];
    for(int i=0; i<n-1; i++){
        long a,b;
        cin>>a>>b;
        a--;b--;
        g[a].pb(b);
        g[b].pb(a);
    }

    int vis[n] = {};
    cout<<(x*dfs(0, g, vis))%MOD<<endl;
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