/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc080/submissions/27449409
 * Submitted at: 2021-11-22 23:33:39
 * Problem URL: https://atcoder.jp/contests/arc080/tasks/arc080_a
 * Result: AC
 * Execution Time: 40 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> cnt(3,0);
  // 1 4 1 4 ... 1 4 2 2 ... 2 の倍数ならok _1<=_4
  // 1 4 1 4 ... 1 4 1 でもok _1<=_4+1
  while(n--){
    int a;cin>>a;
    if(a%4==0)++cnt[2];
    else if(a%2==0)++cnt[1];
    else ++cnt[0];
  }
  if(cnt[1]) puts(cnt[0]<=cnt[2]?"Yes":"No");
  else puts(cnt[0]<=cnt[2]+1?"Yes":"No");
}