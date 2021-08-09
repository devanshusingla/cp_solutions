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
#define F first
#define S second
#define rep(i,n) for(auto i=0*(n); i<(n); i++)
#define irep(i,n) for(auto i=(0*(n)+1); i<=(n); i++)
#define drep(i,n) for(auto i=(n)-1; i>=0; i--)
#define srep(i,s,n) for(auto i=(s); i<(n); i++)
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define show(x) cout<<#x<<" = "<<x<<endl;
#define V(T) vector<T>
#define P(X,Y) pair<X,Y>
#define M(X,Y) map<X,Y>
#define MM(X,y) multimap<X,Y>
#define Q(T) queue<T>
#define St(T) stack<T>
#define PQ(T) priority_queue<T>

// use cin.ignore() after cin statement.
using namespace std ;

void solve(){
    string s;
    getline(cin, s);
    long ans=2;
    for(long i=1; i<s.length(); i++){
        long k=1;
        while((s[i]==s[i-1])&&(i<s.length())) k++, i++;
        ans = max(ans,k);
    }
    for(long i=3; i<s.length(); i+=2){
        long k=2;
        while((s[i]==s[i-2])&&(s[i-1]==s[i-3])&&(i<s.length())) k+=2, i+=2;
        ans = max(ans,k);
    }
    for(long i=4; i<s.length(); i+=2){
        long k=2;
        while((s[i]==s[i-2])&&(s[i-1]==s[i-3])&&(i<s.length())) k+=2, i+=2;
        ans = max(ans,k);
    }

    cout<<s.length()-ans<<endl;
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