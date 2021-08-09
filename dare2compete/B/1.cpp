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
    int b;
    cin>>b;
    char c;
    vector<int> p;
    cin>>c;
    cout<<c;
    while(c!=' '){
        p.pb((int)(c-'0'));
        cin>>c;
    }

    ll m=0, ans=0;
    cin>>c;
    while(c!='\n'){
        m = m*b + (ll)(c-'0');
    }

    for(auto i:p){
        ans = (ans*b + i)%m;
    }

    stack<int> s;
    while(ans){
        s.push(ans%b);
        ans/=b;
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }
    cout<<endl;
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
    cin.ignore();
    for(int i=0; i<t; i++){
        solve() ;
    }
}