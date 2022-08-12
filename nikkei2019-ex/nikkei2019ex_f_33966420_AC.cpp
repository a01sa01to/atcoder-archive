/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/nikkei2019-ex/submissions/33966420
 * Submitted at: 2022-08-13 00:00:06
 * Problem URL: https://atcoder.jp/contests/nikkei2019-ex/tasks/nikkei2019ex_f
 * Result: AC
 * Execution Time: 10 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    bool f = false;
    if(i%2==0){cout<<"a";f=true;}
    if(i%3==0){cout<<"b";f=true;}
    if(i%4==0){cout<<"c";f=true;}
    if(i%5==0){cout<<"d";f=true;}
    if(i%6==0){cout<<"e";f=true;}
    if(!f) cout<<i;
    cout<<endl;
  }
}