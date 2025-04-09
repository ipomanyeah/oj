// https://lqdoj.edu.vn/problem/22thtmbc1
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

void check(ull k) {
  string sk = to_string(k);
  ull n = sk.length();

  for (ull i = k + 1; i <= (ull)10e9; i++) {
    string ys = to_string(i);
    set<char> a;
    for (char c : ys) {
      a.insert(c);
    }
    if (ys.length() > n && a.size() == ys.length()) {
      cout << i << el;
      return;
    } else if (ys.length() == n && a.size() == ys.length()) {
      cout << i << el;
      return;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ull n;
  cin >> n;
  while (n--) {
    ull k;
    cin >> k;
    check(k);
  }
}