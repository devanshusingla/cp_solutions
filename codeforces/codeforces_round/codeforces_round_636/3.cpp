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
    ll arr[n];
    for(long i=0; i<n; i++){
        cin>>arr[i] ;
    }

    int sign = -1;
    if(arr[0]>0) sign = 1;

    ll sum=0;

    for(long i=0; i<n;){
        //cout<<i ;
        ll max = arr[i] ;
        if(sign>0){ 
            while((arr[i]>0)&&(i<n)){
                max = MAX(arr[i], max) ;
                i++;
            }
            //cout<<"max: "<<max<<" " ;
            sum+=max ;
            sign = -1;
        } else {
            while((arr[i]<0)&&(i<n)){
                max = MAX(arr[i], max) ;
                i++;
            }
            sum+=max ;
            sign=1 ;
            //cout<<"min: "<<min<<" ";
        }
    }

    cout<<sum<<endl ;
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