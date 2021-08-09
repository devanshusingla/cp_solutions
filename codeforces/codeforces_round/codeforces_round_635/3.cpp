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
    long n,k;
    cin>>n>>k ;

    vector<vector<long>> v(n) ;

    for(long i=0; i<n-1; i++){
        long x,y ;
        cin>>x>>y ;
        v[x-1].pb(y-1) ;
        v[y-1].pb(x-1) ;
    }

    long val[n] ;
    long flag[n] = {0} ;
    stack<long> index;
    stack<vector<long>> s;
    s.push(vector<long> ());

    s.top().pb(0) ;
    index.push(0) ;
    flag[0] = 1;
    
    while(!s.empty()){
        //cout<<"level: "<<s.size()<<endl;
        //cout<<"pointing: "<<index.top()<<endl ;
        //for(auto i:s.top()) cout<<i+1<<" ";
        //cout<<endl ;
        vector<long> dummy;
        for(auto i:v[s.top()[index.top()]]){
            if(!flag[i]){
                dummy.pb(i) ;
                flag[i] = 1;
            }
        }
        if(dummy.empty()){
            val[s.top()[index.top()]] = 1-s.size() ;
            //cout<<"sum: "<<1<<endl;
            index.top()++ ;
            while(s.top().size() == index.top()){
                long sum = 1;
                for(auto j:s.top()){
                    sum+=(val[j]+s.size());
                }
                //cout<<"sum: "<<sum<<endl;
                s.pop();
                index.pop();
                if(s.empty()) break;
                val[s.top()[index.top()]] = sum-s.size() ;
                index.top()++ ;
            }
        } else {
            s.push(dummy);
            index.push(0);
        }
        //cout<<endl ;
    }
    //for(long i=0; i<n; i++){
    //    cout<<(i+1)<<": "<<val[i]<<endl ;
    //}

    sort(val, val+n);

    ll ans=0;
    for(long i=n-1; i>=k; i--){
        ans+=val[i] ;
    }
    cout<<ans<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    
    solve() ;
}