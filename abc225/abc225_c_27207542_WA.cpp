/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc225/submissions/27207542
 * Submitted at: 2021-11-13 18:42:41
 * Problem URL: https://atcoder.jp/contests/abc225/tasks/abc225_c
 * Result: WA
 * Execution Time: 36 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;cin>>n>>m;
  int prevr=-1,prevc=-1;
  bool chk=true;
  for(int i=0;i<n;i++){
    prevc=-1;
    for(int j=0;j<m;j++){
      if(prevr==-1){cin>>prevr;prevc=prevr;}
      else if(prevc==-1){
        cin>>prevc;
        if(prevr+7!=prevc)chk=false;
        prevr=prevc;
      }
      else{
        int a;cin>>a;
        if((prevc-1)%7+1!=(a-1)%7)chk=false;
        prevc=a;
      }
    }
  }
  puts(chk?"Yes":"No");
}