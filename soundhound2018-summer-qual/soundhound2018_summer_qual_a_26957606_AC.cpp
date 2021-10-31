/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/soundhound2018-summer-qual/submissions/26957606
 * Submitted at: 2021-10-31 21:39:26
 * Problem URL: https://atcoder.jp/contests/soundhound2018-summer-qual/tasks/soundhound2018_summer_qual_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b;cin>>a>>b;
  if(a+b==15)puts("+");
  else if(a*b==15)puts("*");
  else puts("x");
}