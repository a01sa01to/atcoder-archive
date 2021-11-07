/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/cf16-final/submissions/27064953
 * Submitted at: 2021-11-07 10:55:07
 * Problem URL: https://atcoder.jp/contests/cf16-final/tasks/codefestival_2016_final_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;cin>>h>>w;
  for(int i=0;i<h;i++)for(int j=0;j<w;j++){
    string s;cin>>s;
    if(s=="snuke")cout<<char('A'+j)<<i+1<<endl;
  }
}