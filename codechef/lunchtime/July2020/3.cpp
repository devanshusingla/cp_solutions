/************************************************************
/  AUTHOR :  DEVANSHU SINGLA                                /
/  NICK :  DSINGLA                                          /
/  INSTITUTE :  IITK                                        /
************************************************************/
//                     TEMPLATE                            //

#include <bits/stdc++.h>
#define ll long long
#define N 100005
#define MOD 998244353
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define F first
#define S second
#define MAX(x, y) (x) > (y) ? (x) : (y)
#define MIN(x, y) (x) < (y) ? (x) : (y)

using namespace std ;

ll power(ll b,ll e){
    ll r = 1;
    while(e > 0){
        if ((e&1) == 1)
            r = (r*b)%MOD;
        b = (b*b)%MOD ;
        e >>= 1 ;
    }

    return r ;
}

void solve(){
    long n;
    cin>>n;

    map<ll,long> m;
    for(long i=0; i<n; i++){
        ll x;
        cin>>x;
        m[x]++ ;
    }
/*
    cout<<"counts"<<endl;
    for(auto i:m){
        cout<<i.F<<": "<<i.S<<endl;
    }
    cout<<endl;
*/
    ll sum=0;
    ll min=1;
    ll mul=1;
    long count = n;

    for(auto p = m.begin() ; p!=m.end(); p++){
/*
        cout<<"min: "<<min<<endl;
        cout<<"count: "<<count<<endl;
        cout<<"mul: "<<mul<<endl;
        cout<<"sum: "<<sum<<endl<<endl;
*/
        if((*p).F==min){
            count-=(*p).S;
            sum += (((min*power(2,count))%MOD)*mul)%MOD ;
            sum%=MOD;
            mul = (mul*(power(2,(*p).S)-1))%MOD ;
            min++ ;
        } else {
            break;
        }
    }
/*
    cout<<"min: "<<min<<endl;
    cout<<"count: "<<count<<endl;
    cout<<"mul: "<<mul<<endl;
    cout<<"sum: "<<sum<<endl<<endl;
*/
    sum = (sum+((min*mul)%MOD)*power(2,count))%MOD;
/*
    cout<<"min: "<<min<<endl;
    cout<<"count: "<<count<<endl;
    cout<<"mul: "<<mul<<endl;
    cout<<"sum: "<<sum<<endl<<endl;
*/
    cout<<sum<<endl ;
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