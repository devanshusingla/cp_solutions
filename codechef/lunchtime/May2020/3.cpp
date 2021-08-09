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
    cin.ignore();
    string a,b,ans;
    getline(cin,a);
    getline(cin,b);
    //cout<<a<<endl;
    //cout<<b<<endl;
    set<char> s;
    int arr[26] = {};
    vector<int> v[26];
    for(int i=0; i<n; i++){
        if(a[i]<b[i]){
            cout<<-1<<endl;
            return;
        }
        arr[a[i]-'a'] = i+1;
        if(a[i]>b[i]){
            s.insert(b[i]);
            v[b[i]-'a'].pb(i);
        }
    }
    for(auto i=s.rbegin(); i!=s.rend(); i++){
        //cout<<*i;
        int x=(*i)-'a';
        if(arr[x]==0){
            cout<<-1<<endl;
            return;
        }
        ans+=to_string(v[x].size()+1);
        for(auto j:v[x]){
            ans+=(" "+to_string(j));
        }
        ans+=(" "+to_string(arr[x]-1)+"\n");
    }
    cout<<s.size()<<endl;
    cout<<ans;
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