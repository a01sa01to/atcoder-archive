/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc195/submissions/20908845
 * Submitted at: 2021-03-13 23:54:32
 * Problem URL: https://atcoder.jp/contests/abc195/tasks/abc195_d
 * Result: RE
 * Execution Time: 121 ms
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define loop(n,i) for(int i=0;i<n;i++)

int indexOf(vector<int> v, int data){
  loop(v.size(),i){
    if(v[i] >= data){
      return i;
    }
  }
  return -1;
}

int main(){
  int n,m,q;
  cin >> n >> m >> q;
  vector<vector<int>> v;
  vector<int> x;
  loop(n,i){
    int a,b;
    cin >> a >> b;
    v.push_back({a,b});
  }
  loop(m,i){
    int a;
    cin >> a;
    x.push_back(a);
  }
  sort(v.begin(),v.end(),[](const vector<int> &a, const vector<int> &b){return a[1]>=b[1];});
  loop(q,i){
    int l,r;
    cin >> l >> r;
    vector<int> x_copy(x.size());
    copy(x.begin(),x.end(),x_copy.begin());
    x_copy.erase(x_copy.begin()+l-1,x_copy.begin()+r);
    sort(x_copy.begin(),x_copy.end());
    unsigned long long c = 0;
    loop(v.size(),j){
      if(!x_copy.size()){
        break;
      }
      int idx = indexOf(x_copy,v[j][0]);
      if(idx != -1){
        c += v[j][1];
        x_copy.erase(x_copy.begin()+idx);
      }
    }
    cout << c << endl;
  }
  return 0;
}