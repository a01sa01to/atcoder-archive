/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2019-beginner/submissions/26874931
 * Submitted at: 2021-10-29 23:41:41
 * Problem URL: https://atcoder.jp/contests/tenka1-2019-beginner/tasks/tenka1_2019_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c;cin>>a>>b>>c;
  puts(min(a,b)<c&&c<max(a,b)?"Yes":"No");
}