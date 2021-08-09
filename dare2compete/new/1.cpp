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

struct his{
    int beg;
    int end;
    int i;
    ll cost;
};

void solve(){
    int n;
    cin>>n ;
    cin.ignore() ;
    string s,t ;
    getline(cin,s) ;
    getline(cin,t) ;

    //cout<<s<<" "<<t<<endl ;

    ll f[n], b[n] ;
    for(int i=0; i<n; i++){
        cin>>f[i] ;
    }
    for(int i=0; i<n; i++){
        cin>>b[i] ;
    }

    int beg = 0;
    int end = n-1;
    int i=0 ;
    ll cost=0 ;
    stack<struct his> a;

    while(end>=beg){
        //cout<<"cost: "<<cost<<endl ;
        //cout<<"index: "<<i+1<<endl ;
        //cout<<"beg: "<<beg+1<<endl ;
        //cout<<"end: "<<end+1<<endl ;
        //cout<<endl ;
        if(t[end]!=s[i]&&t[beg]!=s[i]){
            if(a.empty()){
                cout<<"cannot be formed"<<endl;
                return ;
            }
            else {
                end = a.top().end ;
                beg = a.top().beg ;
                i = a.top().i ;
                cost = a.top().cost ;
                a.pop() ;
            }
        }

        if(t[end]==s[i]&&t[beg]==s[i]){
            if(f[i]>b[i]){
                struct his dum = {beg+1, end, i+1,cost+f[i]} ; 
                a.push(dum) ;
                cost+=b[i] ;
                end-- ;
                i++ ;
                continue ;
            } else {
                struct his dum = {beg, end-1, i+1, cost+b[i]} ; 
                a.push(dum) ;
                cost+=f[i] ;
                beg++ ;
                i++ ;
                continue ;

            }
        }

        if(t[end]==s[i]){
            cost+=b[i] ;
            end-- ;
            i++ ;
        } else {
            cost+=f[i] ;
            beg++ ;
            i++ ;
        }
    }

    cout<<cost<<endl ;
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