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

bool check(ull n) {
  string ns = to_string(n);
  set<char> s;
  for (int i = 0; i < ns.length(); i++) {
    s.insert(ns[i]);
  }
  return (s.size() == 1);
}

int main() {
  freopen("dx.inp", "r", stdin);
  freopen("dx.out", "w", stdout);
  ull n;
  cin >> n;
  for (ull i = 1;; i++) {
    if (check(n + i)) {
      cout << i;
      return 0;
    }
  }
}