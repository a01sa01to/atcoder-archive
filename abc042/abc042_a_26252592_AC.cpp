/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc042/submissions/26252592
 * Submitted at: 2021-10-01 18:08:47
 * Problem URL: https://atcoder.jp/contests/abc042/tasks/abc042_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  if(a+b+c!=17) cout<<"NO"<<endl;
  else{
    if(a==c&&b==7) cout<<"YES"<<endl;
    else if(a==b&&c==7) cout<<"YES"<<endl;
    else if(b==c&&a==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}