#include "src/lib/solution.h"
#include <iostream>

#define N 5

using namespace std;

void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

int main()
{
    map<int, set<int>> vert{
        {0,{1}},
        {1,{2,3}},
        {2,{0}},
        {3,{2,4,6}},
        {4,{NULL}},
        {5,{6}},
        {6,{NULL}}

        // {0,{1,2,5}},
        // {1,{0,3}},
        // {2,{0,4}},
        // {3,{1,6}},
        // {4,{2}},
        // {5,{0}},
        // {6,{3}}
    };
    Graph solution(vert);
    // vector<int> result0 = solution.DFS_ALL();
    // PrintVector(solution.result);
    solution.DFS_ALL();
    // for(auto i : solution.result){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    PrintVector(solution.result);
    return EXIT_SUCCESS;
}
