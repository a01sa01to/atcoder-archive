/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc031/submissions/26331647
 * Submitted at: 2021-10-03 14:31:59
 * Problem URL: https://atcoder.jp/contests/abc031/tasks/abc031_b
 * Result: AC
 * Execution Time: 3 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main() {
  int l,h,n;cin>>l>>h>>n;
  while(n--){int a;cin>>a;
    if(h<a)cout<<-1;
    else if(l<=a)cout<<0;
    else cout<<l-a;
    cout<<endl;
  }
}