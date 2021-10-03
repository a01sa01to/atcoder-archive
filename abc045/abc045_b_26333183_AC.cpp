/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc045/submissions/26333183
 * Submitted at: 2021-10-03 15:55:27
 * Problem URL: https://atcoder.jp/contests/abc045/tasks/abc045_b
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define all(vec) vec.begin(), vec.end()
int main() {
  string a,b,c;
  cin>>a>>b>>c;
  reverse(all(a));reverse(all(b));reverse(all(c));
  int n=0;
  while(true){
    if(n==0){
      if(a.empty()){cout<<"A"<<endl;return 0;}
      n=a.back()-'a';a.pop_back();
    }
    else if(n==1){
      if(b.empty()){cout<<"B"<<endl;return 0;}
      n=b.back()-'a';b.pop_back();
    }
    else if(n==2){
      if(c.empty()){cout<<"C"<<endl;return 0;}
      n=c.back()-'a';c.pop_back();
    }
  }
  return 0;
}