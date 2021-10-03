/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc025/submissions/26329644
 * Submitted at: 2021-10-03 12:15:47
 * Problem URL: https://atcoder.jp/contests/abc025/tasks/abc025_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,a,b,x=0;cin>>n>>a>>b;
  while(n--){
    string s;int d;
    cin>>s>>d;
    d=min(b,max(a,d));
    if(s=="West") d=-d;
    x+=d;
  }
  cout<<(x<0?"West ":x>0?"East ":"")<<abs(x)<<endl;
}