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

int dig(int n) {
  int sum = 0;
  string ns = to_string(n);
  for (char c : ns) {
    sum += c - '0';
  }
  return sum;
}

int main() {
  int a, b;
  cin >> a >> b;
  int gc = gcd(a, b);
  int mx = 0;
  int curr, curr2;
  for (int i = 1; i*i <= gc; i++) {
    if (gc % i == 0) {
      if (i*i == gc) {
        curr = dig(i);
      } else {
        curr = dig(i);
        curr2 = dig(gc / i);
        curr = max(curr, curr2);
      }
      mx = max(mx, curr);
    }
  }
  cout << mx;
}