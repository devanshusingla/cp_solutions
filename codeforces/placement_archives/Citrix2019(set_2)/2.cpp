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
    string s;
    string b,t;
    set<string> a;
    vector<string> v;
    getline(cin,s);
    for(int start=0; start<s.length(); start++){
        int dif=0;
        b = s.substr(0,start);
        v.pb(b);
        for(int i=start; i<s.length(); i++){
            if(s[i]=='1') dif++;
            else dif--;
            t+=s[i];
            if(dif == 0){
                a.insert(t);
                t.clear();
                v.pb("2");
            }
            if(dif<0){
                v.pb("0");
                t.clear();
                dif=0;
            }
        }
        v.pb(t);
        //cout<<"b: "<<b<<" ";
        s.clear();
        auto itr = a.rbegin();
        for(auto i:v){
            if(i=="2"){
                s+=*itr;
                itr++;
                //cout<<s<<endl;
            }else{
                s+=i;
            }
        }
        //cout<<" t: "<<t;
        //for(auto i:v) cout<<i;
        //cout<<endl<<s;
        //cout<<endl;
        b.clear();
        t.clear();
        a.clear();
        v.clear();
    }
    cout<<s;
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