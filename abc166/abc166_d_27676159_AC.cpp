/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc166/submissions/27676159
 * Submitted at: 2021-12-04 00:27:43
 * Problem URL: https://atcoder.jp/contests/abc166/tasks/abc166_d
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll p5(ll x){return x*x*x*x*x;}
int main(){
  ll x;cin>>x;
  for(ll a=-200;a<=200;++a)for(ll b=-200;b<=200;++b){
    if(p5(a)-p5(b)==x){printf("%d %d\n",a,b);return 0;}
  }
}