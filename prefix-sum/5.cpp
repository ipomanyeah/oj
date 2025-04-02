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
  ll n, k;
  cin >> n >> k;
  v<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
    a[i] -= k;
  }
  umap<ll, ll> mp;
  mp[0] = 1;
  ll cs = 0;
  ll res = 0;
  for (ll i = 0; i < n; i++) {
    cs += a[i];
    res += mp[cs];
    mp[cs]++;
  }
  cout << res;
  return 0;
}