/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc037/submissions/26332325
 * Submitted at: 2021-10-03 15:11:41
 * Problem URL: https://atcoder.jp/contests/abc037/tasks/abc037_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,q;cin>>n>>q;
  vector<int> v(n);
  while(q--){
    int a,b,c;cin>>a>>b>>c;
    for(int i=a-1;i<b;i++)v[i]=c;
  }
  for(int x:v)cout<<x<<endl;
}