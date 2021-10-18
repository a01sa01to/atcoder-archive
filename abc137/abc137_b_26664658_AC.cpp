/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc137/submissions/26664658
 * Submitted at: 2021-10-18 13:00:38
 * Problem URL: https://atcoder.jp/contests/abc137/tasks/abc137_b
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int k,x;
  cin>>k>>x;
  vector<int> v;
  v.push_back(x);
  for(int i=1;i<k;i++){
    v.push_back(x+i);
    v.push_back(x-i);
  }
  sort(v.begin(),v.end());
  for(int a:v) cout<<a<<" ";
  cout<<endl;
}