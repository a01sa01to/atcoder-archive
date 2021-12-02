/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc004/submissions/27624712
 * Submitted at: 2021-12-02 14:06:17
 * Problem URL: https://atcoder.jp/contests/abc004/tasks/abc004_3
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  // 1周で5回つかう、30回で元に戻る
  n%=30;
  string a="123456";
  for(int i=0;i<n;++i){
    swap(a[i%5],a[i%5+1]);
  }
  cout<<a<<endl;
}