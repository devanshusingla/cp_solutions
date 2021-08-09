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
    int k, n1,n2;
    cin>>k>>n1>>n2;
    // cout<<k<<n1<<n2<<endl;
    vector<int> v1(n1,0);
    vector<int> v2(n2,0);
    rep(i,n1) {
        cin>>v1[i];
    }
    rep(i,n2) {
        cin>>v2[i];
    }

    int i1=0;
    int i2=0;
    vector<int> a;
    while(i1<n1 && i2<n2){
        // cout<<i1<<i2<<k<<endl;
        if(v1[i1]==0){
            a.push_back(v1[i1++]);
            k++;
        } else if(v2[i2]==0){
            a.push_back(v2[i2++]);
            k++;
        } else if(v1[i1] <= k){
            a.push_back(v1[i1++]);
        } else if(v2[i2] <= k){
            a.push_back(v2[i2++]);
        } else {
            cout<<-1;
            cout<<endl;
            return;
        }
    }
    while(i1<n1){
        // cout<<i1<<i2<<k<<endl;
        if(v1[i1]==0){
            k++;
            a.push_back(v1[i1++]);
        } else if(v1[i1]<=k){
            a.push_back(v1[i1++]);
        } else {
            cout<<-1<<endl;
            return;
        }
    }
    while(i2<n2){
        // cout<<i1<<i2<<k<<endl;
        if(v2[i2]==0){
            k++;
            a.push_back(v2[i2++]);
        } else if(v2[i2]<=k){
            a.push_back(v2[i2++]);
        } else {
            cout<<-1<<endl;
            return;
        }
    }
    for(auto i:a) cout<<i<<" ";
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