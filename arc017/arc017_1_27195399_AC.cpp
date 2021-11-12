/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc017/submissions/27195399
 * Submitted at: 2021-11-12 23:25:27
 * Problem URL: https://atcoder.jp/contests/arc017/tasks/arc017_1
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
  if(n<=1)return false;
  for(int i=2;i*i<=n;i++)if(n%i==0)return false;
  return true;
}
int main(){
  int n;cin>>n;puts(isPrime(n)?"YES":"NO");
}