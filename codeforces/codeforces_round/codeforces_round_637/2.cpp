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
    ll arr[n] ;
    for(long i=0; i<n; i++){
        cin>>arr[i] ;
    }

    vector<long> peak(n,0) ;

    for(long i=1; i<n-1; i++){
        if((arr[i-1]<arr[i])&&(arr[i]>arr[i+1])){
            peak[i] = 1;
        }
        //    cout<<"peak "<<i+1<<": "<<peak[i]<<endl ;
    }

    long l=1, t=1;
    for(long i=1; i<k-1; i++){
        t+=peak[i] ;
    }

    long max = t;
    for(long i=k; i<n; i++){
        if(peak[i-1]){
            t++ ;
        }
        if(peak[i-k+1]){
            t--;
        }

      //  cout<<i-k+1<<": "<<t<<endl;

        if(t>max){
            max = t;
            l = i-k+2 ;
        }
    }

    cout<<max<<" "<<l<<endl ;
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