/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc105/submissions/26875362
 * Submitted at: 2021-10-30 00:15:55
 * Problem URL: https://atcoder.jp/contests/arc105/tasks/arc105_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include<iostream>
using namespace std;
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  bool chk=false;
  chk |= (a+b+c+d == 0);
  chk |= (a+b+c == d);
  chk |= (a+b+d == c);
  chk |= (a+c+d == b);
  chk |= (b+c+d == a);
  chk |= (a+b == c+d);
  chk |= (a+c == b+d);
  chk |= (b+c == a+d);
  puts(chk?"Yes":"No");
}