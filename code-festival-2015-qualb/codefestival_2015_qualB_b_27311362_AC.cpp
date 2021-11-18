/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2015-qualb/submissions/27311362
 * Submitted at: 2021-11-18 09:59:16
 * Problem URL: https://atcoder.jp/contests/code-festival-2015-qualb/tasks/codefestival_2015_qualB_b
 * Result: AC
 * Execution Time: 36 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  vector<int> cnt(m+1,0);
  for(int i=0;i<n;i++){int a;cin>>a;cnt[a]++;}
  for(int i=0;i<=m;i++){
    if(cnt[i]>n/2){cout<<i<<endl;return 0;}
  }
  cout<<"?"<<endl;
}