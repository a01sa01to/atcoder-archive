/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc012/submissions/26974555
 * Submitted at: 2021-11-01 20:10:46
 * Problem URL: https://atcoder.jp/contests/arc012/tasks/arc012_1
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  if(s=="Monday") puts("5");
  if(s=="Tuesday") puts("4");
  if(s=="Wednesday") puts("3");
  if(s=="Thursday") puts("2");
  if(s=="Friday") puts("1");
  if(s=="Saturday") puts("0");
  if(s=="Sunday") puts("0");
}