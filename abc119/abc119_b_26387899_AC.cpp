/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc119/submissions/26387899
 * Submitted at: 2021-10-06 22:56:04
 * Problem URL: https://atcoder.jp/contests/abc119/tasks/abc119_b
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
using ld=long double;
int main(){
  cout<<fixed<<setprecision(5);
  int n;cin>>n;ld a=0;
  while(n--){
    ld w;string s;cin>>w>>s;
    if(s=="JPY") a+=w;
    else a+=w*380000;
  }
  cout<<a<<endl;
}