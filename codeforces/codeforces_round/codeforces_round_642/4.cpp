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
    cin>>n;
    long arr[n] = {0};

    long bs=n, i;
    set<long> b, s, bd, sd;
    b.insert(0);

    for(i=1; i<=n, bs>2; i++){
        long x=(bs)/2;
        if(bs%2){
            for(auto j:b){
                arr[j+x] = i;
                bd.insert(j);
                bd.insert(j+x+1);
            }
            for(auto j:s){
                arr[j+x-1] = i;
                bd.insert(j+x);
                sd.insert(j);
            }
        } else {
            for(auto j:b){
                arr[j+x-1] = i;
                bd.insert(j+x);
                sd.insert(j);
            }
            for(auto j:s){
                arr[j+x-1] = i;
                sd.insert(j);
                sd.insert(j+x);
            }
        }

        b = bd;
        s = sd;
        bs = x;
        bd.empty();
        sd.empty();
    }

    if(bs == 1){
        for(auto j:b){
            arr[j] = i++;
        }
    } else {
        for(auto j:b){
            arr[j] = i++;
            s.insert(j+1);
        }
        for(auto j:s){
            arr[j] = i++;
        }
    }

    for(long j=0; j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;
    cin>>t ;
    for(int i=0; i<t; i++){
        solve() ;
    }
}