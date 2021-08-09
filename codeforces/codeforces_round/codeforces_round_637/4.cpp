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
    int n, k;
    string num[10] = {"1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"} ;
    
    cin>>n>>k ;
    cin.ignore() ;

    int arr[n][10] ;
    for(int i=0; i<n; i++){
        string x;
        getline(cin,x) ;
        //cout<<x<<endl ;

        for(int j=0; j<10; j++){
            int y=0;
            int dif;
                for(int z=0; z<7; z++){
                    dif = (int)(num[j][z]-x[z]) ;
                    if(dif<0){
                        y=-1;
                        break;
                    }
                    y+=dif ;
                }
            arr[i][j] = y;
            //cout<<arr[i][j]<<endl ;
        }
        //cout<<endl ;
    }
    
    map<int, int> m[n];

    for(int i=0; i<n; i++){
        for(int j=0; j<10; j++){
            if(arr[i][j]==-1) continue;
            m[i][arr[i][j]] = MAX(j, m[i][arr[i][j]]);
        }
    }

    //for(int i=0; i<n; i++){
    //    for(auto itr:m[i]){
            //cout<<itr.F<<": "<<itr.S<<endl ;
    //    }
        //cout<<endl ;
    //}

    map<int, int> sum = m[0], d, e;

    for(int i=1; i<n; i++){
        for(auto j:sum){
            for(auto x:m[i]){
                d[j.F+x.F] = MAX(j.S+10*x.S,d[j.F+x.F]) ;
                //cout<<j.F+x.F<<": "<<d[j.F+x.F]<<endl ;
                //cout<<d[j.F+x.F]<<endl ;
            }
        }
        sum = d ;
        d = e ;
    }

    int result = -1;
    for(auto i:sum){
        if(i.F == k){
            result = i.S;
            break ;
        }
    }

    cout<<result<<endl ;

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