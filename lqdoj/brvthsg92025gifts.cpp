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
      if (i * i == n)
        cnt++;
      else
        cnt += 2;
    }
  }
  return cnt;
}

int main() {
  freopen("GIFTS.INP", "r", stdin);
  freopen("GIFTS.OUT", "w", stdout);
  ull x, y;
  cin >> x >> y;
  ull r = cntdiv(gcd(x, y));
  cout << r;
}