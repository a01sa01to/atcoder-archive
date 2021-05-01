/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/zone2021/submissions/22234031
 * Submitted at: 2021-05-01 22:39:40
 * Problem URL: https://atcoder.jp/contests/zone2021/tasks/zone2021_c
 * Result: TLE
 * Execution Time: 2043 ms
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
using ull = unsigned long long;
#define loop(i,n) for(ull i=0;i<n;i++)

int main(){
  ull n;
  cin >> n;
  vector<vector<ull>> people(n,vector<ull>(6));
  vector<ull> select(1250);
  loop(i,n){
    people[i][0] = i;
    cin >> people[i][1] >> people[i][2] >> people[i][3] >> people[i][4] >> people[i][5];
  }
  const vector<vector<ull>> peopleCopy = people;
  ull upto10 = min((ull)250,n);
  sort(people.begin(),people.end(),[](vector<ull>& a, vector<ull>& b){ return a[1] > b[1]; });
  loop(i,upto10){ select[i] = people[i][0]; }
  sort(people.begin(),people.end(),[](vector<ull>& a, vector<ull>& b){ return a[2] > b[2]; });
  loop(i,upto10){ select[i+250] = people[i][0]; }
  sort(people.begin(),people.end(),[](vector<ull>& a, vector<ull>& b){ return a[3] > b[3]; });
  loop(i,upto10){ select[i+500] = people[i][0]; }
  sort(people.begin(),people.end(),[](vector<ull>& a, vector<ull>& b){ return a[4] > b[4]; });
  loop(i,upto10){ select[i+750] = people[i][0]; }
  sort(people.begin(),people.end(),[](vector<ull>& a, vector<ull>& b){ return a[5] > b[5]; });
  loop(i,upto10){ select[i+1000] = people[i][0]; }

  sort(select.begin(),select.end());
  select.erase(unique(select.begin(), select.end()),select.end());

  ull maxim = 0;
  for(ull i=0;i<select.size()-2;i++){
    for(ull j=i+1;j<select.size()-1;j++){
      for(ull k=j+1;k<select.size();k++){
        ull minim = max(max(peopleCopy[select[i]][1], peopleCopy[select[j]][1]), peopleCopy[select[k]][1]);
        for(int l=2;l<=5;l++){
          ull temp = max(max(peopleCopy[select[i]][l], peopleCopy[select[j]][l]), peopleCopy[select[k]][l]);
          minim = min(temp,minim);
        }
        maxim = max(minim,maxim);
      }
    }
  }
  cout << maxim << endl;
  return 0;
}