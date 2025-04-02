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
  ll n, x;
  cin >> n >> x;
  v<ll> a(n);
  for (ll i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll curr = 0;
  ll res = 0;
  map<ll, ll> rhash;
  rhash[0] = 1;
  for (ll i = 0; i < n; i++) {
    curr += a[i];
    ll diff = curr - x;
    res += rhash[diff];
    rhash[curr] = 1 + rhash[curr];
  }
  cout << res;
}