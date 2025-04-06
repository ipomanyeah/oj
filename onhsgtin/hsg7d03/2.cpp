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
  ull m, n;
  cin >> m >> n;
  if (m == n) {
    if (m % 2 == 0) {
      cout << m;
      return 0;
    }
    cout << 0;
    return 0;
  }
  if (m % 2 != 0) {
    m++;
  }
  if (n % 2 != 0) {
    n--;
  }
  ull cnt = (n - m) / 2 + 1;
  cout << cnt * (m + n) / 2;
  return 0;
}