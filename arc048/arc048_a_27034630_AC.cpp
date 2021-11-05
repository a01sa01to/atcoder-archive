/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc048/submissions/27034630
 * Submitted at: 2021-11-05 14:52:46
 * Problem URL: https://atcoder.jp/contests/arc048/tasks/arc048_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b;cin>>a>>b;
  if(a<0)a++;if(b<0)b++;
  cout<<b-a<<endl;
}