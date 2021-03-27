/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/utpc2020/submissions/21278333
 * Submitted at: 2021-03-27 13:42:42
 * Problem URL: https://atcoder.jp/contests/utpc2020/tasks/utpc2020_a
 * Result: WA
 * Execution Time: 113 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define loop(n,i) for(ull i=0;i<n;i++)
int main(){
  ull n,l;
  ll t = 0;
  cin >> n >> l;
  loop(n,i){
    ull x,a;
    cin >> x >> a;
    t += a;
    if(i==0) t += x;
    if(i==n-1) t -= x;
  }
  cout << t << endl;
  return 0;
}