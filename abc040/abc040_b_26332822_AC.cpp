/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc040/submissions/26332822
 * Submitted at: 2021-10-03 15:37:29
 * Problem URL: https://atcoder.jp/contests/abc040/tasks/abc040_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m=1e7;
  cin>>n;
  for(int i=1;i<1e3;i++)for(int j=i;j<1e3;j++){
    if(i*j>n) break;
    m=min(m,j-i+n-i*j);
  }
  cout<<m<<endl;
}