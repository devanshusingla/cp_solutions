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
    long n,k ;
    cin>>n>>k ;
    long arr[n];

    for(long i=0; i<n; i++){
        cin>>arr[i] ;
    }

    long val[2*k+4] = {0};

    for(long i=0; 2*i<n ; i++){
        long max = MAX(arr[i], arr[n-1-i]);
        long min = MIN(arr[i], arr[n-1-i]) ;
        val[2]+=2 ;
        val[min + 1] -= 1 ;
        val[max+min] -=1 ;
        val[max+min+1] +=1 ;
        val[max+k+1] +=1 ;
    }

    long sum=0, min=val[2];

    for(long i=2; i<2*k+1; i++){
        sum += val[i] ;
        min = MIN(sum, min) ;
    }

    cout<<min<<endl ;

}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("input.txt", "r", stdin);  
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