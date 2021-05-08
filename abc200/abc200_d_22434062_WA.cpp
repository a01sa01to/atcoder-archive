/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc200/submissions/22434062
 * Submitted at: 2021-05-08 22:32:04
 * Problem URL: https://atcoder.jp/contests/abc200/tasks/abc200_d
 * Result: WA
 * Execution Time: 6 ms
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
  vector<pair<ull,ull>> v;
  loop(i,n){
    pair<ull,ull> a;
    cin >> a.second;
    a.first = i;
    v.push_back(a);
  }
  loop(i,n){ v[i].second %= 200; }
  sort(v.begin(),v.end(),[](auto& a, auto& b){return a.second < b.second;});
  loop(i,n){
    for(ull j=i+1;j<n;j++){
      if(v[i].second == v[j].second){
        cout << "Yes" << endl;
        cout << 1 << " " << v[i].first << endl;
        cout << 1 << " " << v[j].first << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}