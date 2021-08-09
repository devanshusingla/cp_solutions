/************************************************************
/  AUTHOR :  DEVANSHU SINGLA                                /
/  NICK :  DSINGLA                                          /
/  INSTITUTE :  IITK                                        /
************************************************************/
//                     TEMPLATE                            //

#include <bits/stdc++.h>
#define ll long long
#define N 100005
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define clr(x) x.clear()
#define F first
#define S second
#define MAX(x, y) (x) > (y) ? (x) : (y)
#define MIN(x, y) (x) < (y) ? (x) : (y)

using namespace std ;

void solve(){
    long n, k;
    cin>>n>>k ;

    map<char,long> m;
    for(long i=0; i<n; i++){
        char ch;
        cin>>ch;
        m[ch]++ ;
    }

    if(k==1){
        for(auto i:m){
            for(long j=0; j<i.S; j++){
                cout<<i.F;
            }
        }
        cout<<endl;
        return;
    }
    
    auto i= m.begin();
    if((*i).S < k){
        //cout<<"I was above"<<endl ;
        char c = (*i).F;
        k-=(*i).S ;
        i++ ;
        while(k>0){
            c = (*i).F;
            k-= (*i).S;
            i++ ;
        }

        cout<<c<<endl;
    } else {
        //cout<<"I was down"<<endl;
        cout<<(*i).F;
        (*i).S-=k;
        if((*i).S>0){
            //cout<<"I was above"<<endl;
            auto j = i;
            j++;
            if(j==m.end()){
                long x = (*i).S;
                while(x>0){
                    cout<<(*i).F;
                    x-=k;
                }
                cout<<endl;
                return;
            }
            for(auto itr:m){
                for(long j=0; j<itr.S; j++){
                    cout<<itr.F;
                }
            }
            cout<<endl;
            return;
        }
        //cout<<"I was down"<<endl;

        i++;
        long x = (*i).S ;
        char ch = (*i).F;
        cout<<ch ;
        i++;
        if(i==m.end()){
            //cout<<"I was above"<<endl;
            x-=k;
            while(x>0){
                cout<<ch;
            }
            cout<<endl;
        } else {
            //cout<<"I was down"<<endl;
            x--;
            for(long j=0; j<x; j++){
                cout<<ch;
            }
            for(;i!=m.end();i++){
                for(long j=0; j<(*i).S; j++){
                    cout<<(*i).F;
                }
            }
            cout<<endl;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;
    cin>>t ;
    for(int i=0; i<t; i++){
        solve() ;
    }
}