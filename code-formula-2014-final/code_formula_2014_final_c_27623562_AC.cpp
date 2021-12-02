/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/code-formula-2014-final/submissions/27623562
 * Submitted at: 2021-12-02 11:39:35
 * Problem URL: https://atcoder.jp/contests/code-formula-2014-final/tasks/code_formula_2014_final_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
void userInsert(set<string>&usr, string&uname){
  if(uname!=""){
    usr.insert(uname);
    uname="";
  }
}
int main(){
  string s;
  getline(cin,s);
  set<string>usr;
  string uname="";bool atm=false;
  for(int i=0;i<s.size();++i){
    if(s[i]=='@'){
      atm=true;
      userInsert(usr,uname);
    }
    else if(s[i]==' '){
      atm=false;
      userInsert(usr,uname);
    }
    else{
      if(atm)uname+=s[i];
    }
  }
  userInsert(usr,uname);
  for(string x:usr)cout<<x<<endl;
}