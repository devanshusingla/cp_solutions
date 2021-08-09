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
	long a[n+1] = {0} ;
	long x; 
	for(long i=0; i<n; i++){
		cin>>x ;
		a[x]++ ;
	}
	long dis=0, max=0 ;
	for(long i=1; i<=n; i++){
		if(a[i]){
			dis++ ;
			max = MAX(max, a[i]) ;
		}
	}

	if(dis>max){cout<<max ;}
	else if(dis==max){cout<<dis-1 ;}
	else {cout<<dis ;}
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
	int t ;
	cin>>t ;
	for(int i=0; i<t; i++){
		solve() ;
	}
}