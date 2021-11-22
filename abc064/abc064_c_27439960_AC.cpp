/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc064/submissions/27439960
 * Submitted at: 2021-11-22 11:38:26
 * Problem URL: https://atcoder.jp/contests/abc064/tasks/abc064_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<bool>used(8,false);
  int ov=0;
  for(int i=0;i<n;i++){
    int a;cin>>a;
    if(a<400)used[0]=true;
    else if(a<800)used[1]=true;
    else if(a<1200)used[2]=true;
    else if(a<1600)used[3]=true;
    else if(a<2000)used[4]=true;
    else if(a<2400)used[5]=true;
    else if(a<2800)used[6]=true;
    else if(a<3200)used[7]=true;
    else ov++;
  }
  int m = accumulate(used.begin(),used.end(),0);
  printf("%d %d\n",(m?m:1),m+ov);
}