/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc006/submissions/26268938
 * Submitted at: 2021-10-02 18:35:34
 * Problem URL: https://atcoder.jp/contests/abc006/tasks/abc006_2
 * Result: AC
 * Execution Time: 18 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> a(3,0); a[2]=1;
  for(int i=2;i<n;i++)a.push_back((a[i-2]+a[i-1]+a[i])%10007);
  cout<<a[--n]<<endl;
}