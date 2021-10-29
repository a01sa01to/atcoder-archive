/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/keyence2019/submissions/26875377
 * Submitted at: 2021-10-30 00:18:11
 * Problem URL: https://atcoder.jp/contests/keyence2019/tasks/keyence2019_a
 * Result: AC
 * Execution Time: 5 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v(4);
  cin>>v[0]>>v[1]>>v[2]>>v[3];
  sort(v.begin(),v.end());
  puts(v[0]==1&&v[1]==4&&v[2]==7&&v[3]==9?"YES":"NO");
}