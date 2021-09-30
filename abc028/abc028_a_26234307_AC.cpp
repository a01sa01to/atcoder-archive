/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc028/submissions/26234307
 * Submitted at: 2021-09-30 12:22:27
 * Problem URL: https://atcoder.jp/contests/abc028/tasks/abc028_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int x;
  cin>>x;
  if(x<60) cout<<"Bad"<<endl;
  else if(x<90) cout<<"Good"<<endl;
  else if(x<100) cout<<"Great"<<endl;
  else cout<<"Perfect"<<endl;
  return 0;
}