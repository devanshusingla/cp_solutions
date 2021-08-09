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
	int n;
    cin>>n ;
    vector<int> vec ; 
    vector<vector<int>> v(26,vec) ;
    for(int i=0; i<n; i++){
        int x;
        cin>>x ;
        v[x-1].pb[i] ;
    }

    for(int i=1; i<26; i++){
        if(v[i].empty()) continue;
    for(int j=0; j<i; j++){
        if(v[j].empty()) continue;

        int ii=0, ij=0 ;
        while(v[i][ii]||v[j][ij]){
            if(v[i][ii]>v[j][ij]){
                
            }
        }
    }
    }
}

int main(){
    #ifndef ONLINE_JUDGE 
  
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 
    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 
  
    #endif
	ios_base::sync_with_stdio(false) ;
	int t ;
	cin>>t ;
	for(int i=0; i<t; i++){
		solve() ;
	}
}