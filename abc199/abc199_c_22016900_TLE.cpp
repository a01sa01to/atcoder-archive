/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/22016900
 * Submitted at: 2021-04-24 21:36:33
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;

#define loop(i,n) for(int i=0;i<n;i++)

int main(){
  int n,q;
  string s;
  cin >> n >> s >> q;
  loop(i,q){
    int t,a,b;
    cin >> t >> a >> b;
    if(t==1){
      string b2; b2 = s[b-1]; string a2; a2 = s[a-1];
      s.replace(a-1,1,b2);
      s.replace(b-1,1,a2);
    }
    else{ s = s.substr(n) + s.substr(0,n); }
  }
  cout << s << endl;
  return 0;
}