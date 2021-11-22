/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/abc116/submissions/27439475
 * Submitted at: 2021-11-22 10:43:19
 * Problem URL: https://atcoder.jp/contests/abc116/tasks/abc116_c
 * Result: AC
 * Execution Time: 7 ms
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int> rem(n);for(int i=0;i<n;i++)cin>>rem[i];
  int ans=0,sum=accumulate(rem.begin(),rem.end(),0);
  while(sum){
    //cout<<"[DEB]";for(int r:rem)cout<<" "<<r;cout<<endl;
    bool streak=false;
    for(int i=0;i<n;i++){
      if(rem[i]==0 && streak){streak=false;++ans;break;}
      else if(rem[i]==0)continue;
      else{
        streak=true;
        --rem[i],--sum;
      }
    }
    if(streak)++ans;
  }
  cout<<ans<<endl;
}