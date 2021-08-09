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
    ll x,n,max, a;
    cin>>x>>n;
    set<ll> s;
    for(ll i=0; i<x; i++){
        cin>>a;
        s.insert(a);
    }
    max = *(s.begin());
    for(ll i = x; i<n; i++){
/*
        for(auto i:s){
            cout<<i<<endl;
        }
        cout<<endl;
*/
        cin>>a;
        s.erase(s.begin());
        s.insert(a);
        max = MAX(max, *(s.begin()));
    }
    cout<<max;
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