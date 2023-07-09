---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/dijkstra.hpp\"\n\ntemplate <typename T>\nvector<long\
    \ long> dijkstra(const vector<vector<array<long long, 2>>> &G, T x){\n    const\
    \ long long INF = 9e18 / 2;\n    vector<long long> cost((int) G.size(), INF);\n\
    \    using P = pair<long long, long long>;\n    priority_queue<P, vector<P>, greater<>>\
    \ q;\n    cost[x] = 0;\n    q.emplace(0, x);\n    \n    while(q.size()){\n   \
    \     auto [c, at] = q.top();\n        q.pop();\n        if(c > cost[at]) continue;\n\
    \        for(auto& [to, t] : G[at]){\n            if(cost[to] > c + t){\n    \
    \            cost[to] = c + t;\n                q.emplace(cost[to], to);\n   \
    \         }\n        }\n    }\n    return cost;\n}\n\npair<long long, vector<pair<int,\
    \ int>>> shortest_path(const vector<vector<array<long long, 2>>> &G, int s, int\
    \ t){\n    const long long INF = 9e18 / 2;\n    vector<long long> cost((int) G.size(),\
    \ INF);\n    vector<int> par((int) G.size(), -1);\n    using P = pair<long long,\
    \ long long>;\n    priority_queue<P, vector<P>, greater<>> q;\n    cost[s] = 0;\n\
    \    par[s] = -1;\n    q.emplace(0, s);\n\n    while(q.size()){\n        auto\
    \ [c, at] = q.top();\n        q.pop();\n        if(c > cost[at]) continue;\n \
    \       for(auto& [to, t] : G[at]){\n            if(cost[to] > c + t){\n     \
    \           par[to] = at;\n                cost[to] = c + t;\n               \
    \ q.emplace(cost[to], to);\n            }\n        }\n    }\n\n    if(cost[t]\
    \ == INF){\n        return {-1, {}};\n    }\n    vector<pair<int, int>> path;\n\
    \    int now = t;\n    while(par[now] != -1){\n        path.emplace_back(par[now],\
    \ now);\n        now = par[now];\n    }\n    reverse(path.begin(), path.end());\n\
    \n    return {cost[t], path};\n}\n"
  code: "#pragma once\n\ntemplate <typename T>\nvector<long long> dijkstra(const vector<vector<array<long\
    \ long, 2>>> &G, T x){\n    const long long INF = 9e18 / 2;\n    vector<long long>\
    \ cost((int) G.size(), INF);\n    using P = pair<long long, long long>;\n    priority_queue<P,\
    \ vector<P>, greater<>> q;\n    cost[x] = 0;\n    q.emplace(0, x);\n    \n   \
    \ while(q.size()){\n        auto [c, at] = q.top();\n        q.pop();\n      \
    \  if(c > cost[at]) continue;\n        for(auto& [to, t] : G[at]){\n         \
    \   if(cost[to] > c + t){\n                cost[to] = c + t;\n               \
    \ q.emplace(cost[to], to);\n            }\n        }\n    }\n    return cost;\n\
    }\n\npair<long long, vector<pair<int, int>>> shortest_path(const vector<vector<array<long\
    \ long, 2>>> &G, int s, int t){\n    const long long INF = 9e18 / 2;\n    vector<long\
    \ long> cost((int) G.size(), INF);\n    vector<int> par((int) G.size(), -1);\n\
    \    using P = pair<long long, long long>;\n    priority_queue<P, vector<P>, greater<>>\
    \ q;\n    cost[s] = 0;\n    par[s] = -1;\n    q.emplace(0, s);\n\n    while(q.size()){\n\
    \        auto [c, at] = q.top();\n        q.pop();\n        if(c > cost[at]) continue;\n\
    \        for(auto& [to, t] : G[at]){\n            if(cost[to] > c + t){\n    \
    \            par[to] = at;\n                cost[to] = c + t;\n              \
    \  q.emplace(cost[to], to);\n            }\n        }\n    }\n\n    if(cost[t]\
    \ == INF){\n        return {-1, {}};\n    }\n    vector<pair<int, int>> path;\n\
    \    int now = t;\n    while(par[now] != -1){\n        path.emplace_back(par[now],\
    \ now);\n        now = par[now];\n    }\n    reverse(path.begin(), path.end());\n\
    \n    return {cost[t], path};\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/dijkstra.hpp
  requiredBy: []
  timestamp: '2023-07-09 03:30:38+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/dijkstra.hpp
layout: document
title: "Dijkstra (\u30C0\u30A4\u30AF\u30B9\u30C8\u30E9\u6CD5)"
---
## Dijkstra's Algorithm (ダイクストラ法)

#### 概要

単一始点最短経路問題を解くことができるアルゴリズムです。  
やきとりくんを参考にしました。ありがとうございます。

#### 使い方

- `dijkstra(G, x)`: グラフ $G$ における $x$ を始点とするそれぞれの頂点への最短距離を求めます。
- `shortest_path(G, s, t)`: グラフ $G$ における $s$ から $t$ への最短パスを求めます。

#### 計算量

頂点数を $V$、辺の数を $E$ とすると、
- `dijkstra(G, x)`: $O((E + V) \log V)$
- `shortest_path(G, s, t)`: $O((E + V) \log V)$
