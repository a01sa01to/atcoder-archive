/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc132/submissions/26663934
 * Submitted at: 2021-10-18 11:46:41
 * Problem URL: https://atcoder.jp/contests/abc132/tasks/abc132_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n,a=0,p1,p2,p3;cin>>n>>p1>>p2;
  for(int _=2;_<n;_++){
    cin>>p3;
    if(p1<p2&&p2<p3)a++;
    else if(p1>p2&&p2>p3)a++;
    p1=p2;p2=p3;
  }
  cout<<a<<endl;
}  