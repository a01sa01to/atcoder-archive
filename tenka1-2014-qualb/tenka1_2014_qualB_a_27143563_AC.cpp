/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2014-qualb/submissions/27143563
 * Submitted at: 2021-11-09 10:41:37
 * Problem URL: https://atcoder.jp/contests/tenka1-2014-qualb/tasks/tenka1_2014_qualB_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  cout<<regex_replace(s,regex("HAGIYA"),"HAGIXILE")<<endl;
}