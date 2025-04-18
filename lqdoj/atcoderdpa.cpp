#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define all(a) (a).begin(), (a).end()
template <typename T> using v = std::vector<T>;
template <typename T> using umset = std::unordered_multiset<T>;
template <typename T> using mset = std::multiset<T>;
template <typename T> using uset = std::unordered_set<T>;
template <typename T, typename F> using p = std::pair<T, F>;
template <typename T, typename F> using umap = std::unordered_map<T, F>;
template <typename T, typename F> using mmap = std::multimap<T, F>;
using namespace std;
char el = '\n';

int main() {
  int n;
  cin >> n;
  v<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  v<int> dp(n, 0);
  dp[0] = 0;
  dp[1] = abs(a[0] - a[1]);
  int mn;
  for (int i = 2; i < n; i++) {
    int l = dp[i - 1] + abs(a[i] - a[i - 1]);
    int r = dp[i - 2] + abs(a[i] - a[i - 2]);
    dp[i] = min(l, r);
  }
  cout << dp[n-1];
}
