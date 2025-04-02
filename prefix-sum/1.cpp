#include <bits/stdc++.h>

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define all(a) (a).begin(), (a).end()

#pragma optimization_level 3
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

template <typename T> using v = std::vector<T>;
template <typename T> using umset = std::unordered_multiset<T>;
template <typename T> using mset = std::multiset<T>;
template <typename T> using uset = std::unordered_set<T>;
template <typename T, typename F> using p = std::pair<T, F>;
template <typename T, typename F> using umap = std::unordered_map<T, F>;
template <typename T, typename F> using mmap = std::multimap<T, F>;

using namespace std;
char el = '\n';

ull main() {
  string s;
  cin >> s;
  ull n = s.length();
  umap<ull, ull> freq;
  freq[0] = 1;
  ull currsum = 0;
  ull cnt = 0;
  for (ull i = 0; i < n; i++) {
    if (s[i] == '1') {
      currsum++;
    } else {
      currsum--;
    }
    cnt += freq[currsum];
    freq[currsum]++;
  }
  cout << cnt;
}