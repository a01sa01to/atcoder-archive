/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/26827190
 * Submitted at: 2021-10-26 17:34:16
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_b
 * Result: AC
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,x,s=0;
  cin>>n>>x;
  for(int t=1;t<=n;t++){
    int v,p;
    cin>>v>>p;
    s+=v*p;
    if(s>x*100){cout<<t<<endl;return 0;}
  }
  cout<<-1<<endl;
}