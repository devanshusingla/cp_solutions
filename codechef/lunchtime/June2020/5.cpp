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
    long n,x;
    cin>>n>>x;
    long a[n];
    for(long i=0; i<n; i++){
        cin>>a[i];
    }

    vector<long> b,f; 
    for (long i=1; i<=sqrt(x); i++) 
    { 
        if (x%i==0) 
        { 
            f.pb(i);
            if (x/i != i) b.push_back(x/i);
        } 
    }

    ll count=0;
    for(auto i:f){
        if(i>n) break;
        //cout<<"factor "<<i<<endl;
        map<ll,long> m;
        ll sum=0;
        for(long j=0; j<i; j++){
            sum+=a[j];
        }
        m[sum]++;
        long z=x/i;

        for(long j=i; j<n; j++){
            sum = sum - a[j-i] + a[j];
            m[sum]++;
        }

        for(auto j:m){
            //cout<<j.F<<" "<<j.S<<endl;
            if(j.S == 0) break;
            count+=m[z-j.F]*j.S;
            //cout<<count<<endl;
        }
    }

    for(auto k=b.rbegin(); k!=b.rend(); k++){
        auto i = *k;
        if(i>n) break;
        //cout<<"factor "<<i<<endl;
        map<ll,long> m;
        ll sum=0;
        for(long j=0; j<i; j++){
            sum+=a[j];
        }
        m[sum]++;
        long z=x/i;

        for(long j=i; j<n; j++){
            sum = sum - a[j-i] + a[j];
            m[sum]++;
        }

        for(auto j:m){
            //cout<<j.F<<" "<<j.S<<endl;
            if(j.S == 0) break;
            count+=m[z-j.F]*j.S;
        }
    }

    cout<<count<<endl;
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