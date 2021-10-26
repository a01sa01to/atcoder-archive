/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc189/submissions/26827173
 * Submitted at: 2021-10-26 17:33:08
 * Problem URL: https://atcoder.jp/contests/abc189/tasks/abc189_b
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,x;
  cin>>n>>x;
  long double s=0;
  for(int t=1;t<=n;t++){
    int v,p;
    cin>>v>>p;
    s+=v*p*0.01;
    if(s>x){cout<<t<<endl;return 0;}
  }
  cout<<-1<<endl;
}