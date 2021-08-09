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
    long n;
    cin>>n ;
    n/=2;
    if(n%2) cout<<"NO"<<endl ;
    else{
        cout<<"YES"<<endl ;

        vector<long> odd, even ;
        for(long i=1; i<=(2*n+1); i++){
            if(i==(n+1)) continue;
            if(i%2) odd.pb(i) ;
            else even.pb(i) ;
        }
        for(long i=0; i<n; i++) cout<<even[i]<<" " ;
        for(long i=0; i<n; i++) cout<<odd[i]<<" " ;
        cout<<endl ;
    }
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