/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc060/submissions/26253028
 * Submitted at: 2021-10-01 18:42:15
 * Problem URL: https://atcoder.jp/contests/abc060/tasks/abc060_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string a,b,c;
  cin>>a>>b>>c;
  cout<<(a.back()==b.front()&&b.back()==c.front()?"YES":"NO")<<endl;
}