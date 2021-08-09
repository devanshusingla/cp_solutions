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
    ll a,b;
    cin>>a>>b;
    //cout<<a<<b<<endl;
    if(a==b){
        cout<<0<<endl;
        return;
    }
    if(a>b){
        if(a%b){
            cout<<-1<<endl;
            return;
        }
        a/=b;
    } else {
        if(b%a){
            cout<<-1<<endl;
            return;
        }
        b/=a;
        a=b;
    }
    //cout<<a<<endl;
    int p=0;
    while((a&(ll)1)==0){
        a>>=1;
        //cout<<a<<endl;
        p++;
    }
    //cout<<"here"<<endl;
    if(a>1){
        cout<<-1<<endl;
        return;
    }
    cout<<(p/3)+((p%3)?1:0)<<endl;
    return;
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