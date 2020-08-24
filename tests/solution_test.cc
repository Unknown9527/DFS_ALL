#include "src/lib/solution.h"
#include "gtest/gtest.h"

#include <iostream>
using namespace std;

TEST(Test0, Test0) {
  map<int, set<int>> vertices{
      {0,{1,2,5}},
      {1,{0,2,3}},
      {2,{0,1,3}},
      {3,{1,2,4,6}},
      {4,{3}},
      {5,{0}},
      {6,{3}}
  };
  Graph solution(vertices);

  vector<int> result0;
  vector<int> expected = {0,2,3,1,4,6,5};
  result0 = solution.DFS_ALL();

  EXPECT_EQ(expected, result0);  
}

TEST(Test1, Test1) {
  map<int, set<int>> vertices{
      {0,{1,2,5}},
      {1,{0,2,3,7}},
      {2,{0,1,3}},
      {3,{1,2,4,6,7}},
      {4,{3}},
      {5,{0,7}},
      {6,{3}},
      {7,{1,3,5}}
  };
  Graph solution(vertices);

  vector<int> result0;
  vector<int> expected = {0, 5, 7, 3, 2, 1, 4, 6};
  result0 = solution.DFS_ALL();

  EXPECT_EQ(expected, result0);  
}

TEST(Test2, Test2) {
  map<int, set<int>> vertices{
      {0,{1,2,5,14}},
      {1,{0,2,3,7,14}},
      {2,{0,1,3,14}},
      {3,{1,2,4,6,7,14}},
      {4,{3,14}},
      {5,{0,7,14}},
      {6,{3,14}},
      {7,{1,3,5,14}},
      {14,{1,2,3,4,5,6,7}}
  };
  Graph solution(vertices);

  vector<int> result0;
  vector<int> expected = {0, 14, 7, 3, 2, 1, 4, 6, 5};
  result0 = solution.DFS_ALL();

  EXPECT_EQ(expected, result0);  
}





