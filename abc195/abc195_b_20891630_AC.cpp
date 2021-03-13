/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc195/submissions/20891630
 * Submitted at: 2021-03-13 21:53:30
 * Problem URL: https://atcoder.jp/contests/abc195/tasks/abc195_b
 * Result: AC
 * Execution Time: 5 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main(){
  double a,b,w;
  cin >> a >> b >> w;
  int minim = ceil(w*1000/b);
  int maxim = floor(w*1000/a);
  if(minim>maxim){
    cout << "UNSATISFIABLE" << endl;
  }
  else{
    cout << minim << " " << maxim << endl;
  }
  return 0;
}