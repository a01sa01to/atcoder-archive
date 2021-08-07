/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc005/submissions/24822693
 * Submitted at: 2021-08-07 16:28:53
 * Problem URL: https://atcoder.jp/contests/ahc005/tasks/ahc005_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;

#define loop(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

ll2d Graph;
ll n, si, sj;

vector<bool> canGoDir(ll ni, ll nj) {
  vector<bool> c(4, true);  // U, D, L, R
  if (ni == 0 || Graph[ni - 1][nj] == -1) { c[0] = false; }
  if (nj == 0 || Graph[ni][nj - 1] == -1) { c[2] = false; }
  if (ni == n - 1 || Graph[ni + 1][nj] == -1) { c[1] = false; }
  if (nj == n - 1 || Graph[ni][nj + 1] == -1) { c[3] = false; }
  return c;
}

int main() {
  cin >> n >> si >> sj;
  Graph.resize(n);
  loop(i, n) {
    Graph[i].resize(n);
    string s;
    cin >> s;
    loop(j, n) {
      if (s[j] == '#') { Graph[i][j] = -1; }
      else {
        Graph[i][j] = s[j] - '5';
      }
    }
  }
  vector<bool> c = canGoDir(si, sj);
  if (c[0]) { cout << "UD"; }
  if (c[1]) { cout << "DU"; }
  if (c[2]) { cout << "LR"; }
  if (c[3]) { cout << "RL"; }
  cout << endl;
  return 0;
}