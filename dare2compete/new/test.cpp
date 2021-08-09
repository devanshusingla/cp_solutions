/************
/ AUTHOR : YATHARTH GOSWAMI         /  
/ ALIAS : hacker_yg                 /
/ INSTITUTE : IIT Kanpur            /
************/
//          TEMPLATE                //

#include <bits/stdc++.h>

#define ll long long
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define F first
#define S second

using namespace std;

int solve(string s, string t, int n, vector <int> f, vector <int> b){
    if ((s[n-1] != t[0])&&(s[n-1] != t[n-1])) return -1;
    else if (n == 0) return 0;
    else {
        int res = 0;
        if ((s[n-1] == t[0])&&(s[n-1] != t[n-1])){
            if (solve(s.substr(0, n-1), t.substr(0, n-1), n-1, f, b) == -1){
                return -1;
            }
            else res = f[n-1] + solve(s.substr(0, n-1), t.substr(0, n-1), n-1, f, b);
            return res;
        }
        else if ((s[n-1] == t[n-1])&&(s[n-1] != t[0])){
             if (solve(s.substr(0, n-1), t.substr(1, n-1), n-1, f, b) == -1){
                 return -1;
             }
             else  res = b[n-1] + solve(s.substr(0, n-1), t.substr(1, n-1), n-1, f, b);
             return res;
        }
        else {
             if ((solve(s.substr(0, n-1), t.substr(0, n-1), n-1, f, b) == -1)&&(solve(s.substr(0, n-1), t.substr(1,
                                 n-1), n-1, f, b) == -1)) return -1;
             else if ((solve(s.substr(0, n-1), t.substr(0, n-1), n-1, f, b) == -1)&&(solve(s.substr(0, n-1),
                                 t.substr(1, n-1), n-1, f, b) != -1))
                 return solve(s.substr(0, n-1), t.substr(1, n-1), n-1, f, b) + b[n-1];
             else if ((solve(s.substr(0, n-1), t.substr(0, n-1), n-1, f, b) != -1)&&(solve(s.substr(0, n-1),
                                 t.substr(1, n-1), n-1, f, b) == -1)) 
                 return  solve(s.substr(0, n-1), t.substr(0, n-1), n-1, f, b) + f[n-1];
             else res = min(f[n-1] + solve(s.substr(0, n-1), t.substr(0, n-1), n-1, f, b), b[n-1] + solve(s.substr(0, n-1),
                        t.substr(1,n-1), n-1, f, b));
            return res;
        }
    }
}

int main(){
    #ifndef ONLINE_JUDGE 
 
    freopen("/home/devanshu/Desktop/cp/cp_questions/input.txt", "r", stdin);  
    freopen("/home/devanshu/Desktop/cp/cp_questions/output.txt", "w", stdout); 

    #endif
    int t;
    scanf ("%d\n", &t);
    while (t--){
        int n;
        scanf("%d\n", &n);
        string s, t;
        getline (cin, s);
        getline (cin, t);
        vector <int> f(n), b(n);
        for (int i = 0; i< n; i++) cin >> f[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        int ans = solve(s, t, n, f, b);
        if (ans == -1) cout << "cannot be formed" << endl;
        else cout << ans << endl;
    }
    return 0;
}