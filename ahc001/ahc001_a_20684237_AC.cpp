/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/ahc001/submissions/20684237
 * Submitted at: 2021-03-06 17:49:08
 * Problem URL: https://atcoder.jp/contests/ahc001/tasks/ahc001_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ull = unsigned long long;
#define loop(n) for(ull i=0;i<n;i++)

int main(){
  int n;
  cin >> n;
  loop(n){
    ull x,y,r;
    cin >> x >> y >> r;
    cout << x << " " << y << " " << x+1 << " " << y+1 << endl;
  }
  return 0;
}