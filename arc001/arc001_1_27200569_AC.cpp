/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc001/submissions/27200569
 * Submitted at: 2021-11-13 11:52:37
 * Problem URL: https://atcoder.jp/contests/arc001/tasks/arc001_1
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;string s;cin>>n>>s;
  vector<int> v(4,0);
  for(int i=0;i<n;i++)v[s[i]-'1']++;
  cout<<*max_element(v.begin(),v.end())<<" "<<*min_element(v.begin(),v.end())<<endl;
}