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

  freopen("divi.inp", "r", stdin);
  freopen("divi.out", "w", stdout);

  ull n, k;
  cin >> n >> k;
  v<ull> a(n);
  for (ull i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(all(a), greater<ull>());
  for (ull i = 0; i < n; i++) {
    if (k == 0) {
      break;
    }
    if (a[i] % 2 != 0) {
      a[i]++;
      k--;
    }
  }

  ull sum = 0;
  for (ull i : a) {
    if (i % 2 == 0) {
      sum += i;
    }
  }
  cout << sum;
}