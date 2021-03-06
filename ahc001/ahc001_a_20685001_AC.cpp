/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc001/submissions/20685001
 * Submitted at: 2021-03-06 18:20:42
 * Problem URL: https://atcoder.jp/contests/ahc001/tasks/ahc001_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define loop(n) for(ull i=0;i<n;i++)

int main(){
  ull n;
  cin >> n;
  loop(n){
    ull x,y,r;
    cin >> x >> y >> r;
    cout << x << " " << y << " " << x+1 << " " << y+1 << endl;
  }
  return 0;
}