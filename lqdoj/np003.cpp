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
  v<ull> cb(10e6 + 1);
  for (int i = 0; i <= 10e6; i++) {
    cb[i] = i*i*i;
  }
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int l = 0;
    int r = 10e6;
    while (l <= r) {
      int m = (r - l) / 2;
      if (cb[m] < n) {
        l = m + 1;
      } else if (cb[m] > n) {
        r = m - 1;
      } else {
        // found;
        cout << "YES";
      }
    }
    cout << "NO";
    cout << el;
  }
}
