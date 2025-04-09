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
  freopen("TRONMANG.INP", "r", stdin);
  freopen("TRONMANG.OUT", "w", stdout);
  int n, m;
  cin >> n >> m;
  v<int> a(n + m);
  for (int i = 0; i < n + m; i++) {
    cin >> a[i];
  }
  sort(all(a));
  for (int i : a) {
    cout << i << " ";
  }
}