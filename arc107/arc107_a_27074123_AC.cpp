/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc107/submissions/27074123
 * Submitted at: 2021-11-07 20:26:14
 * Problem URL: https://atcoder.jp/contests/arc107/tasks/arc107_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
#include<atcoder/all>
using namespace std;
using namespace atcoder;
typedef modint998244353 mint;
int main(){
  int _a,_b,_c;cin>>_a>>_b>>_c;
  mint a=_a,b=_b,c=_c;
  mint ans=1;
  ans*=a*(a+1)/2;
  ans*=b*(b+1)/2;
  ans*=c*(c+1)/2;
  cout<<ans.val()<<endl;
}