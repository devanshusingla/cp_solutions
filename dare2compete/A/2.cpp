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

ll strength(ll n,ll x,ll y,ll t){
    ll k=n/2;
    ll i = MAX(x-k,k-x);
    ll j = MAX(y-k,k-y);
    ll l = i+j;

    if(l==0){
        if(t) return -3 + 4*t;
        else return 0;
    }

    if(t<l) return 0;
    if(t==l){
        if((i==0)||(j==0)) return 1;
        else return 2;
    }

    ll s;
    if(i==0||j==0) s = -2 + 4*(t-l);
    else s = 4*(t-l);
    if(i==k) s++;
    if(j==k) s++;
    return s;
}

void solve(){
    ll n;
    cin>>n;

/*
    for(ll t=0; t<4; t++){
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                cout<<strength(n,i,j,t)<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
*/
    ll q;
    cin>>q;
    for(int i=0; i<q; i++){
        ll x,y,t,h ;
        cin>>x>>y>>t>>h;
        ll s = strength(n,x,y,t);
        if(h>s) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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