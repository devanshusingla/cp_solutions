#include <bits/stdc++.h>
#include <iostream>
#define mod 1000000007
#define ll long long

using namespace std ;

int main(){
    ios_base::sync_with_stdio( false ) ;

    int n;
    char ch;
    vector<int> v(26, 0) ;
    cin>>n ;
    for(int i=0; i<n; i++){
        cin>>ch ;
        ch = tolower(ch) ;
        v[ch-'a'] = 1 ;
    }
    for(auto i:v){
        if(!i){
            cout<<"NO" ;
            return 0;
        }
    }
    cout<<"YES" ;

    return 0;
}

