/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jsc2021/submissions/21823806
 * Submitted at: 2021-04-17 17:25:04
 * Problem URL: https://atcoder.jp/contests/jsc2021/tasks/jsc2021_c
 * Result: TLE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define loop(n,i) for(int i=0;i<n;i++)

int main(){
  int a,b;
  cin >> a >> b;
  int res = 0;
  for(int x=a;x<=b;x++){
    for(int y=x+1;y<=b;y++){
      res = max(res,gcd(x,y));
    }
  }
  cout << res << endl;
  return 0;
}