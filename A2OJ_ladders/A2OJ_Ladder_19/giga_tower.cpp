#include <bits/stdc++.h>
#include <iostream>
#define mod 1000000007
#define ll long long
#define MIN(a,b) ((a)<(b)) ? (a) : (b)
#define MAX(a,b) ((a)>(b)) ? (a) : (b)

using namespace std ;

int main(){
    ios_base::sync_with_stdio( false ) ;

    string s ;
    getline(cin, s) ;
    if(s[0]=='-'){
        if(s.length() == 2){
            int c = s[1]-'0' ;
            if(c==9) cout<<1 ;
            else cout<<8+c ;
            return 0 ;
        }

        char b = *(s.rbegin()) ;
        char a = *(s.rbegin()+1) ;
        int c = (int)10*(a-'0')+(int)(b-'0') ;
        
        if((c<=80)||(c>98)){
            int k=(c+2)%10 ;
            if(k) cout<<k ;
            else cout<<10 ;
        } else if((c<=90)&&(c>80)) cout<<1 ;
        else cout<<(c+1)%10 ;
        return 0;
    }

    int c ;
    if(s.length() == 1){
        c = s[0] - '0' ;
    } else{
        char b = *(s.rbegin()) ;
        char a = *(s.rbegin()+1) ;
        c = (int)10*(a-'0') + (int)(b-'0') ;
    }

    if((c<78)||(c>=89)){
        int k=(108-c)%10 ;
        if(k) cout<<k ;
        else cout<<10 ;
    } else if((c>=79)&&(c<89)) cout<<1 ;
    else cout<<2 ;

    return 0;
}
