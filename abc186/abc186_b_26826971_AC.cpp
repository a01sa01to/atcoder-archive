/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc186/submissions/26826971
 * Submitted at: 2021-10-26 17:18:23
 * Problem URL: https://atcoder.jp/contests/abc186/tasks/abc186_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
  int h,w,sum=0,m=1e9;
  cin>>h>>w;
  for(int i=0;i<h;i++)for(int j=0;j<w;j++){
    int k;cin>>k;sum+=k;m=min(m,k);
  }
  cout<<sum-m*h*w<<endl;
}