/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc005/submissions/24824222
 * Submitted at: 2021-08-07 17:28:28
 * Problem URL: https://atcoder.jp/contests/ahc005/tasks/ahc005_a
 * Result: AC
 * Execution Time: 8 ms
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

const vector<string> dirStr = { "U", "L", "D", "R" };
const ll2d dirInt = { { -1, 0 }, { 0, -1 }, { 1, 0 }, { 0, 1 } };
const ll MAX_TURN = 1;

ll2d Graph;
vector<vector<bool>> seen;
ll n, si, sj;

vector<bool> canGoDir(const ll ni, const ll nj) {
  vector<bool> c(4, true);  // U, L, D, R
  if (ni == 0 || Graph[ni - 1][nj] == -1) { c[0] = false; }
  if (nj == 0 || Graph[ni][nj - 1] == -1) { c[1] = false; }
  if (ni == n - 1 || Graph[ni + 1][nj] == -1) { c[2] = false; }
  if (nj == n - 1 || Graph[ni][nj + 1] == -1) { c[3] = false; }
  return c;
}

string reverseRoute(const string s) {
  string ret = "";
  for (ll i = s.size() - 1; i >= 0; i--) {
    if (s[i] == 'U') { ret += "D"; }
    if (s[i] == 'L') { ret += "R"; }
    if (s[i] == 'D') { ret += "U"; }
    if (s[i] == 'R') { ret += "L"; }
  }
  return ret;
}

void see(const ll ni, const ll nj) {
  seen[ni][nj] = true;
  // 上を見る
  loop(i, ni) {
    if (Graph[ni - i - 1][nj] != -1) {
      seen[ni - i - 1][nj] = true;
    }
    else {
      break;
    }
  }
  // 下を見る
  loop(i, n - ni) {
    if (Graph[ni + i][nj] != -1) {
      seen[ni + i][nj] = true;
    }
    else {
      break;
    }
  }

  // 左を見る
  loop(i, nj) {
    if (Graph[ni][nj - i - 1] != -1) {
      seen[ni][nj - i - 1] = true;
    }
    else {
      break;
    }
  }
  // 右を見る
  loop(i, n - nj) {
    if (Graph[ni][nj + i] != -1) {
      seen[ni][nj + i] = true;
    }
    else {
      break;
    }
  }
  return;
}

string dfs(const ll ni, const ll nj, const ll prevDir, const ll turnC, const string ret) {
  const vector<bool> c = canGoDir(ni, nj);
  const ll1d dir = dirInt[prevDir];
  if (c[prevDir]) {
    return dfs(ni + dir[0], nj + dir[1], prevDir, turnC, ret + dirStr[prevDir]);
  }
  if (turnC < MAX_TURN) {
    loop(i, 4) {
      if (i % 2 != prevDir % 2 && c[i]) {
        ll1d d = dirInt[i];
        return dfs(ni + d[0], nj + d[1], i, turnC + 1, ret + dirStr[i]);
      }
    }
  }
  return ret;
}

int main() {
  cin >> n >> si >> sj;
  Graph.resize(n);
  seen.resize(n);
  loop(i, n) {
    Graph[i].resize(n);
    seen[i].resize(n);
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
  const vector<bool> c = canGoDir(si, sj);
  seen[si][sj] = true;
  loop(i, 4) {
    if (c[i]) {
      const ll1d dir = dirInt[i];
      const string t = dfs(si + dir[0], sj + dir[1], i, 0, dirStr[i]);
      route += t + reverseRoute(t);
    }
  }
  cout << route << endl;
  return 0;
}