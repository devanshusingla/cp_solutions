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
    int k;
    cin>>n>>k;
    string a,b ;
    cin.ignore() ;
    getline(cin,a) ;
    getline(cin,b) ;

    //cout<<a<<endl<<b ;

    ll cost[k][k], val[k][k] ;
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            cin>>cost[i][j] ;
            //cout<<cost[i][j]<<" " ;
        }
    }

    for(int i=0; i<k; i++)
    for(int j=0; j<k; j++){
        ll min = cost[0][i] + cost[0][j] ;
        for(int x=0; x<k; x++){
            min = MIN(min, cost[x][i]+cost[x][j]) ;
        }
        val[i][j] = min ;
    }

    ll sum = 0;
    for(long i=0; i<n; i++){
        sum += val[(int)(a[i]-'a')][(int)(b[i]-'a')] ;
    }

    cout<<sum ;
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