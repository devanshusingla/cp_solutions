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

// use cin.ignore() after cin statement.
using namespace std ;

void solve(){
    long n;
    cin>>n;
    ll a[n],b[n],x=0,y=0,w=0;
    for(long i=0; i<n; i++){
        cin>>a[i];
    }
    for(long i=0; i<n; i++){
        cin>>b[i];
    }
    for(long i=0; i<=n; i++){
        if((x==y)&&(a[i]==b[i])){
            w+=a[i];
        }
        x+=a[i];
        y+=b[i];
    }
    cout<<w<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;
    cin>>t ;
    cin.ignore() ;
    for(int i=0; i<t; i++){
        solve() ;
    }
}