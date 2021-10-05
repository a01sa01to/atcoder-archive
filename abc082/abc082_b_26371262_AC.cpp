/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc082/submissions/26371262
 * Submitted at: 2021-10-05 22:36:39
 * Problem URL: https://atcoder.jp/contests/abc082/tasks/abc082_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s,t;
  cin>>s>>t;
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  reverse(t.begin(),t.end());
  puts(s<t?"Yes":"No");
}