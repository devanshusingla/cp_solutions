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
    int n,m;
    cin>>n>>m;
    priority_queue<ll, V(ll), greater<ll>> a;
    PQ(ll) b;
    ll d=0;
    rep(i,n){
        ll x;
        cin>>x;
        a.push(x);
        d+=x;
    }
    rep(j,m){
        ll x;
        cin>>x;
        b.push(x);
        d-=x;
    }
    int i=0;
    while((i<m)&&(i<n)&&(d<=0)){
        ll x=a.top();
        ll y=b.top();
        // cout<<x<<" "<<y<<" "<<d<<endl;
        a.pop();
        b.pop();
        if(y-x<=0) break;
        d+=2*(y-x);
        i++;
    }
    if(d<=0) cout<<-1<<endl;
    else cout<<i<<endl;
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