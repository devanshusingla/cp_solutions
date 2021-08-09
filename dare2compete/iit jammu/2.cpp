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
    scanf("%ld %ld",&n,&k) ;
    //cout<<n<<k<<endl ;
    string s;
    getline(cin,s) ;

    if(k==1) printf("%ld\n",n) ;
    else if((n-k)%2) printf("%ld\n",n-1) ;
    else printf("%ld\n",n) ;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    int t ;
    scanf("%d\n", &t) ;
    cout<<t;
    for(int i=0; i<t; i++){
        solve() ;
    }
}