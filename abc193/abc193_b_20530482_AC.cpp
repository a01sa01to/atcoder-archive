/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc193/submissions/20530482
 * Submitted at: 2021-02-27 21:14:32
 * Problem URL: https://atcoder.jp/contests/abc193/tasks/abc193_b
 * Result: AC
 * Execution Time: 100 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define loop(n) for(ull i=0;i<n;i++)

int main(){
  ll n,money=1000000000;
  bool ch = false;
  cin >> n;
  loop(n){
    ll a=0,p=0,x=0;
    cin >> a >> p >> x;
    x-=a;
    if(x>0 && p<money){
      money=p;
      ch=true;
    }
  }
  cout << (ch?money:-1) << endl;
  return 0;
}