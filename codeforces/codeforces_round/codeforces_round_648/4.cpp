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
    int n,m;
    cin>>n>>m;
    //cout<<n<<m<<endl;
    char a[n+2][m+2] = {};
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
            //cout<<a[i][j]<<endl;
        }
    }
    irep(i,n)
    irep(j,n){
        if(a[i][j] == 'B'){
            switch(a[i][j-1]){
                case 'G':
                    cout<<"No"<<endl;
                    return;
                    break;
                case 'B':
                    break;
                default :
                    a[i][j-1] = '#';
                    break;
            }
            switch(a[i][j+1]){
                case 'G':
                    cout<<"No"<<endl;
                    return;
                    break;
                case 'B':
                    break;
                default :
                    a[i][j+1] = '#';
                    break;
            }
            switch(a[i+1][j]){
                case 'G':
                    cout<<"No"<<endl;
                    return;
                    break;
                case 'B':
                    break;
                default :
                    a[i+1][j] = '#';
                    break;
            }
            switch(a[i-1][j]){
                case 'G':
                    cout<<"No"<<endl;
                    return;
                    break;
                case 'B':
                    break;
                default :
                    a[i-1][j] = '#';
                    break;
            }
        }
    }
    /*for(long i=0; i<=n+1; i++){
        for(long j=0; j<=m+1; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;*/
    int vis[n+2][m+2] = {};
    irep(i,n+1){
        vis[i][0] = 1;
        vis[i][m+1] = 1;
    }
    irep(j,m+1){
        vis[0][j] = 1;
        vis[n+1][j] = 1;
    }
    vis[0][0] = 1;
    Q(P(int,int)) q;
    q.push({n,m});
    if(a[n][m]=='B'){
        cout<<"No"<<endl;
        return;
    }
    if(a[n][m]=='#'){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(a[i][j] == 'G'){
                    cout<<"No"<<endl;
                    return;
                }
            }
        }
        cout<<"Yes"<<endl;
        return;
    }
    vis[n][m] = 1;
    while(!q.empty()){
        int i,j;
        i = q.front().F;
        j = q.front().S;
        q.pop();
        if(!vis[i][j-1]&&(a[i][j-1]!='#')){
            q.push({i,j-1});
            vis[i][j-1] = 1;
        }
        if(!vis[i][j+1]&&(a[i][j+1]!='#')){
            q.push({i,j+1});
            vis[i][j+1] = 1;
        }
        if(!vis[i+1][j]&&(a[i+1][j]!='#')){
            q.push({i+1,j});
            vis[i+1][j] = 1;
        }
        if(!vis[i-1][j]&&(a[i-1][j]!='#')){
            q.push({i-1,j});
            vis[i-1][j] = 1;
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(a[i][j] == 'G'){
                if(!vis[i][j]){
                    cout<<"No"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"Yes"<<endl;
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