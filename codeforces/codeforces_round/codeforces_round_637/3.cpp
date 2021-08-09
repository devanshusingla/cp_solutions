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
    long n;
    cin>>n ;
    long p[n], index[n];
    for(long i=0; i<n; i++){
        cin>>p[i] ;
        p[i]-- ;
        index[p[i]] = i ;
    }

    long i = index[0] ;
    long x = 0 ;
    long mark[n] = {0};
    mark[i] = 1;

    int flag=0;

    //cout<<"position: "<<i+1<<" value: "<<x+1<<endl ;
    while(x<n){
        if((i==n-1)||mark[i+1]){
            x++;
        if(x==n) break;
            i = index[x] ;
            mark[i] = 1;
    //cout<<"position: "<<i+1<<" value: "<<x+1<<endl ;
            continue;
        }

        i++;
        x++;
        if(x==n) break;
        if(p[i] == x){
            mark[i] = 1;
        } else {
            flag=1;
            break;
        }
    //cout<<"position: "<<i+1<<" value: "<<x+1<<endl ;
    }

    if(flag){
        cout<<"No"<<endl ;
    } else {
        cout<<"Yes"<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    long t ;
    cin>>t ;
    for(long i=0; i<t; i++){
        solve() ;
    }
}