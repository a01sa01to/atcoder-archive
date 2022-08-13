/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nikkei2019-ex/submissions/34025537
 * Submitted at: 2022-08-14 00:02:01
 * Problem URL: https://atcoder.jp/contests/nikkei2019-ex/tasks/nikkei2019ex_e
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  long now = 1789997546303;
  for(int i = 1000; i > n; i--){
    if (now % 2) now = now * 3 + 1;
    else now /= 2;
  }
  cout << now << endl;
}