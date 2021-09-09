/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021-long/submissions/25699601
 * Submitted at: 2021-09-09 12:51:47
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021-long/tasks/rcl_contest_2021_long_a
 * Result: AC
 * Execution Time: 1521 ms
 */

#include <bits/stdc++.h>
#include <chrono>
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
ll needMoneyToBuy = 1;
ll maximMachine = -1;
ll maximMoney = -1;
vector<vector<P>> MaximAns;

// ----- Functions ----- //
P data2point(const ll1d v) {
  P ret = { v[2], v[3] };
  return ret;
}
void output() { cout << -1 << endl; }
void output(const P buyPos) { cout << buyPos.first << " " << buyPos.second << endl; }
void output(const P from, const P to) { cout << from.first << " " << from.second << " " << to.first << " " << to.second << endl; }
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
void appendMoney(const vector<P>& MachinesVec, ll2d& data) {
  dsu d(n * n);
  set<P> MachineSet;
  rep(i, MachinesVec.size()) {
    P m = MachinesVec[i];
    MachineSet.insert(m);
    rep(j, 4) {
      P newP = add(m, direction(1)[j]);
      if (MachineSet.count(newP)) {
        d.merge(point2id(newP), point2id(m));
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

// ----- Solve Main ----- //
void initSort(ll2d& data) {
  // 今生えてるものを価値順にソート
  matchVal.resize(0);
  rep(i, m) {
    if (data[i][0] <= now && now <= data[i][1] && data[i][5] == 0) {
      matchVal.push_back(data[i]);
    }
  }
  // cout << "[Cp1] " << matchVal.size() << endl;
  sort(all(matchVal), [](ll1d& a, ll1d& b) {
    return a[4] > b[4];
  });
}

void solve(ll2d& data, ll3d& SumGrid, ll3d& ValP, const ll& MAX_MACHINES, const bool isOutput = false) {
  set<P> Machines;
  vector<P> MachinesVec;
  vector<vector<P>> ans;
  while (now < t) {
    initSort(data);
    if (matchVal.size() == 0) {
      ans.push_back({});
    }
    else {
      // 買えるなら買う
      if (Machines.size() <= MAX_MACHINES && money >= needMoneyToBuy) {
        money -= needMoneyToBuy;
        ll1d newMachine;
        P newMachinePoint;
        if (Machines.size() < 1) {
          // cout << "[CP 2]" << endl;
          rep(idx, ValP[now].size()) {
            newMachine = ValP[now][idx];
            newMachinePoint = { newMachine[0], newMachine[1] };
            if (!Machines.count(newMachinePoint)) {
              break;
            }
          }
        }
        else {
          // cout << "[CP 3]" << endl;
          vector<P> dir = direction(1);
          P maximDir = { -10, -10 };
          int maximMC = -10;
          rep(i, MachinesVec.size()) rep(d, 4) {
            newMachinePoint = add(MachinesVec[i], dir[d]);
            if (!Machines.count(newMachinePoint) && InRange(newMachinePoint) && (Machines.size() == 1 || i != 0)) {
              if (maximDir.first == -10 || SumGrid[now][newMachinePoint.first][newMachinePoint.second] > SumGrid[now][maximDir.first][maximDir.second]) {
                maximDir = newMachinePoint;
                maximMC = i;
              }
            }
          }
          newMachinePoint = maximDir;
        }
        // cout << "[CP 4]" << endl;
        ans.push_back({ newMachinePoint });
        Machines.insert(newMachinePoint);
        MachinesVec.push_back(newMachinePoint);
        needMoneyToBuy = pow(Machines.size() + 1, 3);
      }
      else {
        // P moveMachine = { -10, -10 };
        // ll moveMPos = -1;
        // cout << "[CP 5]" << endl;
        // cout << "[DEB] " << MachinesVec.size() << endl;
        P moveMachine = MachinesVec[0];
        ll moveMPos = 0;
        // rep(i, MachinesVec.size()) {
        //   P mvi = MachinesVec[i];
        //   if (moveMachine.first == -10) {
        //     moveMachine = mvi;
        //     moveMPos = i;
        //   }
        //   else if (SumGrid[now][moveMachine.first][moveMachine.second] > SumGrid[now][mvi.first][mvi.second]) {
        //     moveMachine = mvi;
        //     moveMPos = i;
        //   }
        // }
        P toMachine = { -10, -10 };
        ll pos = -1;
        rep(i, matchVal.size()) {
          P secP = data2point(matchVal[i]);
          // cout << "[DEB] " << secP.first << " " << secP.second << endl;
          if (!Machines.count(secP)) {
            vector<P> dir = direction(1);
            rep(d, 4) {
              P tmp = add(secP, dir[d]);
              if (Machines.count(tmp) && tmp != moveMachine) {
                toMachine = secP;
                pos = i;
                break;
              }
            }
            if (toMachine.first != -10) break;
          }
        }
        // cout << "[CP 6]" << endl;
        if (toMachine.first == -10) {
          rep(i, matchVal.size()) {
            P secP = data2point(matchVal[i]);
            if (!Machines.count(secP)) {
              toMachine = secP;
              pos = i;
              break;
            }
          }
        }
        // cout << "[CP 7]" << endl;
        if (pos == -1) ans.push_back({});
        else {
          ans.push_back({ moveMachine, toMachine });
          Machines.erase(moveMachine);
          Machines.insert(toMachine);
          MachinesVec[moveMPos] = toMachine;
        }
        // cout << "[CP 8]" << endl;
      }
    }
    appendMoney(MachinesVec, data);
    now++;
  }
  if (maximMoney < money) {
    maximMachine = MAX_MACHINES;
    maximMoney = money;
    swap(MaximAns, ans);
  }
}

// ----- Main ----- //
int main() {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  chrono::system_clock::time_point start;
  start = chrono::system_clock::now();
  cin >> n >> m >> t;

  // data[i] = Start, End, Row, Column, Value, isGot, i
  ll2d data(m, ll1d(7));

  // SumGrid[t][i][j] = t日以降にマス(i,j)で得られる総和
  ll3d SumGrid(t, ll2d(n, ll1d(n, 0)));

  rep(i, m) {
    cin >> data[i][2] >> data[i][3] >> data[i][0] >> data[i][1] >> data[i][4];
    data[i][5] = 0;
    data[i][6] = i;
    for (int tu = data[i][0]; tu <= data[i][1]; tu++) {
      SumGrid[tu][data[i][2]][data[i][3]] += data[i][4];
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

  for (int MAX_MACHINES = 10; MAX_MACHINES <= 40; MAX_MACHINES++) {
    solve(data, SumGrid, ValP, MAX_MACHINES);
    now = 0, money = 1;
    needMoneyToBuy = 1;

    rep(i, m) {
      data[i][5] = 0;
    }
  }
  while (true) {
    if (chrono::duration_cast<chrono::milliseconds>(chrono::system_clock::now() - start).count() > 1500) break;
  }
  rep(i, MaximAns.size()) {
    vector<P> ma = MaximAns[i];
    if (ma.size() == 0) {
      cout << -1 << endl;
    }
    else if (ma.size() == 1) {
      cout << ma[0].first << " " << ma[0].second << endl;
    }
    else if (MaximAns[i].size() == 2) {
      cout << ma[0].first << " " << ma[0].second << " " << ma[1].first << " " << ma[1].second << endl;
    }
  }
  return 0;
}