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

template <typename T>
class Graph {   //follow comments for undirected graphs
    public:

    vector<vector<T>> front ;
    T n;

    Graph(T n){
        this->n = n;
        this->front = vector<vector<T>> (n, vector<T> ()) ;
    }

    void add_edge(T x, T y){
        front[x].pb(y) ;
        front[y].pb(x) ; //change to front
    }
};

void btraverse(Graph<long> *g, long v, ll *sum){
    //cout<<"bsearch"<<endl ;
    queue<long> q;
    q.push(v) ;
    long index[g->n] = {0};
    int flag[g->n] = {0};
    flag[v] = 1;
    //cout<<v+1<<": "<<index[v]<<endl<<endl ;

    while(!q.empty()){
        for(auto i:g->front[q.front()] ){
            if(!flag[i]){
                flag[i] = 1;
                q.push(i) ;
                index[i] = index[q.front()] + 1 ;
                sum[i] += index[i];
                //cout<<i+1<<": "<<index[i]<<endl ;
            }
        }
        q.pop() ;
        //cout<<endl ;
    }
    //cout<<endl ;
}

void solve(){
    long n, a, b, c;
    ll m;
    cin>>n>>m>>a>>b>>c ;
    ll p[m] ;
    for(ll i=0; i<m; i++){
        cin>>p[i] ;
    }

    Graph<long> *g = new Graph<long> (n) ;

    for(ll i=0; i<m; i++){
        long x,y ;
        cin>>x>>y ;
        g->add_edge(x-1,y-1) ;
    }

    a--;
    b--;
    c--;

    sort(p, p+m);
    //cout<<"prices"<<endl;
    //cout<<1<<": "<<p[0]<<endl ;
    for(long i=1; i<m; i++){
        p[i] += p[i-1];
        //cout<<i+1<<": "<<p[i]<<endl ;
    }
    //cout<<endl ;

    ll sum[n] = {0} ;
    ll extra[n] = {0} ;

    btraverse(g,a,sum) ;
    //cout<<"sum"<<endl ;
    //for(long i=0; i<n; i++) cout<<i+1<<": "<<sum[i]<<endl ;
    btraverse(g,b,sum) ;
    //cout<<"sum"<<endl ;
    //for(long i=0; i<n; i++) cout<<i+1<<": "<<sum[i]<<endl ;
    btraverse(g,c,sum) ;
    //cout<<"sum"<<endl ;
    //for(long i=0; i<n; i++) cout<<i+1<<": "<<sum[i]<<endl ;
    btraverse(g,b,extra) ;
    //cout<<"extra"<<endl ;
    //for(long i=0; i<n; i++) cout<<i+1<<": "<<extra[i]<<endl ;

    ll min;
    int f=0 ;

    for(long i=0; i<n; i++){
        if(sum[i]>m) continue;
        if(!f){
            if(extra[i]){
                min = (min, p[sum[i]-1]+ p[extra[i]-1]) ;
            } else {
                min = (min, p[sum[i]-1]) ;
            }
            f=1;
            continue;
        }
        if(extra[i]){
            min = MIN(min, p[sum[i]-1]+ p[extra[i]-1]) ;
        } else {
            min = MIN(min, p[sum[i]-1]) ;
        }
    }

    cout<<min<<endl;

}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;
    cin>>t ;
    for(int i=0; i<t; i++){
        solve() ;
    }
}