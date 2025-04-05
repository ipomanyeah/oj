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

bool pf(int n) {
  if (n < 0) {
    return 0;
  }
  int root = sqrt(n);
  return n == root*root;
}

bool isf(int n) {
  return pf(5*n*n + 4) || pf(5*n*n - 4);
}

int sd(int n) {
  string ns = to_string(n);
  int sum = 0;
  for (char c : ns) {
    sum += c - '0';
  }
  return sum;
}

int main() {
  freopen("BNUM.INP", "r", stdin);
  freopen("BNUM.OUT", "w", stdout);
  int n;
  cin >> n;
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (pf(i) && isf(sd(i))) {
      cnt++;
    }
  }
  cout << cnt;
}