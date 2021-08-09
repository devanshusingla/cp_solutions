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
    string s;
    getline(cin,s) ;
    long n = s.length();

    ll odd=0, even=0;

    for(long i=0; i<n; i++){
        long k=1;
        while((i>=k)&&(i+k<n)&&(s[i-k]==s[i+k])){
            odd++ ;
            k++;
        }
    }

    for(long i=0,j=1; j<n; i++, j++){
        long k=0;
        while((i>=k)&&(j+k<n)&&(s[i-k] == s[j+k])){
            even++ ;
            k++ ;
        }
    }

    //cout<<"odd: "<<odd<<endl;
    //cout<<"even: "<<even<<endl;
    cout<<((ll)n*(ll)(n-1))/2 - odd - even + 1;
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    solve();
}