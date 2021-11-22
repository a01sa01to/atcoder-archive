/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc044/submissions/27440017
 * Submitted at: 2021-11-22 11:44:14
 * Problem URL: https://atcoder.jp/contests/arc044/tasks/arc044_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
  if(x<=1)return false;
  for(int i=2;i*i<=x;i++)if(x%i==0)return false;
  return true;
}
int main(){
  int x;cin>>x;
  puts(isPrime(x)||(x!=1&&x%2&&x%3&&x%5)?"Prime":"Not Prime");
}