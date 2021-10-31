/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/exawizards2019/submissions/26957410
 * Submitted at: 2021-10-31 21:36:01
 * Problem URL: https://atcoder.jp/contests/exawizards2019/tasks/exawizards2019_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  string s;
  cin>>n>>s;
  int r=0,b=0;
  for(int i=0;i<n;i++) s[i]=='R'?r++:b++;
  puts(r>b?"Yes":"No");
}