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
	ll n,l,r ;
	cin>>n>>l>>r ;
	ll x = (ll)(sqrt(l) + 0.5) ;
	//cout<<x<<endl ;
	while(x*(x-1)+1<=l) x++;
	x--;
	l-=(x*(x-1)+1) ;
	r-=(x*(x-1)+1) ;
	while(r>=0){
	//cout<<"l "<<l<<endl ;
	//cout<<"r "<<r<<endl ;
	for(ll i=l; (i<2*(x))&&(i<=r); i++){
		if(i%2){
			cout<<(x+1)<<" " ;
		}
		else {
			cout<<(i/2 +1)<<" " ;
		}
	}

	r-=2*x ;
	x++;
	l=0 ;

	}

	cout<<endl ;
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