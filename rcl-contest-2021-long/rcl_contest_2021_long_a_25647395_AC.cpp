/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021-long/submissions/25647395
 * Submitted at: 2021-09-06 15:49:19
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021-long/tasks/rcl_contest_2021_long_a
 * Result: AC
 * Execution Time: 35 ms
 */

#include <bits/stdc++.h>
using namespace std;
#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> ll1d;
typedef vector<ll1d> ll2d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

// ----- SETTINGS ----- //
int n, m, t;
ll now = 0, money = 1;
ll2d matchVal;
P nowPos = { -1, -1 };
const ll MAX_CONSTANT_MACHINE = 10;
ll nowMachine = 0;
ll needMoneyToBuy = 1;

// ----- Functions ----- //
P data2point(const ll1d v) {
  P ret = { v[2], v[3] };
  return ret;
}
void output() { cout << -1 << endl; }
void output(const P buyPos) { cout << buyPos.first << " " << buyPos.second << endl; }
void output(const P from, const P to) { cout << from.first << " " << from.second << " " << to.first << " " << to.second << endl; }

// ----- Main ----- ..
int main() {
  cout << fixed << setprecision(15);
  cin >> n >> m >> t;

  // data[i] = Start, End, Row, Column, Value, isGot, i
  // もともとStartについてソート済み
  ll2d data(m, ll1d(7));

  // それぞれのマスで出てくる合計Value
  ll2d SumGrid(n, ll1d(n, 0));
  rep(i, m) {
    cin >> data[i][2] >> data[i][3] >> data[i][0] >> data[i][1] >> data[i][4];
    data[i][5] = 0;
    data[i][6] = i;
    SumGrid[data[i][2]][data[i][3]] += data[i][4];
  }

  ll2d ValP;
  rep(i, n) rep(j, n) {
    ValP.push_back({ i, j, SumGrid[i][j], 0 });
  }
  sort(all(ValP), [](ll1d& a, ll1d& b) {
    return a[2] > b[2];
  });
  set<P> ConstantMachines;

  rep(now, t) {
    // 今生えてるものを価値順にソート
    rep(i, m) {
      if (data[i][0] <= now && now <= data[i][1] && data[i][5] == 0) {
        matchVal.push_back(data[i]);
      }
    }
    sort(all(matchVal), [](ll1d& a, ll1d& b) {
      return a[4] > b[4];
    });

    if (matchVal.size() == 0) {
      output();
    }
    else {
      if (nowPos.first == -1) {
        P point = data2point(matchVal[0]);
        money -= 1;
        nowMachine++;
        output(point);
        swap(nowPos, point);
        needMoneyToBuy = 8;
      }
      else {
        if (nowMachine <= MAX_CONSTANT_MACHINE && money >= needMoneyToBuy) {
          money -= needMoneyToBuy;
          ll1d Machine;
          P constP;
          rep(GridIdx, ValP.size()) {
            Machine = ValP[GridIdx];
            constP = { Machine[0], Machine[1] };
            if (ValP[GridIdx][3] == 0 && constP != nowPos) {
              ValP[GridIdx][3] = 1;
              break;
            }
          }
          output(constP);
          ConstantMachines.insert(constP);
          nowMachine++;
          needMoneyToBuy = pow(nowMachine + 1, 3);
        }
        else {
          ll pos = -1;
          rep(i, matchVal.size()) {
            P secP = data2point(matchVal[i]);
            if (secP != nowPos && !ConstantMachines.count(secP)) {
              pos = i;
              break;
            }
          }
          if (pos == -1) {
            output();
          }
          else {
            P point = data2point(matchVal[pos]);
            output(nowPos, point);
            data[matchVal[pos][6]][5] = 1;
            money += matchVal[pos][4];
            swap(nowPos, point);
          }
        }

        rep(i, matchVal.size()) {
          if (ConstantMachines.count(data2point(matchVal[i]))) {
            data[matchVal[i][6]][5] = 1;
            money += matchVal[i][4];
          }
        }
      }
    }
    matchVal.resize(0);
  }
  return 0;
}