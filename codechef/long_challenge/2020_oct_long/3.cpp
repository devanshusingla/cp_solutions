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

ll min_spanning_tree(V(V(long)) &g, long (* dis)(V(long) &, V(long) &)){
    long n = g.size();
    ll sum=0;
    
    
    unordered_map<long, P(long, long)> m;
    irep(i,n-1){
        m[i] = {dis(g[0], g[i]), 0};
    }

    while(!m.empty()){
        auto min = m.begin();
        auto i = next(min, 1); 
        for(; i!=m.end(); i++){
            if((*i).S.F < (*min).S.F){
                min = i;
            }
        }

        long x = (*min).F;
        sum+=(ll)(*min).S.F;
        m.erase(min);

        i = m.begin();
        for(; i!=m.end(); i++){
            long d = dis(g[(*i).F], g[x]);
            if(d < (*i).S.F){
                (*i).S = {d, x};
            }
        }
    }

    return sum;
}

long dis(V(long) &a, V(long) &b){
    long sum=0;
    auto i = a.begin();
    auto j = b.begin();

    while(i!=a.end()){
        sum += abs(*i - *j);
        i++;
        j++;
    }

    return sum;
}

void solve(){
    long n;
    int d;
    cin>>n>>d;

    V(V(long)) g(n, V(long)(d, 0));
    rep(i,n) rep(j,d)
        cin>>g[i][j];

    ll sum = min_spanning_tree(g, dis);

    cout<<sum<<endl;
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