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
  int n;
  cin >> n;
  int mxdig = 0;
  int mxsum = 0;
  while (n--) {
    int k;
    cin >> k;
    string ks = to_string(k);
    int n = ks.size();
    mxdig = max(mxdig, n);
    int sum = 0;
    for (char c : ks) {
      sum += c - '0';
    }
    mxsum = max(mxsum, sum);
  }
  cout << mxdig << el << mxsum;
}
