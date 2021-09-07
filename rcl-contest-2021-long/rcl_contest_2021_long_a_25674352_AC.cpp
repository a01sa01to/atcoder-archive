/*
 * Author: a01sa01to
 * Submission URL: https://atcoder.jp/contests/rcl-contest-2021-long/submissions/25674352
 * Submitted at: 2021-09-07 23:08:11
 * Problem URL: https://atcoder.jp/contests/rcl-contest-2021-long/tasks/rcl_contest_2021_long_a
 * Result: AC
 * Execution Time: 1583 ms
 */

#include <bits/stdc++.h>
#include <unistd.h>
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
ll nowMachine = 0;
ll needMoneyToBuy = 1;
P maximList = { -1, -1 };
ll maximMoney = -1;

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
    if (i < 1) {
      MachineSet.insert(Pos1);
    }
    else {
      P m = cml[i - 1];
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
class Scanner {
  vector<char> buf;
  ssize_t n_written;
  ssize_t n_read;

  public:
  Scanner(): buf(1024 * 1024) { do_read(); }
  ll read_int() {
    ll ret = 0, sgn = 1;
    int ch = current_char();
    while (isspace(ch)) ch = next_char();
    if (ch == '-') {
      sgn = -1;
      ch = next_char();
    }
    for (; isdigit(ch); ch = next_char()) ret = (ret * 10) + (ch - '0');
    return sgn * ret;
  }

  private:
  void do_read() {
    ssize_t r = read(0, &buf[0], buf.size());
    if (r < 0) {
      throw runtime_error(strerror(errno));
    }
    n_written = r;
    n_read = 0;
  }

  inline int next_char() {
    ++n_read;
    if (n_read == n_written) { do_read(); }
    return current_char();
  }

  inline int current_char() {
    return (n_read == n_written) ? EOF : buf[n_read];
  }
};

// ----- Solve Main ----- //
void solve(ll2d& data, ll3d& SumGrid, ll3d& ValP, const P& List, const bool isOutput = false) {
  set<P> ConstantMachines;
  vector<P> cml;
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

    if (matchVal.size() == 0 && isOutput) {
      output();
    }
    else {
      if (Pos1.first == -1) {
        P point = data2point(matchVal[0]);
        money -= 1;
        nowMachine++;
        if (isOutput) output(point);
        swap(Pos1, point);
        needMoneyToBuy = 8;
      }
      else {
        if (nowMachine <= List.first + List.second && money >= needMoneyToBuy) {
          money -= needMoneyToBuy;
          ll1d Machine;
          P constP;
          if (nowMachine <= List.first) {
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
          if (isOutput) output(constP);
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
            if (isOutput) output();
          }
          else {
            P point = data2point(matchVal[pos]);
            if (isOutput) output(Pos1, point);
            swap(Pos1, point);
          }
        }
      }
    }
    appendMoney(cml, data);
    matchVal.resize(0);
  }
  // cout << "[DEB] " << MAX_CONSTANT_MACHINE << " " << MAX_CONSTANT_NEXT_MACHINE << " | " << money << " " << maximMoney << endl;
  if (maximMoney < money) {
    maximList = List;
    maximMoney = money;
  }
}

// ----- Main ----- //
int main() {
  // int main(int argc, char* argv[]) {
  cin.tie(nullptr);
  ios::sync_with_stdio(false);
  Scanner scanner;
  n = scanner.read_int();
  m = scanner.read_int();
  t = scanner.read_int();
  // MAX_CONSTANT_NEXT_MACHINE = stoi(argv[1]) - 2;

  // data[i] = Start, End, Row, Column, Value, isGot, i
  // もともとStartについてソート済み
  ll2d data(m, ll1d(7));

  // SumGrid[t][i][j] = t日以降にマス(i,j)で得られる総和
  ll3d SumGrid(t, ll2d(n, ll1d(n, 0)));

  // Grid[t][i][j] = t日目にマス(i,j)に生えているか
  // vector<vector<vector<bool>>> Grid(t, vector<vector<bool>>(n, vector<bool>(n, false)));

  rep(i, m) {
    data[i][2] = scanner.read_int();
    data[i][3] = scanner.read_int();
    data[i][0] = scanner.read_int();
    data[i][1] = scanner.read_int();
    data[i][4] = scanner.read_int();
    data[i][5] = 0;
    data[i][6] = i;
    for (int tu = data[i][0]; tu <= data[i][1]; tu++) {
      SumGrid[tu][data[i][2]][data[i][3]] += data[i][4];
      // Grid[tu][data[i][2]][data[i][3]] = true;
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

  for (int MAX_CONSTANT_MACHINE = 1; MAX_CONSTANT_MACHINE <= 5; MAX_CONSTANT_MACHINE++) {
    for (int MAX_CONSTANT_NEXT_MACHINE = 15; MAX_CONSTANT_NEXT_MACHINE <= 35; MAX_CONSTANT_NEXT_MACHINE++) {
      // cout << "[DEB] " << MAX_CONSTANT_MACHINE << " " << MAX_CONSTANT_NEXT_MACHINE << endl;
      solve(data, SumGrid, ValP, { MAX_CONSTANT_MACHINE, MAX_CONSTANT_NEXT_MACHINE });
      now = 0, money = 1;
      Pos1 = { -1, -1 };
      nowMachine = 0;
      needMoneyToBuy = 1;

      rep(i, m) {
        data[i][5] = 0;
      }
    }
  }
  // solve(data, SumGrid, ValP, 33, 1);

  solve(data, SumGrid, ValP, maximList, true);
  return 0;
}