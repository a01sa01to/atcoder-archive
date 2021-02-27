/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc193/submissions/20548070
 * Submitted at: 2021-02-27 22:22:36
 * Problem URL: https://atcoder.jp/contests/abc193/tasks/abc193_c
 * Result: WA
 * Execution Time: 529 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define loop(n) for(ull i=0;i<n;i++)

int main(){
  ull n, count=0;
  cin >> n;
  for(ull i=2;i<=floor(sqrt(n));i++){
    bool check = false;
    for(int j=100;j>1;j--){
      double _ = pow(i,(1.0/j));
      // cout << i << " "<< j << " " << (1.0/j) << " "<< _ << endl;
      if(floor(_) == _){
        check = true;
      }
    }
    if(check){continue;}
    // cout << i << " " << (log(n)/log(i)) << endl;
    count += floor(log(n) / log(i)) - 1;
  }
  cout << (n - count) << endl;
  return 0;
}