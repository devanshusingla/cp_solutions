#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#define ll long long

using namespace std;


int main() {
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;

    long n;
    cin>>n ;

    ll arr[n];
    for(long i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n) ;
    
    ll sum=0, limit=10000000;
    long i;
    for(i=0; i<n; i++){
        sum+=arr[i] ;
        if(sum>=limit) break;
    }

    if(sum>=limit) cout<<i+1 ;
    else cout<<-1 ;

    return 0;
}