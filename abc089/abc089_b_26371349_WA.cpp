/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc089/submissions/26371349
 * Submitted at: 2021-10-05 22:40:47
 * Problem URL: https://atcoder.jp/contests/abc089/tasks/abc089_b
 * Result: WA
 * Execution Time: 7 ms
 */

#include<iostream>
using namespace std;
int main(){
  int n;cin>>n;
  bool p,w,g,y;
  while(n--){
    char c;cin>>c;
    if(c=='P') p=true;
    if(c=='W') w=true;
    if(c=='G') g=true;
    if(c=='Y') y=true;
  }
  if(p&w&g&y) cout<<"Four"<<endl;
  else if(p&w&g) cout<<"Three"<<endl;
}