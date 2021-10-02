/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc175/submissions/26264329
 * Submitted at: 2021-10-02 14:02:14
 * Problem URL: https://atcoder.jp/contests/abc175/tasks/abc175_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  char a,b,c;cin>>a>>b>>c;
  if(a==b&&b==c&&c=='R') cout<<3<<endl;
  else if(a==b&&b=='R') cout<<2<<endl;
  else if(b==c&&c=='R') cout<<2<<endl;
  else if(a=='R'||b=='R'||c=='R') cout<<1<<endl;
  else cout<<0<<endl;
}