/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc195/submissions/20888749
 * Submitted at: 2021-03-13 21:43:51
 * Problem URL: https://atcoder.jp/contests/abc195/tasks/abc195_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include <bits/stdc++.h>
#include <cmath>
using namespace std;
using ull = unsigned long long;

int main(){
  ull n;
  cin >> n;
  ull count = 0;
  for(int i=1;i<=5;i++){
    if(pow(10,i*3) <= n){
      count += n - pow(10,i*3) + 1;
    }
  }
  cout << count << endl;
  return 0;
}