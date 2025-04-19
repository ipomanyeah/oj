#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()
using ll = long long;
using ull = unsigned long long;
using ld = long double;
using dd = double;
using fl = float;
template <typename T> using v = std::vector<T>;
template <typename T> using umset = std::unordered_multiset<T>;
template <typename T> using mset = std::multiset<T>;
template <typename T> using uset = std::unordered_set<T>;
template <typename T, typename F> using p = std::pair<T, F>;
template <typename T, typename F> using umap = std::unordered_map<T, F>;
template <typename T, typename F> using mmap = std::multimap<T, F>;
using namespace std;
char el = '\n';

void open(const string input, const string output) {
  const char * in = input.c_str();
  const char * out = output.c_str();
  freopen(in, "r", stdin);
  freopen(out, "w", stdout);
}

void desync() {
  ios_base::sync_with_stdio(NULL);
  cin.tie(NULL); cout.tie(NULL);
}

int main() {
  desync();
  ull n, m, k;
  cin >> n >> m >> k;
  v<ull> a(n);
  v<ull> b(m);
  for (ull i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (ull i = 0; i < m; i++) {
    cin >> b[i];
  }
  ull cnt = 0;
  for (ull i = 0; i < n; i++) {
    for (ull j = 0; j < m; j++) {
      if (a[i] + b[j] <= k) {
        cnt++;
      }
    }
  }
  cout << cnt;
}
