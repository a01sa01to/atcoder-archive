/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc001/submissions/26266801
 * Submitted at: 2021-10-02 16:35:57
 * Problem URL: https://atcoder.jp/contests/abc001/tasks/abc001_2
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int m;cin>>m;
  if(m<100)cout<<"00"<<endl;
  else if(m<5001)printf("%02d\n",m/100);
  else if(m<30001)cout<<m/1000+50<<endl;
  else if(m<70001)cout<<(m/1000-30)/5+80<<endl;
  else cout<<89<<endl;
}