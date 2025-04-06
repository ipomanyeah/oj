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
  
  freopen("norm.inp", "r", stdin);
  freopen("norm.out", "w", stdout);

  string s;
  cin >> s;
  int n = s.size();
  int cntlow = 0;
  int cnthigh = 0;
  for (int i = 0; i < n; i++) {
    if (tolower(s[i]) == s[i]) {
      // s[i] is lowered
      cntlow++;
    } else {
      cnthigh++;
    }
  }

  if (cntlow >= cnthigh) {
    for (int i = 0; i < n; i++) {
      s[i] = tolower(s[i]);
    }
  } else {
    for (int i = 0; i < n; i++) {
      s[i] = toupper(s[i]);
    }
  }
  cout << s;
}