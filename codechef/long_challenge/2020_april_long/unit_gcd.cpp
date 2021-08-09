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
    if(n==1){
        cout<<"1"<<endl ;
        cout<<"1 1" ;
    }else if(n%2){
        cout<<n/2<<endl ;
        cout<<"3 1 2 3"<<endl ;
        for(long i=4; i<=n; i+=2){
            cout<<"2 "<<i<<" "<<i+1<<endl ;
        }
    } else {
        cout<<n/2<<endl ;
        cout<<"2 1 2"<<endl ;
        for(long i=3; i<=n; i+=2){
            cout<<"2 "<<i<<" "<<i+1<<endl ;
        }
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
	cin.tie(NULL) ;
	
    int t ;
    cin>>t ;
    for(int i=0; i<t; i++){
        solve() ;
    }
}