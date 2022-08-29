/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc266/submissions/34434513
 * Submitted at: 2022-08-29 10:49:42
 * Problem URL: https://atcoder.jp/contests/abc266/tasks/abc266_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
using ll = long long;
constexpr ll mod = 998244353;
int main(){
  ll n;
  cin >> n;
  cout << (n % mod + mod) % mod << endl;
}