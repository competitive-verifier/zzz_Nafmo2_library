// competitive-verifier: PROBLEM http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A

#include "../../template/template.hpp"
#include "../../data_structure/unionfind.hpp"

int main() {
  int N, Q;
  cin>>N>>Q;
  UnionFind uf(N);
  REP(loop,Q) {
    int t, x, y;
    cin>>t>>x>>y;
    if (t == 0)
      uf.unite(x, y);
    else
      cout<<(uf.find(x) == uf.find(y))<<endl;
  }
}