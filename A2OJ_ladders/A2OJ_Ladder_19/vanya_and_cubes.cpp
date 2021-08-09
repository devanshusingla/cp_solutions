#include <bits/stdc++.h>
#include <iostream>
#define mod 1000000007
#define ll long long

using namespace std ;

int main(){
    ios_base::sync_with_stdio( false ) ;

    int n;
    cin>>n ;
    int x = (int)pow((double)n*6, (double)1/3) ;
    while(x*(x+1)*(x+2)/6 > n){
        x-- ;
    }
    cout<<x ;

    return 0;
}

