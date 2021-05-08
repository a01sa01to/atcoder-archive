/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc200/submissions/22409308
 * Submitted at: 2021-05-08 21:12:23
 * Problem URL: https://atcoder.jp/contests/abc200/tasks/abc200_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ull2d = vector<vector<ull>>;
#define loop(i,n) for(ull i=0;i<n;i++)

int main(){
  ull n,k;
  cin >> n >> k;
  loop(i,k){
    if(n%200==0){ n/=200; }
    else{ n*=1000; n+=200; }
  }
  cout << n << endl;
  return 0;
}