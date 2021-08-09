#include <bits/stdc++.h>
#include <iostream>
#define mod 1000000007
#define ll long long
#define MIN(a, b) ((a)<(b)) ? (a) : (b)
#define MAX(a, b) ((a)>(b)) ? (a) : (b)

using namespace std ;

double com(int n, int x){
    long num=1, den=1 ;
    x = MIN(x, n-x) ;
    if(x==0) return 1;

    for(int i=1; i<=x; i++){
        den*=(long)i ;
    }
    
    for(int i=0; i<x; i++){
        num*=(long)(n-i) ;
    }

    return (double)num/(double)den ;
}

int main(){
//    ios_base::sync_with_stdio( false ) ;

    string str ;
    int x=0, y=0, d=0, diff ;
    getline(cin,str) ;

//x stores expected postion from origin
//loop to store value of x
    for(auto ch:str){
        if(ch=='+'){
            x++ ;
        } else {
            x-- ;
        }
    }

    getline(cin,str) ;

//y stores actual position without '?' from origin
//d stores number of '?'
//loop to find value of y and d
    for(auto ch:str){
        if(ch=='+'){
            y++ ;
        } else if(ch=='-'){
            y-- ;
        } else {
            d++ ;
        }
    }

//diff stores absolute steps required to reach destination
    diff = abs(y-x) ;
    if(diff>d){
        cout<<0.0 ;
        return 0;
    }

    x = (d-diff)/2 ;
    double ans = (com(d, x)/pow(2, d)) ;
    printf("%0.12f\n", ans) ;

    return 0;
}
