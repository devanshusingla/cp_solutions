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
    int n,k ;
    cin>>n>>k ;
    set<int> s;
    for(int i=0; i<n; i++){
        int x;
        cin>>x ;
        s.insert(x) ;
    }
/*
    for(auto i:s){
        cout<<i<<" " ;
    }
    cout<<endl ;
    cout<<s.size()<<endl ;
*/
    if(s.size()>k){
        cout<<-1<<endl ;
        return;
    }

    string str, t = to_string(*(s.begin()));
    int count = 0 ;
    for(auto i:s){
        str+=(to_string(i)+" ");
        count++ ;
    }
    for(;count<k; count++) str+=(t+" ");

    cout<<n*k<<endl;
    for(int i=0; i<n; i++) cout<<str;
    cout<<endl;
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