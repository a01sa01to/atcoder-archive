/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021-long/submissions/25672579
 * Submitted at: 2021-09-07 22:03:07
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021-long/tasks/rcl_contest_2021_long_a
 * Result: AC
 * Execution Time: 66 ms
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
typedef vector<ll2d> ll3d;
typedef pair<ll, ll> P;
#define rep(i, n) for (ll i = 0; i < n; i++)
#define all(vec) vec.begin(), vec.end()

// ----- SETTINGS ----- //
ll n, m, t;
ll now = 0, money = 1;
ll2d matchVal;
P Pos1 = { -1, -1 };
// P Pos2 = { -1, -1 };
const ll MAX_ALL_MACHINE = 34;
const ll MAX_VARIABLE_MACHINE = 1;
const ll MAX_CONSTANT_MACHINE = 1;
const ll MAX_CONSTANT_NEXT_MACHINE = MAX_ALL_MACHINE - MAX_VARIABLE_MACHINE - MAX_CONSTANT_MACHINE;
// ll MAX_CONSTANT_NEXT_MACHINE;
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
bool isNext(const P P1, const P nextP2) {
  bool top = (P1.first == nextP2.first + 1) && (P1.second == nextP2.second);
  bool bottom = (P1.first == nextP2.first - 1) && (P1.second == nextP2.second);
  bool left = (P1.first == nextP2.first) && (P1.second == nextP2.second - 1);
  bool right = (P1.first == nextP2.first) && (P1.second == nextP2.second + 1);
  return (top || bottom || left || right);
}
P add(const P p1, const P p2) {
  return { p1.first + p2.first, p1.second + p2.second };
}
bool InRange(const P point) {
  return (0 <= point.first && point.first < n) && (0 <= point.second && point.second < n);
}
int point2id(const P point) {
  return (point.first * n) + point.second;
}
vector<P> direction(const ll cnt) {
  return { { -cnt, 0 }, { 0, cnt }, { cnt, 0 }, { 0, -cnt } };
}
void appendMoney(const vector<P>& cml, ll2d& data) {
  dsu d(n * n);
  set<P> MachineSet;
  rep(i, nowMachine) {
    if (i < MAX_VARIABLE_MACHINE) {
      MachineSet.insert(Pos1);
    }
    else {
      P m = cml[i - MAX_VARIABLE_MACHINE];
      MachineSet.insert(m);
      rep(j, 4) {
        P newP = add(m, direction(1)[j]);
        if (MachineSet.count(newP)) {
          d.merge(point2id(newP), point2id(m));
        }
      }
    }
  }
  rep(i, matchVal.size()) {
    if (MachineSet.count(data2point(matchVal[i]))) {
      data[matchVal[i][6]][5] = 1;
      money += data[matchVal[i][6]][4] * d.size(point2id(data2point(matchVal[i])));
    }
  }
}

// ----- Main ----- //
int main() {
  // int main(int argc, char* argv[]) {
  cout << fixed << setprecision(15);
  cin >> n >> m >> t;
  // MAX_CONSTANT_NEXT_MACHINE = stoi(argv[1]) - 2;

  // data[i] = Start, End, Row, Column, Value, isGot, i
  // ????????????Start???????????????????????????
  ll2d data(m, ll1d(7));

  // SumGrid[t][i][j] = t??????????????????(i,j)?????????????????????
  ll3d SumGrid(t, ll2d(n, ll1d(n, 0)));

  // Grid[t][i][j] = t???????????????(i,j)?????????????????????
  vector<vector<vector<bool>>> Grid(t, vector<vector<bool>>(n, vector<bool>(n, false)));

  rep(i, m) {
    cin >> data[i][2] >> data[i][3] >> data[i][0] >> data[i][1] >> data[i][4];
    data[i][5] = 0;
    data[i][6] = i;
    for (int tu = data[i][0]; tu <= data[i][1]; tu++) {
      SumGrid[tu][data[i][2]][data[i][3]] += data[i][4];
      Grid[tu][data[i][2]][data[i][3]] = true;
    }
  }

  ll3d ValP(t);
  rep(d, t) {
    rep(i, n) rep(j, n) {
      ValP[d].push_back({ i, j, SumGrid[d][i][j] });
    }
    sort(all(ValP[d]), [](ll1d& a, ll1d& b) {
      return a[2] > b[2];
    });
  }
  set<P> ConstantMachines;
  vector<P> cml;

  rep(now, t) {
    // ?????????????????????????????????????????????
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
      if (Pos1.first == -1) {
        P point = data2point(matchVal[0]);
        money -= 1;
        nowMachine++;
        output(point);
        swap(Pos1, point);
        needMoneyToBuy = 8;
      }
      else {
        if (nowMachine <= MAX_CONSTANT_MACHINE + MAX_CONSTANT_NEXT_MACHINE && money >= needMoneyToBuy) {
          money -= needMoneyToBuy;
          ll1d Machine;
          P constP;
          if (nowMachine <= MAX_CONSTANT_MACHINE) {
            rep(GridIdx, ValP.size()) {
              Machine = ValP[now][GridIdx];
              constP = { Machine[0], Machine[1] };
              if (!ConstantMachines.count(constP) && constP != Pos1) {
                break;
              }
            }
          }
          else {
            vector<P> dir = direction(1);
            P maximumDir = { -10, -10 };
            int maximMC = -1;
            int cnt = 1;
          attempt:
            rep(mc, ConstantMachines.size()) {
              rep(dire, 4) {
                constP = add(cml[mc], dir[dire]);
                if (!ConstantMachines.count(constP) && constP != Pos1 && InRange(constP)) {
                  if (maximumDir.first != -10) {
                    if (SumGrid[now][constP.first][constP.second] > SumGrid[now][maximumDir.first][maximumDir.second]) {
                      maximumDir = constP;
                      maximMC = mc;
                    }
                  }
                  else {
                    maximumDir = constP;
                    maximMC = mc;
                  }
                }
              }
            }
            if (maximumDir.first == -10) {
              dir = direction(++cnt);
              goto attempt;
            }
            constP = maximumDir;
          }
          output(constP);
          ConstantMachines.insert(constP);
          cml.push_back(constP);

          nowMachine++;
          needMoneyToBuy = pow(nowMachine + 1, 3);
        }
        else {
          ll pos = -1;
          rep(i, matchVal.size()) {
            P secP = data2point(matchVal[i]);
            if (secP != Pos1 && !ConstantMachines.count(secP)) {
              pos = i;
              break;
            }
          }
          if (pos == -1) {
            output();
          }
          else {
            P point = data2point(matchVal[pos]);
            output(Pos1, point);
            swap(Pos1, point);
          }
        }
      }
    }
    appendMoney(cml, data);
    matchVal.resize(0);
  }
  return 0;
}