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
    int k;
    cin>>n>>k;
    ll h[n];
    for(long i=0; i<n; i++){
        cin>>h[i];
    }
    ll a[n];
    a[0] = 0;
    for(int i=1; i<k; i++){
        a[i] = a[0] + abs(h[i] - h[0]);
        for(int j=1; j<i; j++){
            a[i] = MIN(a[i], a[j] + abs(h[i]-h[j]));
        }
    }
    for(long i=k; i<n; i++){
        a[i] = a[i-k] + abs(h[i] - h[i-k]);
        for(int j=i-k+1; j<i; j++){
            a[i] = MIN(a[i], a[j] + abs(h[i]-h[j]));
        }
    }
    cout<<a[n-1];
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