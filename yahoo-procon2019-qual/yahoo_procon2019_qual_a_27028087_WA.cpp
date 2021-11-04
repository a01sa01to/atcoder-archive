/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/yahoo-procon2019-qual/submissions/27028087
 * Submitted at: 2021-11-05 01:06:19
 * Problem URL: https://atcoder.jp/contests/yahoo-procon2019-qual/tasks/yahoo_procon2019_qual_a
 * Result: WA
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int combi(int n, int r){
  int res = 1;
  for(int i=n;i>=n-r;i--) res*=i;
  for(int i=r;i>0;i--) res/=i;
  return res;
}
int main(){
  int n,k;
  cin>>n>>k;
  puts(combi(n,k)>=n?"YES":"NO");
}