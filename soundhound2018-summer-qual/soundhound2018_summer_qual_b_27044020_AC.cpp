/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/soundhound2018-summer-qual/submissions/27044020
 * Submitted at: 2021-11-06 01:15:25
 * Problem URL: https://atcoder.jp/contests/soundhound2018-summer-qual/tasks/soundhound2018_summer_qual_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;int n;cin>>s>>n;
  for(int i=0;i<s.size();i++)if(i%n==0)cout<<s[i];
  cout<<endl;
}