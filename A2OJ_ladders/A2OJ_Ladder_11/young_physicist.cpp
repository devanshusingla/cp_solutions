#include <bits/stdc++.h>

using namespace std ;

int main(){
	ios::sync_with_stdio(false) ;
    int n;
    cin >> n;
    vector < int > v = {0, 0, 0}, u = {0, 0, 0} ;
    for(int i=0; i<n; i++){
        cin>>v[0]>>v[1]>>v[2] ;
        for(int j=0; j<3; j++){
            u[j]+=v[j] ;
        }
    }
    
    int flag = 1;
    for(auto i:u){
        if(i){ flag = 0;}
    }
    if(flag)
        cout<<"YES" ;
    else
        cout<<"NO" ;
}	
