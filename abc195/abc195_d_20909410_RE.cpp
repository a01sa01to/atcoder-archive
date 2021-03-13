/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc195/submissions/20909410
 * Submitted at: 2021-03-14 00:09:16
 * Problem URL: https://atcoder.jp/contests/abc195/tasks/abc195_d
 * Result: RE
 * Execution Time: 117 ms
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ull = unsigned long long;
#define loop(n,i) for(ull i=0;i<n;i++)
 
ull indexOf(vector<ull> v, ull data){
  loop(v.size(),i){
    if(v[i] >= data){
      return i;
    }
  }
  return -1;
}
 
int main(){
  ull n,m,q;
  cin >> n >> m >> q;
  vector<vector<ull>> v;
  vector<ull> x;
  loop(n,i){
    ull a,b;
    cin >> a >> b;
    v.push_back({a,b});
  }
  loop(m,i){
    ull a;
    cin >> a;
    x.push_back(a);
  }
  sort(v.begin(),v.end(),[](const vector<ull> &a, const vector<ull> &b){return a[1]>=b[1];});
  loop(q,i){
    ull l,r;
    cin >> l >> r;
    vector<ull> x_copy(x.size());
    copy(x.begin(),x.end(),x_copy.begin());
    x_copy.erase(x_copy.begin()+l-1,x_copy.begin()+r);
    sort(x_copy.begin(),x_copy.end());
    ull c = 0;
    loop(v.size(),j){
      if(!x_copy.size()){
        break;
      }
      ull idx = indexOf(x_copy,v[j][0]);
      if(idx != -1){
        c += v[j][1];
        x_copy.erase(x_copy.begin()+idx);
      }
    }
    cout << c << endl;
  }
  return 0;
}