/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc011/submissions/27919145
 * Submitted at: 2021-12-15 11:41:09
 * Problem URL: https://atcoder.jp/contests/arc011/tasks/arc011_2
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
typedef pair<ll, ll> P;
typedef long double ld;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  vector<string> ans;
  while (n--) {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string t = "";
    rep(i, s.size()) {
      switch (s[i]) {
        case 'b': case 'c': t.push_back('1'); break;
        case 'd': case 'w': t.push_back('2'); break;
        case 't': case 'j': t.push_back('3'); break;
        case 'f': case 'q': t.push_back('4'); break;
        case 'l': case 'v': t.push_back('5'); break;
        case 's': case 'x': t.push_back('6'); break;
        case 'p': case 'm': t.push_back('7'); break;
        case 'h': case 'k': t.push_back('8'); break;
        case 'n': case 'g': t.push_back('9'); break;
        case 'z': case 'r': t.push_back('0'); break;
      }
    }
    if (t != "") ans.push_back(t);
  }
  rep(i, int(ans.size()) - 1) cout << ans[i] << " ";
  if(!ans.empty()) cout << ans.back();
  cout << endl;
  return 0;
}