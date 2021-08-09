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
    ll a[n],b[n];
    rep(i,n){
        cin>>a[i];
    }
    rep(i,n){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    V(ll) u,v;
    long i=0,j=0;
    while((i<n)&&(j<n)){
        if(a[i]==b[j]) i++,j++;
        else if(a[i]>b[j]){
            v.pb(b[j]);
            j++;
        }
        else{
            u.pb(a[i]);
            i++;
        }
    }
    while(i<n){
        u.pb(a[i++]);
    }
    while(j<n){
        v.pb(b[j++]);
    }

    n = u.size();
    if(n%2){
        cout<<-1<<endl;
        return;
    }
    ll ans=0;
/*
    cout<<"u"<<endl;
    for(auto i:u){
        cout<<i<<endl;
    }
    cout<<"v"<<endl;
    for(auto i:v){
        cout<<i<<endl;
    }
*/
    for(long i=0,j=n-1; i<n; i+=2,j-=2){
        if(u[i] != u[i+1]){
            cout<<-1<<endl;
            return;
        }
        if(v[j] != v[j-1]){
            cout<<-1<<endl;
            return;
        }

        ans+=min(a[i],b[j]);
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