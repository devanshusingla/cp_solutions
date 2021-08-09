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
    long n;
    cin>>n;
    ll a[n];
    for(long i=0; i<n; i++){
        cin>>a[i];
    }
    int p[20] = {};
    ll x,y;
    for(long i=0; i<n; i++){
        int j=0;
        while(a[i]){
            p[j] += a[i]%2;
            a[i]/=2;
            j++;
        }
    }

    ll c[n] = {};

    for(long i=0; i<n; i++){
        for(int j=19; j>=0; j--){
            c[i]*=2;
            if(p[j]){
                p[j]--;
                c[i]++;
            }
        }
        if(c[i] == 0) break;
    }

    ll sum=0;
    for(long i=0; i<n; i++){
        sum += c[i]*c[i];
    }

    cout<<sum;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    solve();
}