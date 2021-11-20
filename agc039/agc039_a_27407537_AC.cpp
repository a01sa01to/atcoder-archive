/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/agc039/submissions/27407537
 * Submitted at: 2021-11-21 00:27:40
 * Problem URL: https://atcoder.jp/contests/agc039/tasks/agc039_a
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
long long cnt(string&s){
  long long c=0;
  for(int i=0;i<s.size();i++)if(s[i-1]==s[i]){c++;s[i]='A';}
  return c;
}
int main(){
  string s;long long k,ans=0;cin>>s>>k;
  string first=s;ans+=cnt(first);  //最初と最後
  string second=first.back()+s;ans+=cnt(second)*(k/2);  //偶数番目
  string third=second.back()+s;ans+=cnt(third)*((k-1)/2);  //奇数番目（最初のぞく）
  cout<<ans<<endl;
}