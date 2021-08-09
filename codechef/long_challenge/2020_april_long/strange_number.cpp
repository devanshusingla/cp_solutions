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
#define M = 1000000000

using namespace std ;

ll log(ll x, ll p){
    ll count=0 ;
    while( x>=p ){
        x/=p ;
        count++ ;
    }
    return count;
}

void solve(){
	ll x, k;
    cin>>x>>k ;
    if(x==1){
        cout<<0<<endl ;
        return ;
    }
    ll p;
    while(!(x%2)){
        x/=2 ;
        k-- ;
    }
    while(!(x%3)){
        x/=3 ;
        k-- ;
    }
    if(k<=0){
        cout<<1<<endl ;
        return ;
    }
    if(x==1){
        cout<<0<<endl ;
        return ;
    }
    for(p=5; p*p<=x; p+=4){
        //cout<<"p: "<<p<<endl ;
        if(k > log(x,p)){
            cout<<0<<endl ;
            return ;
        }
        while(!(x%p)){
            k-- ;
            x/=p;
        }
        p+=2 ;
        while(!(x%p)){
            k-- ;
            x/=p ;
        }
        if(k<=0){
            cout<<1<<endl ;
            return;
        }
        if(x==1){
            cout<<0<<endl ;
            return;
        }
        //cout<<"p: "<<p<<endl ;
    }

    if(k==1) cout<<1<<endl ;
    else cout<<0<<endl ;
}

int main(){
    #ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
    #endif
	ios_base::sync_with_stdio(false) ;
	cin.tie(NULL) ;
	int t ;
	cin>>t ;
	//cout<<t ;
	for(int i=0; i<t; i++){
		solve() ;
		//cout<<"hello" ;
	}
}