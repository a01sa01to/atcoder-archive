/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/arc045/submissions/27196492
 * Submitted at: 2021-11-13 00:45:17
 * Problem URL: https://atcoder.jp/contests/arc045/tasks/arc045_a
 * Result: AC
 * Execution Time: 6 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  bool a=false;
  while(true){
    string s;cin>>s;
    if(s==""){cout<<endl;break;}
    if(a){cout<<" ";}
    if(s=="Left")cout<<"<";
    else if(s=="Right")cout<<">";
    else cout<<"A";
    a=true;
  }
}