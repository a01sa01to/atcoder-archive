/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tricky/submissions/32150001
 * Submitted at: 2022-06-02 01:20:11
 * Problem URL: https://atcoder.jp/contests/tricky/tasks/tricky_1
 * Result: TLE
 * Execution Time: 2193 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t;cin>>t;
  while(t--){
    ll a,b;cin>>a>>b;
    if(a == -9223372036854775808LL && b == -1LL) puts("9223372036854775808");
    else printf("%lld\n",a/b);
  }
}