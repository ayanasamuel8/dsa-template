#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#include <algorithm>
#include <random>
#include <chrono>
#include <map>
#include <unordered_map>
#include <queue>
#include <set>

using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;
using vpii = vector<pii>;

#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) (x).begin(), (x).end()
#define REP(i, n) for (int i = 0; i < (n); i++)
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define REV(i, a, b) for (int i = (a); i >= (b); i--)

const int MOD = 1e9 + 7;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void Fastio() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

const vpii DIRECTIONS_4 = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
const vpii DIRECTIONS_8 = {{-1, -1}, {-1, 1}, {1, -1}, {1, 1}, {-1, 0}, {1, 0}, {0, -1}, {0, 1}};

ll iinp() { ll val; cin >> val; return val; }
string sinp() { string s; getline(cin, s); if (s.empty()) { getline(cin, s); } return s; }
vll linp() { string line; getline(cin, line); if (line.empty()) { getline(cin, line); } stringstream ss(line); vll result; ll val; while (ss >> val) { result.pb(val); } return result; }
void print(const vll& v) { for (const auto& x : v) cout << x << " "; cout << endl; }
template<typename T> void print2D(const vector<vector<T>>& mat) { for (const auto& row : mat) { for (const auto& elem : row) cout << elem << " "; cout << endl; } }
template<typename T> vector<vector<T>> read_matrix(int n, int m) { vector<vector<T>> mat(n, vector<T>(m)); for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin >> mat[i][j]; return mat; }

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll x, ll y) { if (x == 0 || y == 0) return 0; return abs(x * y) / gcd(x, y); }
ll ceil_div(ll x, ll y) { return (x + y - 1) / y; }

template<typename T> int bin_search(const vector<T>& arr, T x) { return lower_bound(all(arr), x) - arr.begin(); }
template<typename... Args> void debug(Args... args) { (cerr << ... << args) << endl; }
bool inbound(int x, int y, int n, int m) { return x >= 0 && x < n && y >= 0 && y < m; }

void solve() {
    
}

int main() {
    Fastio();

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
