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

ull cntdiv(ull n) {
  ull cnt = 0;
  for (ull i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (i * i == n) {
        cnt++;
      } else {
        cnt += 2;
      }
    }
  }
  return cnt;
}

int main() {

  freopen("pair.inp", "r", stdin);
  freopen("pair.out", "w", stdout);

  int n;
  cin >> n;
  v<ull> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ull cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (cntdiv(a[i] + a[j]) == 7) {
        cnt++;
      }
    }
  }
  cout << cnt;
}