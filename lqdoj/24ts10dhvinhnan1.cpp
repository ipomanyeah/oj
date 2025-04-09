#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
#define all(a) (a).begin(), (a).end()
using namespace std;
char el = '\n';

const int MAX = 1000006;

bool isprime[MAX];

void sieve(int n) {
  fill(isprime, isprime + n + 1, true);
  isprime[0] = isprime[1] = false;
  for (int i = 2; i * i <= n; i++) {
    if (isprime[i]) {
      for (int j = i * i; j <= n; j += i) {
        isprime[j] = false;
      }
    }
  }
}

int digadd(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int l, r;
  cin >> l >> r;
  sieve(MAX);
  int cnt = 0;
  for (int i = l; i <= r; i++) {
    int sum_digits = digadd(i);
    if (isprime[i] && isprime[sum_digits]) {
      cnt++;
    }
  }
  if (cnt == 0) {
    cout << -1;
    return 0;
  }
  cout << cnt << endl;
}
