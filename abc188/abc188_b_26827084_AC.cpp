/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc188/submissions/26827084
 * Submitted at: 2021-10-26 17:26:57
 * Problem URL: https://atcoder.jp/contests/abc188/tasks/abc188_b
 * Result: AC
 * Execution Time: 46 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
int main() {
  int n;
  cin>>n;
  vector<int> a(n),b(n);
  int v=0;
  f(i,n)cin>>a[i];
  f(i,n)cin>>b[i];
  f(i,n)v+=a[i]*b[i];
  puts(v?"No":"Yes");
}