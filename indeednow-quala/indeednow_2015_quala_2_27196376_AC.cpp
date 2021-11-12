/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/indeednow-quala/submissions/27196376
 * Submitted at: 2021-11-13 00:35:30
 * Problem URL: https://atcoder.jp/contests/indeednow-quala/tasks/indeednow_2015_quala_2
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s){
  if(s.size()!=9)return false;
  vector<int> a(26,0),b(26,0);
  string ch="indeednow";
  for(int i=0;i<9;i++){
    a[s[i]-'a']++;
    b[ch[i]-'a']++;
  }
  return a==b;
}
int main(){
  int n;cin>>n;
  while(n--){string s;cin>>s;puts(isAnagram(s)?"YES":"NO");} 
}