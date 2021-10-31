/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nikkei2019-qual/submissions/26958429
 * Submitted at: 2021-10-31 21:56:00
 * Problem URL: https://atcoder.jp/contests/nikkei2019-qual/tasks/nikkei2019_qual_a
 * Result: AC
 * Execution Time: 4 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<min(b,c)<<" "<<max(0,max(b,c)-a+min(b,c))<<endl;
}