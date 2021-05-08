/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc200/submissions/22422500
 * Submitted at: 2021-05-08 21:44:36
 * Problem URL: https://atcoder.jp/contests/abc200/tasks/abc200_c
 * Result: WA
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ull2d = vector<vector<ull>>;
#define loop(i,n) for(ull i=0;i<n;i++)

int main(){
  ull n;
  ull c = 0;
  cin >> n;
  vector<ull> v(n);
  loop(i,n){ cin >> v[i]; }
  sort(v.begin(),v.end());
  loop(i,n){
    ull same = 0;
    for(ull j=i+1;j<n;j++){
      if(v[i] == v[j]){ c++; same++; }
      else{ i = j-1; break; }
    }
    for(ull j=n-1;j>i;j--){
      if((v[j]-v[i])%200==0){ c++; c+=same; }
      else if((v[j]-v[i])<200){ break; }
    }
  }
  cout << c << endl;
  return 0;
}