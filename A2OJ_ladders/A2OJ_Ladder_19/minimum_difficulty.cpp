#include <bits/stdc++.h>
#include <iostream>
#define mod 1000000007
#define ll long long
#define MIN(a,b) (((a)<(b)) ? (a) : (b))
#define MAX(a,b) (((a)>(b)) ? (a) : (b))

using namespace std ;

int main(){
    ios_base::sync_with_stdio( false ) ;

    int n;
    cin>>n ;
    int a, b, c, min_sum=1000, min ;
    cin>>a>>b ;
    min = b-a;
    for(int i=1; i<n-1; i++){
        cin>>c ;
        min_sum = MIN(min_sum, c-a) ;
        min = MAX(min, c-b) ;
        a=b;
        b=c;
    }
    cout<<MAX(min, min_sum) ;

    return 0;
}

