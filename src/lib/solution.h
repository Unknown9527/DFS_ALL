#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H
#include <vector>
#include <map>
#include <set>

using namespace std;

class Graph{
public:
  Graph(map<int, set<int>> &vertices):v_(vertices){}
  map<int, set<int>> v_;
  vector<int> DFS(int root, map<int, set<int>> v);

  map<int, int> view_;
  vector<int> result;

  // void DFS_ALL();
  vector<int> DFS_ALL();
};

#endif