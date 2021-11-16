/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2015-morning-easy/submissions/27283587
 * Submitted at: 2021-11-16 10:14:04
 * Problem URL: https://atcoder.jp/contests/code-festival-2015-morning-easy/tasks/cf_2015_morning_easy_a
 * Result: AC
 * Execution Time: 11 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    if(i*i>=n){cout<<i*i-n<<endl;break;}
  }
}