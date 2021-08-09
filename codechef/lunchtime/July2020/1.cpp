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
    int n,s ;
    cin>>n>>s ;
    int p[n] ;
    for(int i=0; i<n; i++){
        cin>>p[i] ;
    }
    vector<int> f, d;

    for(int i=0; i<n; i++){
        int x;
        cin>>x ;
        if(x){
            f.pb(p[i]);
        } else {
            d.pb(p[i]) ;
        }
    }

    if(f.empty()||d.empty()){
        cout<<"no"<<endl ;
        return;
    }

    int x=f[0],y=d[0] ;

    for(auto i:f){
        x = MIN(x,i);
    }
    for(auto i:d){
        y = MIN(y,i);
    }

    if((x+y+s)<=100) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
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