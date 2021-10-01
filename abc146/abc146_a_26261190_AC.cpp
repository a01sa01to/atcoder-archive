/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc146/submissions/26261190
 * Submitted at: 2021-10-02 08:55:19
 * Problem URL: https://atcoder.jp/contests/abc146/tasks/abc146_a
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  if(s=="SUN")cout<<7;
  if(s=="MON")cout<<6;
  if(s=="TUE")cout<<5;
  if(s=="WED")cout<<4;
  if(s=="THU")cout<<3;
  if(s=="FRI")cout<<2;
  if(s=="SAT")cout<<1;
}