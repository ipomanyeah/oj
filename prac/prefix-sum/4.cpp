// #include <__msvc_all_public_headers.hpp>
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
  ull n, m, q;
  cin >> n >> m >> q;
  v<v<ull>> a(n, v<ull>(m));
  for (ull i = 0; i < n; i++) {
    for (ull j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  v<v<ull>> pr(n + 1, v<ull>(m + 1));
  for (ull i = 1; i <= n; i++) {
    for (ull j = 1; j <= m; j++) {
      pr[i][j] =
          pr[i - 1][j] + pr[i][j - 1] - pr[i - 1][j - 1] + a[i - 1][j - 1];
      // cout << pr[i][j] << " ";
    }
    // cout << el;
  }

  while (q--) {
    ull a, b, c, d;
    cin >> a >> b >> c >> d;
    ull r = pr[c][d] - pr[c][b - 1] - pr[a - 1][d] + pr[a - 1][b - 1];
    cout << r << el;
  }
}