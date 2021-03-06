/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc194/submissions/20706490
 * Submitted at: 2021-03-06 21:26:56
 * Problem URL: https://atcoder.jp/contests/abc194/tasks/abc194_b
 * Result: WA
 * Execution Time: 11 ms
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a,b,c;
  for(int i=0;i<n;i++){
    int m,n;
    cin >> m >> n;
    a.push_back(m);
    b.push_back(n);
    c.push_back(m+n);
  }
  int minC = *min_element(c.begin(),c.end());
  int ret = minC;
  for(int i=0;i<n;i++){
    int minRow = min(a[i],b[i]);
    if((a[i] + b[i]) > minC && minRow < minC && minRow < ret){
      ret = minRow;
    }
  }
  cout << ret << endl;
  return 0;
}