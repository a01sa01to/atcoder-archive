/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tricky/submissions/32149975
 * Submitted at: 2022-06-02 01:17:29
 * Problem URL: https://atcoder.jp/contests/tricky/tasks/tricky_1
 * Result: TLE
 * Execution Time: 2160 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  int t;cin>>t;
  while(t--){
    ll a,b;cin>>a>>b;
    if(a == -9223372036854775808LL && b == -1LL) cout<<"9223372036854775808"<<endl;
    else cout<<a/b<<endl;
  }
}