/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-festival-2015-qualb/submissions/27606061
 * Submitted at: 2021-11-30 22:38:10
 * Problem URL: https://atcoder.jp/contests/code-festival-2015-qualb/tasks/codefestival_2015_qualB_c
 * Result: AC
 * Execution Time: 105 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  if(n<m){puts("NO");return 0;}
  multiset<int>r;
  for(int i=0;i<n;++i){int a;cin>>a;r.insert(a);}
  for(int i=0;i<m;++i){
    int a;cin>>a;
    auto itr = r.upper_bound(a-1);
    if(itr==r.end()){puts("NO");return 0;}
    r.erase(itr);
  }
  puts("YES");
}