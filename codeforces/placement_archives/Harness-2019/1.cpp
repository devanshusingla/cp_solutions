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
    ll n;
    cin>>n;
    multimap<int,int> m;
    int arr[n];
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>n;
    for(ll i=0; i<n; i++){
        int x;
        cin>>x;
        m.insert({arr[i],x});
    }
/*
    for(auto i:m){
        cout<<i.F<<" "<<i.S<<endl;
    }
*/
    auto i = m.rbegin();
    int ans=1;
    int key = (*i).F, t=(*i).S, k=key;
    while(1){
        while((i!=m.rend()) && ((*i).F == k)){
            //cout<<(*i).F<<" "<<(*i).S<<endl;
            t = (*i).S;
            i++;
        }
        //cout<<endl;
        //cout<<"k: "<<k<<" t: "<<t<<" key: "<<key<<endl<<endl;
        if((k+t)<=key){
            ans++;
            key = k;
        }
        if(i == m.rend()) break;
        k = (*i).F;
    }

    cout<<ans;
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