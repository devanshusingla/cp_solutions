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

using namespace std ;

void solve(){
    ll p,s ;
    cin>>s>>p ;
    //cout<<s<<" "<<p<<endl<<endl;
    ll g[s] ;
    g[0] = 1;
    g[1] = p;

    for(ll i=2; i<s; i++){
        if(i-p<1){
            g[i] = 2*g[i-1] - 1;
        } else {
            g[i] = 2*g[i-1] - g[i-p-1];
        }
        g[i]%=MOD ;
        //cout<<i<<": "<<g[i]<<endl ;
    }

    ll f=1;

    for(ll i=1; i<=p; i++){
        f*=i;
        f%=MOD;
    }

    ll ans=0 ;

    for(ll i=0; i<p; i++){
        if(s-p-1-i<0) ans+=(p-i);
        else ans += (p-i)*(g[s-p-1-i]) ;
        ans %= MOD ;
    }

    cout<<(ans*f)%MOD<<endl ;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;
    cin>>t ;
    for(int i=0; i<t; i++){
        solve() ;
    }
}