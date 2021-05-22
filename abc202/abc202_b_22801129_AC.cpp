/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc202/submissions/22801129
 * Submitted at: 2021-05-22 21:05:03
 * Problem URL: https://atcoder.jp/contests/abc202/tasks/abc202_b
 * Result: AC
 * Execution Time: 12 ms
 */

#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using ull1d = vector<ull>;
using ull2d = vector<ull1d>;
using ull3d = vector<ull2d>;
#define loop(i,n) for(ull i=0;i<n;i++)
#define rloop(i,n) for(ull i=n-1;i>=0;i--)
#define all(vec) vec.begin(),vec.end()

int main(){ cout << fixed << setprecision(15);
  string s; cin >> s;
  string ret = "";
  for(int i=s.size()-1;i>=0;i--){
    if(s[i] == '6'){ ret += '9'; }
    else if(s[i] == '9'){ ret += '6'; }
    else{ ret += s[i]; }
  }
  cout << ret << endl;
  return 0;
}