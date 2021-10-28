/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/keyence2020/submissions/26860677
 * Submitted at: 2021-10-28 23:12:48
 * Problem URL: https://atcoder.jp/contests/keyence2020/tasks/keyence2020_a
 * Result: AC
 * Execution Time: 3 ms
 */

#include<iostream>
using namespace std;
int main(){
  int h,w,n;cin>>h>>w>>n;
  cout<<(n-1)/max(h,w)+1<<endl;
}