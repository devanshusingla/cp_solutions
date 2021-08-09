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
    cin>>n;
    ll a[n];
    for(long i=0; i<n; i++){
        cin>>a[i];
    }
    ll b[n-1];
    for(long i=1; i<n; i++){
        if(i%2){
            b[i-1] = a[i] - a[i-1];
        } else {
            b[i-1] = a[i-1] - a[i];
        }
    }

    ll bmax=0;
    ll cmax=0;
    ll bsum=0;
    ll csum=0;

    for(long i=0; i<n-1; i+=2){
        bsum+=b[i];
        if(bsum < 0) bsum=0;
        bmax = max(bmax,bsum);
    }

    for(long i=1; i<n-1; i+=2){
        csum+=b[i];
        if(csum < 0) csum=0;
        cmax = max(cmax,csum);
    }

    ll m = max(bmax,cmax);
    ll sum=0;
    for(long i=0; i<n; i+=2){
        sum+=a[i];
    }
    cout<<sum+m<<endl;
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