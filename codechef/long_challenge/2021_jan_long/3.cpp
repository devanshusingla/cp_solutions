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
    long n;
    V(V(long)) v;
    M(ll, V(P(int,int))) g;
    cin>>n;
    rep(i,n){
        V(long) u(2,0);
        long m;
        cin>>m;
        // show(m);
        rep(j,m){
            ll x;
            cin>>x;
            int p=x>0 ? 0: 1;
            // cout<<p<<endl;
            u[p]++;
            g[abs(x)].pb({i,p});
        }
        v.pb(u);
    }

    ll a=0;
    for(auto i:g){
        if(i.S.size()>1){
            a++;
            for(auto j:i.S){
                v[j.F][j.S]--;
                a+=v[j.F][j.S];
            }
        } else {
            auto j=i.S[0];
            v[j.F][j.S]--;
            a+=v[j.F][1-j.S];
        }
    }
    cout<<a<<endl;
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