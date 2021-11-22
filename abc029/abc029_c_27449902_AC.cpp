/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc029/submissions/27449902
 * Submitted at: 2021-11-23 00:01:47
 * Problem URL: https://atcoder.jp/contests/abc029/tasks/abc029_c
 * Result: AC
 * Execution Time: 18 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<string>ans;
  queue<string>q;
  q.push("a");q.push("b");q.push("c");
  while(!q.empty()){
    string t=q.front();q.pop();
    if(t.size()==n){ans.push_back(t);continue;}
    q.push(t+"a");q.push(t+"b");q.push(t+"c");
  }
  sort(ans.begin(),ans.end());
  for(string x:ans)cout<<x<<endl;
}