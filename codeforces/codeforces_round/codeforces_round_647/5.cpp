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

// use cin.ignore() after cin statement.
using namespace std ;

void solve(){
    ll n,p,x;
    cin>>n>>p;
    map<ll,ll> m,dif;
    for(ll i=0; i<n; i++){
        cin>>x;
        m[x]++;
    }
    ll l=(*(m.rbegin())).F;
    for(auto i=m.rbegin(); i!=m.rend(); i++){
        if((*i).F==l){
            
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
    long t ;
    cin>>t ;
    cin.ignore() ;
    for(long i=0; i<t; i++){
        solve() ;
    }
}