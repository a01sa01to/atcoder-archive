/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/APG4b/submissions/26007217
 * Submitted at: 2021-09-20 15:17:47
 * Problem URL: https://atcoder.jp/contests/APG4b/tasks/APG4b_bw
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

map<char, int> mapint;
map<char, vector<int>> mapvec;

void print_vec(vector<int> vec) {
  cout << "[ ";
  rep(i, vec.size()) cout << vec[i] << " ";
  cout << "]" << endl;
}

void vectorOp(vector<int>& a, vector<int> b, bool pls) {
  rep(i, a.size()) {
    if (pls) a[i] += b[i];
    else
      a[i] -= b[i];
  }
  if (a.size() == 0) a = b;
}

int intCommon() {
  bool prevPls = true;
  int ans = 0;
  while (true) {
    char c;
    cin >> c;
    if (c == ';') break;
    else if (c == '+')
      prevPls = true;
    else if (c == '-')
      prevPls = false;
    else if (isdigit(c)) {
      if (prevPls) ans += (c - '0');
      else
        ans -= (c - '0');
    }
    else {
      if (prevPls) ans += mapint[c];
      else
        ans -= mapint[c];
    }
  }
  return ans;
}

vector<int> vectorCommon() {
  vector<int> v;
  vector<int> ans;
  bool nowInput = false;
  bool prevPls = true;
  while (true) {
    char c;
    cin >> c;
    if (c == ';') break;
    else if (c == ',')
      continue;
    else if (c == '[')
      nowInput = true;
    else if (c == ']') {
      nowInput = false;
      vectorOp(ans, v, prevPls);
      v.resize(0);
    }
    else if (c == '+')
      prevPls = true;
    else if (c == '-')
      prevPls = false;
    else if (isdigit(c)) {
      if (nowInput) v.push_back(c - '0');
    }
    else {
      if (nowInput) v.push_back(mapint[c]);
      else
        vectorOp(ans, mapvec[c], prevPls);
    }
  }
  return ans;
}

int main() {
  cout << fixed << setprecision(15);
  int n;
  cin >> n;
  rep(_, n) {
    string cmd;
    cin >> cmd;
    if (cmd == "int") {
      char var;
      cin >> var;
      mapint[var] = intCommon();
    }
    else if (cmd == "print_int") {
      cout << intCommon() << endl;
    }
    else if (cmd == "vec") {
      char var;
      cin >> var;
      mapvec[var] = vectorCommon();
    }
    else if (cmd == "print_vec") {
      print_vec(vectorCommon());
    }
  }
  return 0;
}