/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc039/submissions/27429597
 * Submitted at: 2021-11-21 22:14:50
 * Problem URL: https://atcoder.jp/contests/abc039/tasks/abc039_c
 * Result: WA
 * Execution Time: 3 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;cin>>s;
  if(s=="WBWBWWBWBWBWWBWBWWBW")puts("Do");
  if(s=="WBWWBWBWBWWBWBWWBWWB")puts("Re");
  if(s=="WWBWBWBWWBWBWWBWWBWB")puts("Mi");
  if(s=="WBWBWBWWBWBWWBWWBWBW")puts("Fa");
  if(s=="WBWBWWBWBWWBWWBWBWWB")puts("So");
  if(s=="WBWWBWBWWBWWBWBWWBWB")puts("La");
  if(s=="WWBWBWWBWWBWBWWBWBWB")puts("Si");
}