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
    long n,m,x,y,z ;
    cin>>n>>m>>x>>y>>z ;

    long a[x], b[y], c[z] ;

    for(long i=0; i<x; i++){
        cin>>a[i] ;
    }

    for(long i=0; i<y; i++){
        cin>>b[i] ;
    }

    for(long i=0; i<z; i++){
        cin>>c[i] ;
    }

    sort(a, a+x) ;
    sort(b, b+y) ;
    sort(c, c+z) ;

    long i=0,j=0 ;

    vector<long> p,q ;
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