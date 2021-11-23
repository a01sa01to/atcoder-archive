/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc133/submissions/27454442
 * Submitted at: 2021-11-23 11:26:11
 * Problem URL: https://atcoder.jp/contests/abc133/tasks/abc133_c
 * Result: AC
 * Execution Time: 15 ms
 */

#include<bits/stdc++.h>
using namespace std;
#define integer int
#define function int
#define very long
#define is =
#define input cin>>
#define isLargerThan >
#define isLessThan <
#define isEqualTo ==
#define mod %
#define to(i,n) ;i<n;i++
#define times *
#define minimumOf min
#define say cout<<
#define then <<
#define breakline endl
function main(){
  very long integer a is 0, b is 0;
  input a;
  input b;
  very long integer ans is 100000000;
  for(integer i is a to(i,a+2019)) for(integer j is i+1 to(j,a+2019)){
    if(j isLargerThan b or i isLargerThan b or i isEqualTo b) break;
    very long integer s is i, t is j;
    ans is minimumOf(ans, s times t mod 2019);
  }
  say ans then breakline;
}