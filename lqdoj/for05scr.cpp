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

ull sdiv(ull n) {
  ull sum = 0;
  for (int i = 1; i*i <= n; i++) {
    if (n % i == 0) {
      if (i*i == n) {
        sum += i;
      } else {
        sum += i;
        sum += n / i;
      }
    }
  }
  return sum;
}

int main() {
  ull n;
  cin >> n;
  if (sdiv(n) / 2 == n) {
    cout << "YES";
  } else cout << "NO";
}