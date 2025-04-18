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
  getline(cin, s);
  v<string> a;
  string sub;
  for (char c : s) {
    if (c == ' ') {
      a.push_back(sub);
      sub = "";
    } else {
      sub += c;
    }
  }
  a.push_back(sub);
  ll curr = stoll(a[0]);
  string op = "";
  for (int i = 1; i < a.size(); i++) {
    if (a[i] == "+" || a[i] == "-") {
      op = a[i];
    } else {
      ll currnum = stoll(a[i]);
      if (op == "+") {
        curr += currnum;
      } else {
        curr -= currnum;
      }
    }
  }
  cout << curr;
}
