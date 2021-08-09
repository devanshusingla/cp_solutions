/************************************************************
/  AUTHOR :  DEVANSHU SINGLA                                /
/  NICK :  DSINGLA                                          /
/  INSTITUTE :  IITK                                        /
************************************************************/
//                     TEMPLATE                            //

#include <bits/stdc++.h>
#define ll long long
#define N 1000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define F first
#define S second
#define MAX(x, y) (x) > (y) ? (x) : (y)
#define MIN(x, y) (x) < (y) ? (x) : (y)

// use cin.ignore() after cin statement.
using namespace std ;

ll a[N+1];
void solve(){
    long x;
    cin>>x;
    cout<<a[x]<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    a[0]=0;
    a[1]=0;
    a[2]=1;
    a[3]=1;
    for(long i=4; i<=N; i++){
        a[i] = (a[i-2]+a[i-3])%MOD;
    }

    int t ;
    cin>>t ;
    cin.ignore() ;
    for(int i=0; i<t; i++){
        solve() ;
    }
}