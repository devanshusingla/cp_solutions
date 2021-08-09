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

void solve(){
	int n, flag=1;
    cin >>n;
    pair<int,int> p1, p2, d;
    p1 = mp(0,0) ;
    p2 = mp(0,0) ;
    for(int i=0; i<n; i++){
        int x;
        int y;
        cin>>x>>y;
        p1 = p2 ;
        p2 = mp(x,y) ;
        d = mp(p2.F - p1.F, p2.S - p1.S) ;
        //cout<<d.F<<d.S<<endl ;
        //cout<<d.F<<d.S<<endl ;
        if(!((d.S>=0)&&(d.F>=d.S))){
            flag = 0;
        }
    }

    if(flag) cout<<"YES"<<endl ;
    else cout<<"NO"<<endl ;
    return ;
}

int main(){
    #ifndef ONLINE_JUDGE 
   
    freopen("input.txt", "r", stdin);  
    freopen("output.txt", "w", stdout); 
  
    #endif
	
	ios_base::sync_with_stdio(false) ;
	
    int t;
    cin>>t ;
    for(int i=0; i<t; i++) solve();
}