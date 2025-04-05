#include <bits/stdc++.h>
#include <cctype>
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
  string s;
  cin >> s;
  int cntup = 0;
  int cntdown = 0;
  for (char c: s) {
    if (toupper(s) == s) {
      // is upper;
      cntup++;
    } else {
      cntdown++;
    }
  }
  if (cntdown >= cntup) {
    for (int i = 0; i < s.length(); i++) {
      s[i] = tolower(s[i]);
    }
}
}
