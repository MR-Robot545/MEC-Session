// comment
// author by zeyad
#include<bits/stdc++.h>

#define             endl "\n"
#define             ll long long
#define             pii pair<int,int>
#define             pll pair<ll,ll>
#define             f(a) for(int i=0;i<a;i++)
#define             rf(a) for(int i=arr-1;i>=0;i--)
#define             w  int t;cin>>t;while(t--)
#define             all(v) v.begin(),v.end()
#define             rall(v) v.rbegin(),v.rend()
#define             yes cout<<"YES"<<endl
#define             no cout<<"NO"<<endl
#define             prev2pn(x) pow(2,floor(log2(x)))
#define             RR iostream::sync_with_stdio(false);cin.tie(nullptr); \
                        cout.tie(nullptr);
#define             arrRange(a , l , r) int _##arr[(r-l)+1]; int* arr= _##arr-l;

#define             OO 0x3f3f3f3f3f3f3f3f
#define             pr(v) for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
#define             ld long double
#define             fr first
#define             se second
#define             BIG  0x3f
#define             sz(s) (int)s.size()
#define             ones(x) __builtin_popcount(x)
#define             int ll
const ll MOD = 1e9 + 7;
const int N = 1e6 + 5;
const int K = 2e5 + 5;
const double EPS = 1e-6;
const double PI = 3.14159265;

using namespace std;
int n, m, k;
const int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};

bool LinearSearch(int target,vector<int>v) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i]==target) return true;
    }
    return false;
}
int binarySearch(int target,vector<pair<int,int>>v) {
    int l=0,h=v.size()-1;
    while (l<=h) {
        int mid = l+(h-l)/2;
        if (v[mid].first== target)
            return v[mid].second;
        if (v[mid].first>target) {
            h = mid -1;
        }else {
            l=mid+1;
        }
    }
    return -1;
}
// l =5 h= 9
void solve() {
    cin>>n>>m;
    vector<pair<int,int>>v;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    while(m--) {
        int target;
        cin>>target;
        cout<<binarySearch(target,v) <<endl;
    }

}

signed main() {
    RR
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
};
