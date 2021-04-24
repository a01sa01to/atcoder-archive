/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc199/submissions/22034300
 * Submitted at: 2021-04-24 22:36:48
 * Problem URL: https://atcoder.jp/contests/abc199/tasks/abc199_d
 * Result: WA
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define loop(i,n) for(ull i=0;i<n;i++)

ull pow3(int n){
  ull c=1;
  loop(i,n){
    c *= 3;
  }
  return c;
}

int main(){
  ull n,m;
  cin >> n >> m;
  vector<vector<int>> v(n);
  if(m==0){
    cout << pow3(n) << endl;
    return 0;
  }
  loop(i,m){
    int a,b;
    cin >> a >> b;
    v[a-1].push_back(b);
    v[b-1].push_back(a);
  }
  loop(i,n){
    if(v[i].size() >= 3){
      cout << 0 << endl;
      return 0;
    }
  }
  ull c = 3;
  loop(i,n){
    if(i==0) continue;
    int count = 0;
    for(auto a : v[i]){ if(a<=i) count++; }
    c *= 3 - count;
  }
  cout << c << endl;
  return 0;
}