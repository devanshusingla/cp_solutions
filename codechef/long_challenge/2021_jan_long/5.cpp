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
#define F first
#define S second
#define rep(i,n) for(auto i=0*(n); i<(n); i++)
#define irep(i,n) for(auto i=(0*(n)+1); i<=(n); i++)
#define drep(i,n) for(auto i=(n)-1; i>=0; i--)
#define srep(i,s,n) for(auto i=(s); i<(n); i++)
#define maxs(x,y) (x = max(x,y))
#define mins(x,y) (x = min(x,y))
#define show(x) cout<<#x<<" = "<<x<<endl;
#define V(T) vector<T>
#define P(X,Y) pair<X,Y>
#define M(X,Y) map<X,Y>
#define MM(X,y) multimap<X,Y>
#define Q(T) queue<T>
#define St(T) stack<T>
#define PQ(T) priority_queue<T>

// use cin.ignore() after cin statement.
using namespace std ;

long k_prev, k_cur;

void fill_square(V(int) a[]){
    int i=1;
    while(i<16){
        int x = (i^(i>>1))^((i-1)^((i-1)>>1));
        
        switch (x)
        {
        case 1:
            cout<<"1 1 1"<<endl;
            break;
        
        case 2:
            cout<<"1 1 2"<<endl;
            break;

        case 4:
            cout<<"1 2 1"<<endl;
            break;

        case 8:
            cout<<"1 2 2"<<endl;
            break;

        default:
            break;
        }

        k_prev = k_cur;
        cin>>k_cur;

        if((i%2)&&(abs(k_cur-k_prev)==1)){
            a[0][1] = 1;
            a[1][0] = 1;
            a[1][1] = 0;
            a[0][0] = (k_cur>k_prev) ? 0 : 1;
            return;
        }

        i++;
    }
}

void fill_row(V(int) a[], int n){
    // cout<<"filling row"<<endl;
    srep(i, 2, n){
        // cout<<"Main loop"<<endl;
        cout<<"1 "<<i<<" 2"<<endl;
        k_prev = k_cur;
        cin>>k_cur;
        int x=1;
        while(x<8){
            // cout<<"minor loop"<<endl;
            int y = (x^(x>>1))^((x-1)^((x-1)>>1));

            switch (y)
            {
            case 1:
                cout<<"1 "<<i<<" 1"<<endl;
                break;
            
            case 2:
                cout<<"1 "<<i+1<<" 1"<<endl;
                break;

            case 4:
                cout<<"1 "<<i+1<<" 2"<<endl;
                break;

            default:
                break;
            }

            k_prev = k_cur;
            cin>>k_cur;

            if((x%2)&&(abs(k_cur-k_prev)==1)){
                a[i][0] = 1;
                a[i][1] = 0;
                a[i-1][0] = (k_cur>k_prev) ? 0 : 1;
                break;
            }

            x++;
        }
    }

    cout<<"1 "<<n<<" 2"<<endl;
    k_prev = k_cur;
    cin>>k_cur;
    a[n-1][1] = 1;
}

void fill_col(V(int) a[], int n){
    // cout<<"filling column"<<endl;
    srep(i, 2, n){
        // cout<<"Main loop"<<endl;
        if(i>2){
            cout<<"1 2 "<<i<<endl;
            k_prev = k_cur;
            cin>>k_cur;
        }
        int x=1;
        while(x<8){
            // cout<<"minor loop"<<endl;
            int y = (x^(x>>1))^((x-1)^((x-1)>>1));

            switch (y)
            {
            case 1:
                cout<<"1 1 "<<i<<endl;
                break;
            
            case 2:
                cout<<"1 1 "<<i+1<<endl;
                break;

            case 4:
                cout<<"1 2 "<<i+1<<endl;
                break;

            default:
                break;
            }

            k_prev = k_cur;
            cin>>k_cur;

            if((x%2)&&(abs(k_cur-k_prev)==1)){
                a[0][i] = 1;
                a[1][i] = 0;
                a[0][i-1] = (k_cur>k_prev) ? 0 : 1;
                break;
            }

            x++;
        }
    }

    cout<<"1 2 "<<n<<endl;
    k_prev = k_cur;
    cin>>k_cur;
    a[1][n-1] = 1;
}

void fill_matrix(V(int) a[], int n){
    srep(i,2,n) srep(j, 2, n){
        cout<<"1 "<<i<<" "<<j<<endl;
        k_prev = k_cur;
        cin>>k_cur;
        a[i-1][j-1] = 0;

        cout<<"1 "<<i+1<<" "<<j+1<<endl;
        k_prev = k_cur;
        cin>>k_cur;

        if(k_cur>k_prev){
            cout<<"1 "<<i+1<<" "<<j+1<<endl;
            k_prev = k_cur;
            cin>>k_cur;
        }

        a[i][j] = 1;
    }
}

void solve(){
    int n;
    long q;
    cin>>n>>q>>k_prev;
    k_cur = k_prev;
    V(int) a[n];
    rep(i,n) a[i] = V(int) (n,0);
    fill_square(a);
    
    if(n>2){
        fill_row(a,n);
        fill_col(a,n);
        fill_matrix(a,n);
    }

    cout<<2<<endl;
    rep(j,n){
        rep(i,n){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/output.txt", "w", stdout); 

    #endif
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    ll t ;
    cin>>t ;
    cin.ignore() ;
    
    rep(i,t){
        solve();
        int v;
        cin>>v;
        if(v==-1) return 0;
    }

    return 0;
}