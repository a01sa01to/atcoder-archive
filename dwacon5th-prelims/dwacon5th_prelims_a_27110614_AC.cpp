/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/dwacon5th-prelims/submissions/27110614
 * Submitted at: 2021-11-07 22:27:54
 * Problem URL: https://atcoder.jp/contests/dwacon5th-prelims/tasks/dwacon5th_prelims_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> a(n);
  double sum=0;
  for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
  sum/=n;
  pair<double,int> p={10000000,-1};
  for(int i=0;i<n;i++) if(p.first>abs(a[i]-sum)) p={abs(a[i]-sum),i};
  cout<<p.second<<endl;
}