/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc015/submissions/27308072
 * Submitted at: 2021-11-17 23:42:49
 * Problem URL: https://atcoder.jp/contests/arc015/tasks/arc015_2
 * Result: AC
 * Execution Time: 13 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> ans(6,0);
  for(int i=0;i<n;i++){
    double a,b;cin>>a>>b;
    if(a>=35)ans[0]++;
    else if(a>=30)ans[1]++;
    else if(a>=25)ans[2]++;
    if(b>=25)ans[3]++;
    if(b<0&&a>=0)ans[4]++;
    if(a<0)ans[5]++;
  }
  printf("%d %d %d %d %d %d\n",ans[0],ans[1],ans[2],ans[3],ans[4],ans[5]);
}