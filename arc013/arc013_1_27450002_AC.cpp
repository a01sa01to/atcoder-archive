/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc013/submissions/27450002
 * Submitted at: 2021-11-23 00:08:26
 * Problem URL: https://atcoder.jp/contests/arc013/tasks/arc013_1
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int>a(3),b(3);
  for(int i=0;i<3;i++)cin>>a[i];
  for(int i=0;i<3;i++)cin>>b[i];
  sort(b.begin(),b.end());
  int ans=0;
  do{
    int t=1;
    for(int i=0;i<3;i++)t*=a[i]/b[i];
    ans=max(ans,t);
  }while(next_permutation(b.begin(),b.end()));
  cout<<ans<<endl;
}