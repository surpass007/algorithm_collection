/*
    implement of disjoint-set reference by  https://zhuanlan.zhihu.com/p/93647900
*/
#include <iostream>
#include <vector>

using std::vector;

#define MaxN 1005
class UnionFind {
 public:
  vector<int> fa;
  vector<int> rank;
  void Init(int n) {
    fa.resize(n + 1);
    rank.resize(n + 1);
    for (int i = 1; i <= n; i++) {
      fa[i] = i;
      rank[i] = 1;
    }
  }

//path compression
  int Find(int x) { return x == fa[x] ? x : (fa[x] = Find(fa[x])); }

// rank merge
  void Merge(int i, int j) {
    int x = Find(i);
    int y = Find(j);
    if (rank[x] <= rank[y]) {
      fa[x] = y;
    } else {
      fa[y] = x;
    }
    if (rank[x] == rank[y] && x != y) {
      rank[y]++;
    }
  }
};
