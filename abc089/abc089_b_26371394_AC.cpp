/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc089/submissions/26371394
 * Submitted at: 2021-10-05 22:42:59
 * Problem URL: https://atcoder.jp/contests/abc089/tasks/abc089_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  set<char> s;
  while(n--){char c;cin>>c;s.insert(c);}
  puts(s.size()==3?"Three":"Four");
}