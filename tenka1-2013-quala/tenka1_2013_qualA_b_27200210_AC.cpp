/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2013-quala/submissions/27200210
 * Submitted at: 2021-11-13 11:31:00
 * Problem URL: https://atcoder.jp/contests/tenka1-2013-quala/tasks/tenka1_2013_qualA_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,cnt=0;cin>>n;
  while(n--){
  	int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    if(a+b+c+d+e<20)cnt++;
  }
  cout<<cnt<<endl;
}