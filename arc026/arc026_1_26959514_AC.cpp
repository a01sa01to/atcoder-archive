/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc026/submissions/26959514
 * Submitted at: 2021-10-31 22:18:50
 * Problem URL: https://atcoder.jp/contests/arc026/tasks/arc026_1
 * Result: AC
 * Execution Time: 3 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  cout<<b*max(0,a-5)+c*min(a,5)<<endl;
}