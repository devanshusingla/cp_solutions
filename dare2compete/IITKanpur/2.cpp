#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;


int main() {
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    long n, k;
    cin>>n>>k ;
    k-- ;
    int flag[n] = {0} ;
    ll arr[n] ;
    for(long i=0; i<n; i++){
        cin>>arr[i] ;
    }

    flag[k] = 1;
    int f=1 ;
    ll x = arr[k];
    while(f){
        f=0;
        for(long i=0; i<n; i++){
            if(!flag[i]){
                if(x&arr[i]){
                    flag[i] = 1;
                    f=1;
                    x = x|arr[i];
                }
            }
        }
    }

    long count = 0;
    for(long i=0; i<n; i++){
        count += flag[i] ;
    }

    cout<<n-count ;

    return 0;
}