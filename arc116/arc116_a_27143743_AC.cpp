/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc116/submissions/27143743
 * Submitted at: 2021-11-09 11:01:34
 * Problem URL: https://atcoder.jp/contests/arc116/tasks/arc116_a
 * Result: AC
 * Execution Time: 390 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    long long x;cin>>x;
    // 4で割り切れれば、{1,2,4}とそのほかの一部の約数をかけたものになるので、Even
    // 2なら、{1,2}なのでSame
    // 1なら偶数がない
    if(x%4==0)puts("Even");
    else if(x%2==0)puts("Same");
    else puts("Odd");
  }
}