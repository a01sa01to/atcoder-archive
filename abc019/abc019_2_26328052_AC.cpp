/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc019/submissions/26328052
 * Submitted at: 2021-10-03 10:58:28
 * Problem URL: https://atcoder.jp/contests/abc019/tasks/abc019_2
 * Result: AC
 * Execution Time: 8 ms
 */

#include<bits/stdc++.h>
using namespace std;
main(){
string s,t="";cin>>s;
vector<string> ans;
for(int i=0;i<s.size();i++){
if(t=="")t={s[i]};
else if(t.back()==s[i])t+={s[i]};
else{ans.push_back(t);t={s[i]};}
}
ans.push_back(t);
for(string x:ans)cout<<x.front()<<x.size();
cout<<endl;
}