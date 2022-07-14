/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc254/submissions/33218892
 * Submitted at: 2022-07-14 18:22:13
 * Problem URL: https://atcoder.jp/contests/abc254/tasks/abc254_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector ans(n,vector<int>(0));
  ans[0].push_back(1);
  for(int i = 1 ; i < n; i++){
    for(int j = 0; j < i+1; j++){
      if(j == 0) ans[i].push_back(1);
      else ans[i].push_back(ans[i-1][j-1] + ans[i-1][j]);
    }
  }
  for(int i = 0 ; i < n ; i++) {for(int j = 0 ; j < ans[i].size(); j++){
   	cout << ans[i][j] << " ";
  }cout<<endl;
                               }
}