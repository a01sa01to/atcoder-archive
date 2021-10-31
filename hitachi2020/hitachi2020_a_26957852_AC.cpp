/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/hitachi2020/submissions/26957852
 * Submitted at: 2021-10-31 21:44:34
 * Problem URL: https://atcoder.jp/contests/hitachi2020/tasks/hitachi2020_a
 * Result: AC
 * Execution Time: 2 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  bool chk=(s.size()%2==0),a=true;
  for(int i=0;i<s.size();i++){
    if(a&&s[i]=='h')a=false;
    else if(!a&&s[i]=='i')a=true;
    else chk=false;
  }
  puts(chk?"Yes":"No");
}