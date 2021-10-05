/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc077/submissions/26371020
 * Submitted at: 2021-10-05 22:26:40
 * Problem URL: https://atcoder.jp/contests/abc077/tasks/abc077_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  int a=1;
  while(true){a++;if(a*a>n){a--;break;}}
  cout<<a*a<<endl;
}