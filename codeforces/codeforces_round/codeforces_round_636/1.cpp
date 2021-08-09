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
    ll n;
    cin>>n ;
    ll k=4 ;
    while(n%(k-1)){
        k*=2 ;
    }

    cout<<n/(k-1)<<endl ;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;
    cin>>t ;
    for(int i=0; i<t; i++){
        solve() ;
    }
}