/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/zone2021/submissions/22217145
 * Submitted at: 2021-05-01 21:49:10
 * Problem URL: https://atcoder.jp/contests/zone2021/tasks/zone2021_d
 * Result: RE
 * Execution Time: 2205 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned ll;
#define loop(i,n) for(ull i=0;i<n;i++)

int main(){
  string s;
  vector<char> t;
  cin >> s;
  loop(i,s.size()){
    if(s[i] == 'R'){
      reverse(t.begin(),t.end());
    }
    else{
      t.push_back(s[i]);
    }
  }
  ll i=0;
  while(t.size()-1 > i){
    if(t[i] == t[i+1]){
      t.erase(t.begin()+i);
      t.erase(t.begin()+i);
      i=i-1;
    }
    else{ i++; }
    if(t.size() == 0){ return 0; }
  }
  for(char c : t){ cout << c; }
  cout << endl;
  return 0;
}