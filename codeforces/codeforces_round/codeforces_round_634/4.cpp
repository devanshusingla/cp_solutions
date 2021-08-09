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
	char a[9][9] ;
	for(int i=0; i<9; i++)
	for(int j=0; j<9; j++){
		cin>>a[i][j] ;
	}

	int x=0;
	for(int i=0; i<3; i++)
	for(int j=i; j<9; j+=3){
		a[x][j] = (char)('1'+(a[x][j]-'1'+1)%9) ;
		x++ ; 
	}

	for(int i=0; i<9; i++){
	for(int j=0; j<9; j++){
		cout<<a[i][j] ;
	}
	cout<<endl ;
	}
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