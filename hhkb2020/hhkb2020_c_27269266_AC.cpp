/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/hhkb2020/submissions/27269266
 * Submitted at: 2021-11-15 11:29:02
 * Problem URL: https://atcoder.jp/contests/hhkb2020/tasks/hhkb2020_c
 * Result: AC
 * Execution Time: 503 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  set<int> found;
  int chk=0;
  for(int i=0;i<n;i++){
    found.insert(v[i]);
    while(found.count(chk)) chk++;
    cout<<chk<<endl;
  }
}