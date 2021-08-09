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
    map<ll, long> m;

    for(long i=0; i<n; i++){
        ll x,y ;
        cin>>x>>y ;
        m[x]++ ;
        m[y+1]-- ;
    }

    long sum=0, max=0, index=0;

    for(auto i:m){
        sum+=i.S ;
        if(sum>max){
            index = i.F;
            max = sum;
        }
        //cout<<"chocolates: "<<i.F<<endl;
        //cout<<"happy students: "<<sum<<endl ;
        //cout<<"max happy students: "<<max<<endl ;
        //cout<<"min chocolates: "<<index<<endl<<endl ;
    }

    cout<<index<<" "<<max;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;

    solve() ;
}
