/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc066/submissions/27439709
 * Submitted at: 2021-11-22 11:12:49
 * Problem URL: https://atcoder.jp/contests/abc066/tasks/arc077_a
 * Result: AC
 * Execution Time: 84 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  deque<int> dq;
  for(int i=0;i<n;i++){int a;cin>>a;if(i&1)dq.push_front(a);else dq.push_back(a);}
  for(int i=0;i<n;i++){
    if(n&1){cout<<dq.back()<<" ";dq.pop_back();}
    else{cout<<dq.front()<<" ";dq.pop_front();}
  }
  cout<<endl;
}