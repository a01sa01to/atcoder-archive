/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2012-qualB/submissions/27042816
 * Submitted at: 2021-11-05 23:45:03
 * Problem URL: https://atcoder.jp/contests/tenka1-2012-qualB/tasks/tenka1_2012_5
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c;cin>>a>>b>>c;
  for(int i=1;i<128;i++){
    if(i%3==a&&i%5==b&&i%7==c)cout<<i<<endl;
  }
}