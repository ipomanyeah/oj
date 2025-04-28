#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <deque>
#include <numeric>
#include <bitset>
#include <limits>
#include <iomanip>
#include <sstream>
#include <tuple>
#include <functional>

#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define call(a, n) a, a + n
#define ff first
#define ss second

using ll = long long;
using ull = unsigned long long;
using ld = long double;
using dd = double;
using fl = float;
using namespace std;

template <typename T> using v = vector<T>;
template <typename T> using umset = unordered_multiset<T>;
template <typename T> using mset = multiset<T>;
template <typename T> using uset = unordered_set<T>;
template <typename T, typename F> using p = pair<T, F>;
template <typename T, typename F> using umap = unordered_map<T, F>;
template <typename T, typename F> using mmap = multimap<T, F>;

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

int fac(int n) {
  if (n == 0) {
    return 1;
  } else {
    return n * fac(n - 1);
  }
}

int main() {
  desync();
  int n;
  cin >> n;
  cout << fac(n);
}