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

void solve(){
    int n;
    cin>>n;
    int s[n],r;
    //cout<<endl;
    for(int i=0; i<n; i++){
        cin>>s[i];
        //cout<<s[i]<<endl;
    }
    if(n&1){
        cout<<-1<<endl;
        return;
    }
    //cout<<endl;
    if(n==2){
        //cout<<"0: "<<s[0]<<endl;
        //cout<<"1: "<<s[1]<<endl;
        cout<<(s[0]^s[1])<<endl;
        return;
    }
    int ans=1024;
    for(int i=1;i<n; i++){
        int flag = 1;
        r = s[0]^s[i];
        int f[1025] = {};
        for(int j=0; j<n; j++){
            f[s[j]]++;
        }
        for(int j=0; j<n; j++){
            if(f[s[j]]==2) continue;
            if(f[s[j]^r]++) continue;
            flag = 0;
            break;
        }
        if(flag){
            ans = MIN(ans,r);
        }
    }
    if(ans == 1024) cout<<-1<<endl;
    else cout<<ans<<endl;
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