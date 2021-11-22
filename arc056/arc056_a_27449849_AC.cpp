/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc056/submissions/27449849
 * Submitted at: 2021-11-22 23:58:28
 * Problem URL: https://atcoder.jp/contests/arc056/tasks/arc056_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  long a,b,k,l;cin>>a>>b>>k>>l;
  cout<<min((k/l)*b+(k%l)*a, (k/l+1)*b)<<endl;
}