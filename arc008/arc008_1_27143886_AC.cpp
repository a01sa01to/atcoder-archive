/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc008/submissions/27143886
 * Submitted at: 2021-11-09 11:18:32
 * Problem URL: https://atcoder.jp/contests/arc008/tasks/arc008_1
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int x;cin>>x;
  cout<<(x%10<7?x/10*100+x%10*15:(x+10)/10*100)<<endl;
}