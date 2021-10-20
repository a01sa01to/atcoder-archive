/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc159/submissions/26698581
 * Submitted at: 2021-10-20 15:25:33
 * Problem URL: https://atcoder.jp/contests/abc159/tasks/abc159_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  string a,b,c,d,e;
  a=s.substr(0,(s.size()-1)/2);
  b=s.substr((s.size()+1)/2);
  reverse_copy(s.begin(),s.end(),back_inserter(c));
  reverse_copy(a.begin(),a.end(),back_inserter(d));
  reverse_copy(b.begin(),b.end(),back_inserter(e));
  puts(s==c&&a==d&&b==e?"Yes":"No");
}