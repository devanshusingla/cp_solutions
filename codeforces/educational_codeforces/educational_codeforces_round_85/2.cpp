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
	ll x;
	cin>>n>>x ;
	multimap<ll,ll> m;
	ll wealth=0, count=0, av=0;
	for(long i=0; i<n; i++){
		ll a;
		cin >> a;
		if(a>=x){
			wealth+=a ;
			count++ ;
		} else{
			m.insert(mp(a,i)) ;
		}
	}

	av=count*x ;
	for(auto itr = m.rbegin(); itr!=m.rend(); itr++){
		if(((*itr).F+wealth)>=(av+x)){
			count++;
			wealth+=(*itr).F ;
			av+=x ;
		}
		else{
			break ;
		}
	}

	cout<<count<<endl ;
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