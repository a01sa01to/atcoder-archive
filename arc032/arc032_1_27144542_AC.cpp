/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc032/submissions/27144542
 * Submitted at: 2021-11-09 12:23:59
 * Problem URL: https://atcoder.jp/contests/arc032/tasks/arc032_1
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
  if(x==1)return false;
  for(int i=2;i*i<=x;i++){
    if(x%i==0)return false;
  }
  return true;
}
int main(){
  int n;cin>>n;
  puts(isPrime(n*(n+1)/2)?"WANWAN":"BOWWOW");
}