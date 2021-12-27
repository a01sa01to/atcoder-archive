/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc132/submissions/28196758
 * Submitted at: 2021-12-28 00:07:21
 * Problem URL: https://atcoder.jp/contests/arc132/tasks/arc132_a
 * Result: AC
 * Execution Time: 234 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> r(n),c(n);
  for(int i=0;i<n;++i)cin>>r[i];
  for(int i=0;i<n;++i)cin>>c[i];
  int q;cin>>q;
  while(q--){
    int ri,ci;cin>>ri>>ci;
    --ri,--ci;
    cout << (r[ri] + c[ci] > n ? "#" : ".");
  }
  cout<<endl;
}