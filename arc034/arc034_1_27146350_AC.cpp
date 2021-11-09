/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc034/submissions/27146350
 * Submitted at: 2021-11-09 15:27:17
 * Problem URL: https://atcoder.jp/contests/arc034/tasks/arc034_1
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  cout<<fixed<<setprecision(15);
  int n;cin>>n;
  double x=0;
  while(n--){
    double tmp;
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    tmp=a+b+c+d+e*1.1/9.0;
    x=max(x,tmp);
  }
  cout<<x<<endl;
}