/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2018-beginner/submissions/27034046
 * Submitted at: 2021-11-05 14:04:25
 * Problem URL: https://atcoder.jp/contests/tenka1-2018-beginner/tasks/tenka1_2018_b
 * Result: AC
 * Execution Time: 4 ms
 */

#include<iostream>
using namespace std;
int main(){
  long long a,b;int k;
  cin>>a>>b>>k;
  for(int i=0;i<k;i++){
    if(i&1){b/=2;a+=b;}
    else{a/=2;b+=a;}
  }
  cout<<a<<" "<<b<<endl;
}