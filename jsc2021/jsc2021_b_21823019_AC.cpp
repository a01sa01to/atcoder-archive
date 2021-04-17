/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/jsc2021/submissions/21823019
 * Submitted at: 2021-04-17 17:19:15
 * Problem URL: https://atcoder.jp/contests/jsc2021/tasks/jsc2021_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define loop(n,i) for(int i=0;i<n;i++)

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a(n),b(m),c;
  loop(n,i){ cin >> a[i]; }
  loop(m,i){ cin >> b[i]; }
  loop(n,i){
    auto res = find(b.begin(),b.end(),a[i]);
    if(res == b.end()){
      c.push_back(a[i]);
    }
  }
  loop(m,i){
    auto res = find(a.begin(),a.end(),b[i]);
    if(res == a.end()){
      c.push_back(b[i]);
    }
  }
  sort(c.begin(),c.end());
  for(int r:c){
    cout << r << " ";
  }
  cout << endl;
  return 0;
}