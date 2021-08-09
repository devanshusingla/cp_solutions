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
    long h[n];
    for(long i=0; i<n; i++){
        cin>>h[i];
    }
    ll p[n];
    p[0] = 0;
    p[1] = abs(h[1] - h[0]);
    for(long i=2;i<n; i++){
        p[i] = MIN(p[i-1] + abs(h[i] - h[i-1]), p[i-2] + abs(h[i] - h[i-2]));
    }
    cout<<p[n-1];
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