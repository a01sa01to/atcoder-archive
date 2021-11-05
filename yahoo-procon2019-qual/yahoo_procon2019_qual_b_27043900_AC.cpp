/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/yahoo-procon2019-qual/submissions/27043900
 * Submitted at: 2021-11-06 01:03:12
 * Problem URL: https://atcoder.jp/contests/yahoo-procon2019-qual/tasks/yahoo_procon2019_qual_b
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> v(4);
  for(int i=0;i<6;i++){int b;cin>>b;v[--b]++;}
  bool chk=false;for(int i=0;i<4;i++){chk|=v[i]>2;}
  puts(!chk?"YES":"NO");
}