/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/pakencamp-2019-day3/submissions/32095984
 * Submitted at: 2022-05-29 23:46:34
 * Problem URL: https://atcoder.jp/contests/pakencamp-2019-day3/tasks/pakencamp_2019_day3_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<string,int> m;
  while(n--){
    string x;cin>>x;
    m[x]++;
  }
  puts(m["white"]<m["black"]?"black":"white");
}