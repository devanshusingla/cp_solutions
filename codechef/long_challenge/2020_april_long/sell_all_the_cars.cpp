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
	long n;
	cin>>n ;
	//cout<<"\nn: "<<n<<endl ;
	multimap<ll, long> p ;
	for(long i=0; i<n; i++){
		ll x ;
		cin>>x ;
		//cout<<"x: "<<x<<endl ;
		p.insert(mp(x,i)) ;
	}
	ll sum=0;
	long count = n-1 ;
	for(auto i:p){
		//cout<<"element of p: "<<i.F<<endl ;
		sum += MAX(0, i.F-count) ;
		count-- ;
		//cout<<"sum: "<<sum<<endl ;
	}
	cout<<sum%MOD<<endl ;
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