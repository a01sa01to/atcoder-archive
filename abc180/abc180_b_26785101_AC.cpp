/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc180/submissions/26785101
 * Submitted at: 2021-10-24 00:06:01
 * Problem URL: https://atcoder.jp/contests/abc180/tasks/abc180_b
 * Result: AC
 * Execution Time: 33 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long a,b,c=0,d=0,e=0;cin>>a;while(a--){cin>>b;c+=abs(b);d+=b*b;e=max(e,abs(b));}
  cout<<fixed<<setprecision(15)<<c<<endl<<sqrt((long double)d)<<endl<<e<<endl;
}