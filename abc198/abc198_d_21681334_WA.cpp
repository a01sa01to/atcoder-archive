/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc198/submissions/21681334
 * Submitted at: 2021-04-11 22:12:54
 * Problem URL: https://atcoder.jp/contests/abc198/tasks/abc198_d
 * Result: WA
 * Execution Time: 5513 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
#define loop(n,i) for(ull i=0;i<n;i++)

bool checkSame(string s1,string sn1){
  loop(s1.size(),i) loop(s1.size(),j){
    if(s1[j] == s1[j] && sn1[j] != sn1[j]){ return false; }
    if(s1[i] != s1[j] && sn1[i] == sn1[j]){ return false; }
  }
  return true;
}

bool check(string s1, string s2, string s3, ull n1, ull n2){
  if(n1*n2==0){ return false; }
  string sn1 = to_string(n1);
  string sn2 = to_string(n2);
  string sn3 = to_string(n1+n2);
  if(s1.size() != sn1.size() || s2.size() != sn2.size() || s3.size() != sn3.size()){ return false; }
  if(!checkSame(s1,sn1) || !checkSame(s2,sn2) || !checkSame(s3,sn3)){ return false; }
  loop(s1.size(),i) loop(s2.size(),j) loop(s3.size(),k){
    if(s1[i] == s2[j] && sn1[i] != sn2[j]){ return false; }
    if(s1[i] == s3[k] && sn1[i] != sn3[k]){ return false; }
    if(s2[j] == s3[k] && sn2[j] != sn3[k]){ return false; }
    if(s1[i] != s2[j] && sn1[i] == sn2[j]){ return false; }
    if(s1[i] != s3[k] && sn1[i] == sn3[k]){ return false; }
    if(s2[j] != s3[k] && sn2[j] == sn3[k]){ return false; }
  }
  return true;
}

int main(){
  string s1,s2,s3;
  cin >> s1 >> s2 >> s3;
  ull n1;
  if(s1.size() == s3.size()){ n1 = pow(10,s1.size())-1; }
  else { n1=pow(10,s3.size()) - pow(10,s1.size()); }
  for(;n1>=pow(10,s1.size()-1);n1--){
    for(ull n2=pow(10,s2.size()-1);n2<pow(10,s2.size());n2++){
      if(check(s1,s2,s3,n1,n2)){
        cout << n1 << endl;
        cout << n2 << endl;
        cout << n1 + n2 << endl;
        return 0;
      }
    }
  }
  cout << "UNSOLVABLE" << endl;
  return 0;
}