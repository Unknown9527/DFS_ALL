#include "solution.h"
#include <iostream>
#include <stack>

using namespace std;

vector<int> Graph::DFS(int root, map<int, set<int>> vv)
{

    map<int, set<int>>::iterator Ith;
    map<int, set<int>>::iterator temp;
    map<int, int>::iterator tem;
    map<int, int> view_;

    for(Ith = vv.begin(); Ith != vv.end(); ++Ith)
    {
        view_.insert(pair<int,int>(Ith->first,0));
    }

    set<int>::reverse_iterator sth;
    vector<int> output0;
    stack<int> sta;

    sta.push(root);
    tem = view_.find(root);
    tem->second = 1;

    while(!sta.empty())
    {
        int x = sta.top();
        temp = vv.find(x);
        int size = temp->second.size();
        // temp = vv.find(x);
        int count = 0;
        // temp = vv.find(x);

        for(sth = temp->second.rbegin();sth!=temp->second.rend();sth++)
        {
            int val = *sth;

            tem = view_.find(val);

            if(tem->second == 0)
            {
                tem->second = 1;
                sta.push(val);

                break;
            } else if(tem->second == 1)
            {
                count++;

                if(count==size)
                {
                    output0.push_back(sta.top());
                    sta.pop();
                }
            }
        }    
    }

    reverse(output0.begin(),output0.end());

    return output0;
}

vector<int> Graph::DFS_ALL()
{
    
    result = DFS(v_.begin()->first, v_);

    map<int, int>::iterator Ith;

    for(Ith = view_.begin(); Ith != view_.end(); ++Ith)
    {
        if(Ith->second == 0)
        {
            vector<int> temp = DFS(Ith->first, v_);
            result.insert(result.end(),temp.begin(),temp.end());
        }
    } 

    return result;
        
}