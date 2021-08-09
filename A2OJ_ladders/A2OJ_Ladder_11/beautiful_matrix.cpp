#include <bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false) ;
    int sum = 0;
    vector< vector< int > > v(5, vector< int >(5, 0));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> v[i][j];
            if(v[i][j]){
                sum+=abs(i-2) ;
                sum+=abs(j-2) ;
            }
        }
    }

    cout<<sum ;
    return 0;
}
