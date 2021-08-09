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

/* Returns the value of maximum profit */
int knapSackRec(ll W, ll wt[], ll val[], int i, ll** dp) 
{ 
    // base condition 
    if (i < 0) 
        return 0; 
    if (dp[i][W] != -1) 
        return dp[i][W]; 
  
    if (wt[i] > W) { 
  
        // store the value of function call stack in  
        // table before return 
        dp[i][W] = knapSackRec(W, wt, val, i - 1, dp); 
        return dp[i][W]; 
    } 
    else { 
  
        // store value in a table before return 
        dp[i][W] = MAX(val[i] + knapSackRec(W - wt[i], wt, val, i - 1, dp), 
                       knapSackRec(W, wt, val, i - 1, dp)); 
  
        // return value of table after storing 
        return dp[i][W]; 
    } 
} 
  
int knapSack(ll W, ll wt[], ll val[], int n) 
{ 
    ll** dp; // double pointer to declare the table dynamically 
    dp = new ll*[n]; 
  
    // loop to create the table dynamically 
    for (ll i = 0; i < n; i++)  
        dp[i] = new ll[W + 1];     
  
    // loop to initially filled the table with -1 
    for (ll i = 0; i < n; i++)  
        for (ll j = 0; j < W + 1; j++)  
            dp[i][j] = -1; 
    return knapSackRec(W, wt, val, n-1, dp); 
}

void solve(){
    ll n;
    cin>>n ;
    ll t[n] ;
    ll x[n], T=0, sum=0 ;
    
    for(int i=0; i<n; i++){
        cin>>t[i] ;
        cin>>x[i] ;
        T+=(ll)t[i] ;
        t[i]++ ;
        sum+=x[i] ;

        //cout<<t[i]<<endl;
        //cout<<x[i]<<endl ;
    }

    ll c = knapSack(T,t,x,n) ;

    //cout<<sum<<endl ;
    //cout<<T<<endl ;
    cout<<sum-c ;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    solve() ;
}