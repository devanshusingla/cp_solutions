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
    long n,q;
    cin>>n>>q;
    map<char, long> m;
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        m[c]++ ;
    }

    vector<long> v;
    vector<long> sum(1,0);
    for(auto i:m){
        //cout<<i.F<<": "<<i.S<<endl;
        v.pb(i.S);
        sum[0]+=i.S;
    }

    sort(v.begin(), v.end());
    long k = 1;
    auto itr = v.begin();

    while(itr != v.end()){
        sum.pb(sum[k-1] - distance(itr, v.end())) ;
        while(((*itr)<=k)&&(itr!=v.end())) itr++;
        //cout<<k<<": "<<sum[k]<<endl;
        k++ ;
    }

    for(int i=0; i<q; i++){
        ll c;
        cin>>c;
        if(c>=k) cout<<0<<endl;
        else cout<<sum[c]<<endl;
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