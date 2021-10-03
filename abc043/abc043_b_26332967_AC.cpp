/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc043/submissions/26332967
 * Submitted at: 2021-10-03 15:46:41
 * Problem URL: https://atcoder.jp/contests/abc043/tasks/abc043_b
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
main(){std::string s,t;std::cin>>s;
for(int i=0;i<s.size();i++)if(s[i]=='B'){if(t.size())t.pop_back();}else t.push_back(s[i]);
std::cout<<t<<"\n";}