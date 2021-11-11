/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc046/submissions/27182098
 * Submitted at: 2021-11-11 23:31:31
 * Problem URL: https://atcoder.jp/contests/arc046/tasks/arc046_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  n--;
  for(int i=0;i<=n/9;i++)putchar('1'+n%9);
  putchar('\n');
}