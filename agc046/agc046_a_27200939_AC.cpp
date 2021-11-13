/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc046/submissions/27200939
 * Submitted at: 2021-11-13 12:18:06
 * Problem URL: https://atcoder.jp/contests/agc046/tasks/agc046_a
 * Result: AC
 * Execution Time: 9 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int x;cin>>x;
  int c=1;
  while(true){
  	if(c*x%360==0){cout<<c<<endl;break;}
    c++;
  }
}