#include <bits/stdc++.h>
#include <iostream>
#define mod 1000000007
#define ll long long
#define MIN(a,b) ((a)<(b)) ? (a) : (b)
#define MAX(a,b) ((a)>(b)) ? (a) : (b)

using namespace std ;

int main(){
//    ios_base::sync_with_stdio( false ) ;

    int n, max=0;
    long l;
    cin>>n>>l ;
    vector<long> v(n,0) ;
    for(int i=0; i<n; i++){
        scanf("%ld", &v[i]) ;
    }
    sort(v.begin(), v.end()) ;
    v.push_back(2*l-*(v.rbegin())) ;
    v.insert(v.begin(), -1*(*(v.begin()))) ;
    
    vector<long> gap ;
    for(auto i=v.begin(); i!=(v.end()-1); i++){
        gap.push_back(*(i+1)-*i) ;
    }

    for(auto i:gap){
        max = MAX(max, i) ;
    }
    printf("%0.10f", max/2.0) ;

    return 0;
}
