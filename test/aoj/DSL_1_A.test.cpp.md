---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/unionfind.hpp
    title: data_structure/unionfind.hpp
  - icon: ':heavy_check_mark:'
    path: template/template.hpp
    title: template/template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
    links:
    - http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
  bundledCode: "#line 1 \"test/aoj/DSL_1_A.test.cpp\"\n#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A\"\
    \n\n#line 2 \"template/template.hpp\"\n// clang-format off\n#include <bits/stdc++.h>\n\
    // #include <atcoder/all>\n// #include <boost/multiprecision/cpp_int.hpp>\n//\
    \ #include <boost/multiprecision/integer.hpp>\ntypedef long long int ll;\n#define\
    \ FOR(i,a,b) for(ll i=(a);i<(b);i++)\n#define REP(i,n) for(ll i=0;i<signed(n);i++)\n\
    #define EREP(i,n) for(ll i=1;i<=signed(n);i++)\n#define ALL(x) std::begin(x),\
    \ std::end(x)\nusing namespace std;\n// using namespace atcoder;\n// using boost::multiprecision::cpp_int;\n\
    // namespace mp = boost::multiprecision;\n//#define EVEL 1\n#ifdef EVEL\n#define\
    \ DEB(X) cout << #X <<\":\" <<X<<\" \" ;\n#define TF(f) f ? cout<<\"true  \" :\
    \ cout<<\"false \";\n#define END cout<<\"\\n\";\n#else\n#define DEB(X) {}\n#define\
    \ TF(f) {}\n#define END {}\n#endif\nconst ll INF = 9e18;\ntypedef std::pair<ll,\
    \ ll> P;\nstruct edge { ll to, cost; };\n#define VMAX 100000\ntemplate<class T>\
    \ inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false;\
    \ }\ntemplate<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return\
    \ true; } return false; }\ntemplate <class T> T vgcd(T m, T n) {return std::gcd(m,\
    \ n);}\ntemplate <class T, class... Args> T vgcd(T a, Args... args) {return vgcd(a,\
    \ vgcd(args...));}\nconst long long MOD = 998244353;\n// using mint = static_modint<998244353>;\n\
    // clang-format on\nll ans = 0;\nbool F = false;\n#line 2 \"data_structure/unionfind.hpp\"\
    \n\nstruct UnionFind {\n  vector< int > data;\n\n  UnionFind() = default;\n\n\
    \  explicit UnionFind(size_t sz) : data(sz, -1) {}\n\n  bool unite(int x, int\
    \ y) {\n    x = find(x), y = find(y);\n    if(x == y) return false;\n    if(data[x]\
    \ > data[y]) swap(x, y);\n    data[x] += data[y];\n    data[y] = x;\n    return\
    \ true;\n  }\n\n  int find(int k) {\n    if(data[k] < 0) return (k);\n    return\
    \ data[k] = find(data[k]);\n  }\n\n  int size(int k) {\n    return -data[find(k)];\n\
    \  }\n\n  bool same(int x, int y) {\n    return find(x) == find(y);\n  }\n\n \
    \ vector< vector< int > > groups() {\n    int n = (int) data.size();\n    vector<\
    \ vector< int > > ret(n);\n    for(int i = 0; i < n; i++) {\n      ret[find(i)].emplace_back(i);\n\
    \    }\n    ret.erase(remove_if(begin(ret), end(ret), [&](const vector< int >\
    \ &v) {\n      return v.empty();\n    }), end(ret));\n    return ret;\n  }\n};\n\
    #line 5 \"test/aoj/DSL_1_A.test.cpp\"\n\nint main() {\n  int N, Q;\n  cin>>N>>Q;\n\
    \  UnionFind uf(N);\n  REP(loop,Q) {\n    int t, x, y;\n    cin>>t>>x>>y;\n  \
    \  if (t == 0)\n      uf.unite(x, y);\n    else\n      cout<<(uf.find(x) == uf.find(y))<<endl;\n\
    \  }\n}\n"
  code: "#define PROBLEM \"http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A\"\
    \n\n#include \"../../template/template.hpp\"\n#include \"../../data_structure/unionfind.hpp\"\
    \n\nint main() {\n  int N, Q;\n  cin>>N>>Q;\n  UnionFind uf(N);\n  REP(loop,Q)\
    \ {\n    int t, x, y;\n    cin>>t>>x>>y;\n    if (t == 0)\n      uf.unite(x, y);\n\
    \    else\n      cout<<(uf.find(x) == uf.find(y))<<endl;\n  }\n}"
  dependsOn:
  - template/template.hpp
  - data_structure/unionfind.hpp
  isVerificationFile: true
  path: test/aoj/DSL_1_A.test.cpp
  requiredBy: []
  timestamp: '2023-07-12 23:09:17+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DSL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_1_A.test.cpp
- /verify/test/aoj/DSL_1_A.test.cpp.html
title: test/aoj/DSL_1_A.test.cpp
---
