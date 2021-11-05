/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc037/submissions/27042771
 * Submitted at: 2021-11-05 23:42:43
 * Problem URL: https://atcoder.jp/contests/arc037/tasks/arc037_a
 * Result: AC
 * Execution Time: 3 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int s=0;int b;
  while(n--){cin>>b;s+=max(0,80-b);}
  cout<<s<<endl;
}