/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc176/submissions/26741622
 * Submitted at: 2021-10-23 11:43:14
 * Problem URL: https://atcoder.jp/contests/abc176/tasks/abc176_b
 * Result: AC
 * Execution Time: 13 ms
 */

#include<bits/stdc++.h>
main(){
  std::string s;std::cin>>s;int sum=0;
  for(int i=0;i<s.size();i++)sum+=s[i]-'0';
  puts(sum%9?"No":"Yes");
}