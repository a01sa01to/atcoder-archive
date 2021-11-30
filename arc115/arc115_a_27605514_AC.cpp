/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc115/submissions/27605514
 * Submitted at: 2021-11-30 22:09:05
 * Problem URL: https://atcoder.jp/contests/arc115/tasks/arc115_a
 * Result: AC
 * Execution Time: 53 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  long odd=0,even=0;
  for(int i=0;i<n;++i){
    string s;cin>>s;
    int cnt=0;
    for(int j=0;j<m;++j)cnt+=s[j]-'0';
    ++(cnt&1?odd:even);
  }
  cout<<odd*even<<endl;
}