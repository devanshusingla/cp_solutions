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
#define V(T...) vector<T>
#define P(T...) pair<T>
#define M(T...) map<T>
#define MM(T...) multimap<T>
#define MS(T...) multiset<T>
#define Q(T...) queue<T>
#define St(T...) stack<T>
#define PQ(T...) priority_queue<T>

// use cin.ignore() after cin statement.
using namespace std ;

void solve(){
    long n,k;
    cin>>n>>k;
    vector<long> v(k,0);
    rep(i,k) cin>>v[i];
    vector<long long> t(n,-1);
    rep(i,k){
        int x;
        cin>>x;
        t[v[i]-1] = x;
    }
    for(int i=1; i<n; i++){
        if(t[i-1]!=-1){
            if(t[i]!=-1) t[i] = min(t[i], t[i-1]+1);
            else t[i] = t[i-1]+1;
        }
    }
    // for(auto i:t) cout<<i<<" ";
    // cout<<endl;
    for(int i=n-2; i>=0; i--){
        if(t[i+1]!=-1){
            if(t[i]!=-1) t[i] = min(t[i], t[i+1]+1);
            else t[i] = t[i+1]+1;
        }
    }
    for(auto i:t) cout<<i<<" ";
    cout<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    ll t ;
    cin>>t ;
    cin.ignore() ;
    
    rep(i,t) solve();
}