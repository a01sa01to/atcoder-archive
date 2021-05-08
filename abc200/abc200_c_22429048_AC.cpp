/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc200/submissions/22429048
 * Submitted at: 2021-05-08 22:10:16
 * Problem URL: https://atcoder.jp/contests/abc200/tasks/abc200_c
 * Result: AC
 * Execution Time: 78 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using ull2d = vector<vector<ull>>;
#define loop(i,n) for(ull i=0;i<n;i++)

ull Comb(ull n, ull r){
  ull ret=1;
  loop(i,r){ ret *= (n-i); };
  loop(i,r){ ret /= (r-i); }
  return ret;
}

int main(){
  ull n;
  ull c = 0;
  cin >> n;
  vector<ull> v(n);
  loop(i,n){ cin >> v[i]; }
  loop(i,n){ v[i] %= 200; }
  sort(v.begin(),v.end());
  loop(i,n){
    ull same=1;
    for(ull j=i+1;j<n;j++){
      if(v[i] == v[j]){ same++; }
      else{ i = j-1; break; }
      if(j == n-1){ i=j; break; }
    }
    c += Comb(same,2);
  }
  cout << c << endl;
  return 0;
}