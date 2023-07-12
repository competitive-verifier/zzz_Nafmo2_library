---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/DSL_1_A.test.cpp
    title: test/aoj/DSL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 2 "template/template.hpp"

    // clang-format off

    #include <bits/stdc++.h>

    // #include <atcoder/all>

    // #include <boost/multiprecision/cpp_int.hpp>

    // #include <boost/multiprecision/integer.hpp>

    typedef long long int ll;

    #define FOR(i,a,b) for(ll i=(a);i<(b);i++)

    #define REP(i,n) for(ll i=0;i<signed(n);i++)

    #define EREP(i,n) for(ll i=1;i<=signed(n);i++)

    #define ALL(x) std::begin(x), std::end(x)

    using namespace std;

    // using namespace atcoder;

    // using boost::multiprecision::cpp_int;

    // namespace mp = boost::multiprecision;

    //#define EVEL 1

    #ifdef EVEL

    #define DEB(X) cout << #X <<":" <<X<<" " ;

    #define TF(f) f ? cout<<"true  " : cout<<"false ";

    #define END cout<<"\n";

    #else

    #define DEB(X) {}

    #define TF(f) {}

    #define END {}

    #endif

    const ll INF = 9e18;

    typedef std::pair<ll, ll> P;

    struct edge { ll to, cost; };

    #define VMAX 100000

    template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true;
    } return false; }

    template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true;
    } return false; }

    template <class T> T vgcd(T m, T n) {return std::gcd(m, n);}

    template <class T, class... Args> T vgcd(T a, Args... args) {return vgcd(a, vgcd(args...));}

    const long long MOD = 998244353;

    // using mint = static_modint<998244353>;

    // clang-format on

    ll ans = 0;

    bool F = false;

    '
  code: '#pragma once

    // clang-format off

    #include <bits/stdc++.h>

    // #include <atcoder/all>

    // #include <boost/multiprecision/cpp_int.hpp>

    // #include <boost/multiprecision/integer.hpp>

    typedef long long int ll;

    #define FOR(i,a,b) for(ll i=(a);i<(b);i++)

    #define REP(i,n) for(ll i=0;i<signed(n);i++)

    #define EREP(i,n) for(ll i=1;i<=signed(n);i++)

    #define ALL(x) std::begin(x), std::end(x)

    using namespace std;

    // using namespace atcoder;

    // using boost::multiprecision::cpp_int;

    // namespace mp = boost::multiprecision;

    //#define EVEL 1

    #ifdef EVEL

    #define DEB(X) cout << #X <<":" <<X<<" " ;

    #define TF(f) f ? cout<<"true  " : cout<<"false ";

    #define END cout<<"\n";

    #else

    #define DEB(X) {}

    #define TF(f) {}

    #define END {}

    #endif

    const ll INF = 9e18;

    typedef std::pair<ll, ll> P;

    struct edge { ll to, cost; };

    #define VMAX 100000

    template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true;
    } return false; }

    template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true;
    } return false; }

    template <class T> T vgcd(T m, T n) {return std::gcd(m, n);}

    template <class T, class... Args> T vgcd(T a, Args... args) {return vgcd(a, vgcd(args...));}

    const long long MOD = 998244353;

    // using mint = static_modint<998244353>;

    // clang-format on

    ll ans = 0;

    bool F = false;'
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2023-07-12 23:09:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/DSL_1_A.test.cpp
documentation_of: template/template.hpp
layout: document
redirect_from:
- /library/template/template.hpp
- /library/template/template.hpp.html
title: template/template.hpp
---
