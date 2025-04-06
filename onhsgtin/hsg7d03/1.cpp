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
  string s;
  cin >> s;
  string hh = "";
  hh += s[0];
  hh += s[1];
  int hour = stoi(hh);
  if (hour == 0) {
    hour = 24;
  }
  int canh;
  if (hour >= 19 && hour <= 20) {
    canh = 1;
  } else if (hour >= 20 && hour <= 22) {
    canh = 2;
  } else if (hour >= 23 && hour <= 24) {
    canh = 3;
  } else if (hour >= 1 && hour <= 2) {
    canh = 4;
  } else if (hour >= 3 && hour <= 4) {
    canh = 5;
  } else {
    cout << "-";
    return 0;
  } cout << "Canh " << canh;
  return 0;
}