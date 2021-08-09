/************************************************************
/  AUTHOR :  DEVANSHU SINGLA                                /
/  NICK :  DSINGLA                                          /
/  INSTITUTE :  IITK                                        /
************************************************************/
//                     TEMPLATE                            //

#include <bits/stdc++.h>
#define ll long long
#define N 100005
#define MOD 998244353 
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

ll binexp(ll x, ll n, ll m){
    ll ans = 1;
    while(n){
        if(n%2){
            ans*=x;
            ans%=m;
        }
        n/=2;
        x*=x;
        x%=m;
    }
    return ans;
}

void solve(){
    int m;
    long n;
    ll k;
    cin>>m>>n>>k;
    // show(m);
    // show(n);
    // show(k);
    ll ki = binexp(k,MOD-2,MOD); 
    ll ki2 = ki*ki; ki2%=MOD;
    ll kki1 = (k-1)*ki; kki1 %= MOD;
    ll kki2 = kki1*kki1; kki2%=MOD;
    ll kki3 = kki2*kki1; kki3%=MOD;
    ll kki4 = kki3*kki1; kki4%=MOD;
    ll kki = ki*kki1; kki%=MOD;
    ll ans=0;
    ll x;
    if(m==2){
        ll p11 = 2*kki1; p11%=MOD;
        ll p12 = 0;
        ll p22 = ki;

        while(n>1){
            x = 2*p11*kki1; x%=MOD;
            ans+=x; ans%=MOD;
            x=(n-2)*p11; x%=MOD;
            x*=kki2; x%=MOD;
            ans+=x; ans%=MOD;

            x = 2*p12*kki1; x%=MOD;
            x*=(kki1+1); x%=MOD;
            ans+=x; ans%=MOD;
            x = 2*(n-2)*p12; x%=MOD;
            x*=kki3; x%=MOD;
            ans+=x; ans%=MOD;

            x = 2*p22*kki2; x%=MOD;
            ans+=x; ans%=MOD;
            x = (n-2)*p22; x%=MOD;
            x*=kki4; x%=MOD;
            ans+=x; ans%=MOD;

            ll q11 = p11*kki + 2*p12*kki; q11%=MOD;
            ll q12 = p11*ki2 + p12*ki2; q12%=MOD;
            ll q22 = p12*ki2 + p22*ki2; q22%=MOD;
            p11=q11; p12=q12; p22=q22;

            n--;
        }

        ans+= p11+2*p12+p22; ans%=MOD;
        cout<<ans;
    }

    if(m==1){
        ll p=1;
        
        while(n>1){
            x = 2*p*kki1; x%=MOD;
            ans += x; ans%=MOD;
            x = (n-2)*p; x%=MOD;
            x*=kki2; x%=MOD;
            ans += x; ans%=MOD;

            p*=ki; p%=MOD;

            n--;
        }

        ans+=p; ans%=MOD;
        cout<<ans<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    solve();
}