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
  string s;
  cin >> s;
  v<int> s0(n + 1, 0);
  v<int> s1(n + 1, 0);
  for (int i = 0; i < n; i++) {
    s0[i + 1] = s0[i] + !(s[i] - '0');
    s1[i + 1] = s1[i] + (s[i] - '0');
  }

  for (int i = 0; i < n - 1; i++) {
    for (int )
  }
}