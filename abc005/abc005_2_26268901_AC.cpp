/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc005/submissions/26268901
 * Submitted at: 2021-10-02 18:33:09
 * Problem URL: https://atcoder.jp/contests/abc005/tasks/abc005_2
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++) cin>>v[i];
  cout<<*min_element(v.begin(),v.end())<<endl;
}