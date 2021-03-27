/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/utpc2020/submissions/21279466
 * Submitted at: 2021-03-27 14:28:23
 * Problem URL: https://atcoder.jp/contests/utpc2020/tasks/utpc2020_a
 * Result: AC
 * Execution Time: 125 ms
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define loop(n,i) for(ull i=0;i<n;i++)

bool chk(ull t, vector<ull> x,vector<ull> a, ull n){
  ll nowT = t;
  loop(n,i){
    if(i!=0) nowT = min(t,nowT+x[i]-x[i-1]);
    nowT -= a[i];
    if(nowT < 0){
      return false;
    }
  }
  return true;
}

int main(){
  ull n,l;
  cin >> n >> l;
  vector<ull> a,x;
  ull t = 0;
  loop(n,i){
    ull _x,_a;
    cin >> _x >> _a;
    x.push_back(_x);
    a.push_back(_a);
    t += _a;
  }
  t -= x[n-1] - x[0];
  while(true){
    if(chk(t,x,a,n)){
      cout << t << endl;
      return 0;
    }
    t++;
  }
}