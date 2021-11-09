/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc163/submissions/27145952
 * Submitted at: 2021-11-09 14:47:40
 * Problem URL: https://atcoder.jp/contests/abc163/tasks/abc163_c
 * Result: AC
 * Execution Time: 339 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<vector<int>> Graph(n,vector<int>(0));
  for(int i=1;i<n;i++){int a;cin>>a;a--;Graph[a].push_back(i);}
  for(int i=0;i<n;i++)cout<<Graph[i].size()<<endl;
}