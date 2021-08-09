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

// use cin.ignore() after cin statement.
using namespace std ;

void inew(vector<vector<pair<int,int>>> **d, int i, int j){
    d[i][j].pb({});
    d[i][j].back().pb({i,j});
}

void anew(vector<vector<pair<int,int>>> **d, int i, int j){
    for(auto k:(d[i][j])){
        k.pb({i,j});
    }
}

void solve(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    vector<vector<pair<int,int>>> d[n][n];
    if(a[0][0] < 0){
        cout<<0;
        return;
    }
    for(int i=0; i<n; i++){
        for(int j=0;j<i;j++){
            if(a[j][i]!=-1){
                
            }
        }
    }
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