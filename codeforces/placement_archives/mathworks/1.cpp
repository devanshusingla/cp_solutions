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
    long n;
    cin>>n;
    bool s[n];
    for(long i=0; i<n; i++){
        cin>>s[i];
    }
    long a[n+1],b[n+1];
    a[0]=0;
    for(long i=1; i<=n; i++){
        a[i] = a[i-1] + (s[i-1] ? 1: -1);
    }
    b[n]=0;
    for(long i=n-1; i>=0; i--){
        b[i] = b[i+1] + (s[i]?1:-1);
    }
    for(long i=0; i<=n; i++){
        if(a[i]>b[i]){
            cout<<i;
            return;
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

    solve();
}