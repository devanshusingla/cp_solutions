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
    long n,k,z;
    cin>>n>>k>>z;
    ll a[n];
    rep(i,n) {cin>>a[i];};

    z = min(z,(k/2));
    long x = k-2*z;

    ll sum=0;
    rep(i,x+1){
        sum+=a[i];
    }

    if(z==0){
        cout<<sum<<endl;
        return;
    }
    
    ll m=0;
    rep(i,x+1){
        m = max(m, a[i]+a[i+1]);
    }

    ll ans = sum+z*m;

    //cout<<"sum: "<<sum<<" max: "<<m<<" ans: "<<ans<<endl;

    z--;
    for(; z>0; z--){
        x+=2;
        sum+=(a[x-1]+a[x]);
        m = max(m, a[x-2]+ a[x-1]);
        m = max(m, a[x-1]+a[x]);
        ans = max(ans,sum + z*m);
    //cout<<"sum: "<<sum<<" max: "<<m<<" ans: "<<ans<<endl;
    }

    if(z==0){
        sum+=(a[k-1]+a[k]);
        ans = max(sum, ans);
    }

    cout<<ans<<endl;
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