/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc131/submissions/27428332
 * Submitted at: 2021-11-21 21:57:47
 * Problem URL: https://atcoder.jp/contests/abc131/tasks/abc131_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
  ll a,b,c,d;cin>>a>>b>>c>>d;
  ll lc = lcm(c,d);a--;
  cout<<(b - (b/c+b/d-b/lc)) - (a - (a/c+a/d-a/lc))<<endl;
}