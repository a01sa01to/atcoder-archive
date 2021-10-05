/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc102/submissions/26371940
 * Submitted at: 2021-10-05 23:09:17
 * Problem URL: https://atcoder.jp/contests/abc102/tasks/abc102_b
 * Result: AC
 * Execution Time: 3 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> a(n);
  for(int i=0;i<n;i++)cin>>a[i];
  sort(a.begin(),a.end());
  cout<<a.back()-a[0]<<endl;
}