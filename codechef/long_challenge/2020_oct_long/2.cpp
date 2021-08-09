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
    ll n,x,p,k;
    cin>>n>>x>>p>>k;
    p--;
    k--;
    V(ll) a(n);
    rep(i,n) cin>>a[i];
    sort(a.begin(), a.end());
    auto l = lower_bound(a.begin(), a.end(), x) - a.begin();
    auto u = upper_bound(a.begin(), a.end(), x) - a.begin();
    if(l==n){
        l--;
    }

    if(a[p] == x){
        cout<<0<<endl;
        return;
    }

    if(a[k] == x){
        cout<<-1<<endl;
        return;
    }

    if(a[k] > x){
        if((p<u)||(p>k)){
            cout<<-1<<endl;
        } else {
            cout<<p-u+1<<endl;
        }
    }

    if(a[l]==x) l--;
    if(a[k] < x){
        if((p>l)||(p<k)){
            cout<<-1<<endl;
        } else {
            cout<<l-p+1<<endl;
        }
    }
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