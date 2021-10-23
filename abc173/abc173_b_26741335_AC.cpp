/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc173/submissions/26741335
 * Submitted at: 2021-10-23 11:24:14
 * Problem URL: https://atcoder.jp/contests/abc173/tasks/abc173_b
 * Result: AC
 * Execution Time: 27 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  map<string,int> mp;
  while(n--){string s;cin>>s;mp[s]++;}
  printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n",mp["AC"],mp["WA"],mp["TLE"],mp["RE"]);
}