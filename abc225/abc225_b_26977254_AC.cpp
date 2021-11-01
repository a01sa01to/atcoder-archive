/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/26977254
 * Submitted at: 2021-11-01 22:22:56
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_b
 * Result: AC
 * Execution Time: 66 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<vector<int>> Graph(n);
  for(int i=0;i<n-1;i++){
    int a,b;cin>>a>>b;
    a--,b--;
    Graph[a].push_back(b);
    Graph[b].push_back(a);
  }
  int c=0;
  for(int i=0;i<n;i++) if(Graph[i].size() == 1)c++;
  puts(c==n-1?"Yes":"No");
}