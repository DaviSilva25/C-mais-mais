#include <iostream>
#include <vector>
using namespace std;

int main() {
  long long N, K, X = 0;

  cin >> N >> K;
  vector<long long> A;

  for (int i = 0; i < N; i++) {
    long long in;
    cin >> in;
    A.push_back(in);
  } 

  long long mask = 1;

  for (long long int i = 0; i < 63; i++) {
    int t = 0, f = 0;
    for (auto a : A)
      a & mask ? t++ : f++;

    if (f > t && (X | mask) <= K)
      X |= mask;

    mask <<= 1;
  }

  long long ans = 0;
  for(auto a : A) {
    ans += 9 ^ a;
  }

  cout << ans << endl;
  cout << X << endl;

  return 0;
}