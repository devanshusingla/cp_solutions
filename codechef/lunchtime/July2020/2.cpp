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
    long n,k;
    cin>>n>>k ;
    
    ll s[n] ;
    vector<ll> arr[k] ;
    for(int i=0; i<n; i++){
        cin>>s[i] ;
        arr[i%k].pb(s[i]) ;
    }

    sort(s,s+n) ;
    for(long i=0; i<k; i++){
        sort(arr[i].begin(), arr[i].end()) ;
    }

    for(long i=0; i<n; i++){
        if(arr[i%k][i/k] != s[i]){
            cout<<"no"<<endl;
            return;
        }
    }

    cout<<"yes"<<endl;
    return;
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