/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc005/submissions/24822965
 * Submitted at: 2021-08-07 16:41:26
 * Problem URL: https://atcoder.jp/contests/ahc005/tasks/ahc005_a
 * Result: AC
 * Execution Time: 6 ms
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
vector<string> dirStr = { "U", "D", "L", "R" };
ll2d dirInt = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };

vector<bool> canGoDir(ll ni, ll nj) {
  vector<bool> c(4, true);  // U, D, L, R
  if (ni == 0 || Graph[ni - 1][nj] == -1) { c[0] = false; }
  if (nj == 0 || Graph[ni][nj - 1] == -1) { c[2] = false; }
  if (ni == n - 1 || Graph[ni + 1][nj] == -1) { c[1] = false; }
  if (nj == n - 1 || Graph[ni][nj + 1] == -1) { c[3] = false; }
  return c;
}

string reverseRoute(string s) {
  string ret = "";
  loop(i, s.size()) {
    if (s[i] == 'U') { ret += "D"; }
    if (s[i] == 'D') { ret += "U"; }
    if (s[i] == 'L') { ret += "R"; }
    if (s[i] == 'R') { ret += "L"; }
  }
  return ret;
}

string dfs(ll ni, ll nj, ll prevDir) {
  vector<bool> c = canGoDir(ni, nj);
  ll1d dir = dirInt[prevDir];
  if (c[prevDir]) {
    return dirStr[prevDir] + dfs(ni + dir[0], nj + dir[1], prevDir);
  }
  else {
    return dirStr[prevDir];
  }
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
  string route = "";
  vector<bool> c = canGoDir(si, sj);
  loop(i, 4) {
    if (c[i]) {
      ll1d dir = dirInt[i];
      string t = dfs(si + dir[0], sj + dir[1], i);
      route += t + reverseRoute(t);
    }
  }
  cout << route << endl;
  return 0;
}