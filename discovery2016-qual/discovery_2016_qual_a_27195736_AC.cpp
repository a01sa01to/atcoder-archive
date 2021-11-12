/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/discovery2016-qual/submissions/27195736
 * Submitted at: 2021-11-12 23:43:55
 * Problem URL: https://atcoder.jp/contests/discovery2016-qual/tasks/discovery_2016_qual_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  string a="DiscoPresentsDiscoveryChannelProgrammingContest2016";
  for(int i=0;i<a.size();i++){
    if(i!=0&&i%n==0)cout<<endl;
    cout<<a[i];
  }
  cout<<endl;
}