/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/panasonic2020/submissions/26846539
 * Submitted at: 2021-10-27 22:57:22
 * Problem URL: https://atcoder.jp/contests/panasonic2020/tasks/panasonic2020_a
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> v={1, 1, 1, 2, 1, 2, 1, 5, 2, 2, 1, 5, 1, 2, 1, 14, 1, 5, 1, 5, 2, 2, 1, 15, 2, 2, 5, 4, 1, 4, 1, 51};
  cout<<v[--n]<<endl;
}