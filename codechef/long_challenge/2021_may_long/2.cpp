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
    string s[3];
    for(int i=0; i<3; i++) getline(cin, s[i]);

    int o=0, x=0;
    for(int i=0; i<3; i++)
    for(int j=0; j<3; j++){
        if(s[i][j] == 'X') x++;
        if(s[i][j] == 'O') o++;
    }
    // show(x);
    // show(o);
    if(x!=o && x!=o+1){
        cout<<3<<endl;
        return;
    }

    int bx = 0;
    int bo = 0;

    for(int i=0; i<3; i++){
        if(s[i][0] == s[i][1] && s[i][1] == s[i][2]){
            if(s[i][0] == 'X') bx++;
            if(s[i][0] == 'O') bo++;
        }
    }

    for(int i=0; i<3; i++){
        if(s[0][i] == s[1][i] && s[1][i] == s[2][i]){
            if(s[0][i] == 'X') bx++;
            if(s[0][i] == 'O') bo++;
        }
    }

    if(s[0][0] == s[1][1] && s[1][1] == s[2][2]){
        if(s[0][0] == 'X') bx++;
        if(s[0][0] == 'O') bo++;
    }

    if(s[0][2] == s[1][1] && s[1][1] == s[2][0]){
        if(s[0][2] == 'X') bx++;
        if(s[0][2] == 'O') bo++;
    }

    // show(bx);
    // show(bo);
    if(bx == 0 && bo == 0){
        if(x+o == 9) cout<<1<<endl;
        else cout<<2<<endl;
    }
    else if(bo > 0 && bx == 0 && x == o) cout<<1<<endl;
    else if(bo == 0 && bx > 0 && x == o+1) cout<<1<<endl;
    else cout<<3<<endl;
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