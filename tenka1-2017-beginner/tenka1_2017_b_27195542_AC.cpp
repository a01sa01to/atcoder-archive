/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/tenka1-2017-beginner/submissions/27195542
 * Submitted at: 2021-11-12 23:33:00
 * Problem URL: https://atcoder.jp/contests/tenka1-2017-beginner/tasks/tenka1_2017_b
 * Result: AC
 * Execution Time: 70 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  pair<int,int> maxim={0,0};
  while(n--){
    pair<int,int> tmp;
    cin>>tmp.first>>tmp.second;
    if(maxim.first<tmp.first) maxim=tmp;
  }
  cout<<maxim.first+maxim.second<<endl;
}