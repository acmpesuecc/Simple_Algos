#include<iostream>
#include<vector>
#include<limits>
#include<bits/stdc++.h>

// Implementation Using DFS
using namespace std;

vector<vector<pair<int, int>>>Edges;
vector<int>visits;

void dfs(int i, int sum_val)
    
    {
        if(sum_val < visits[i]) 
            visits[i] = sum_val;
        else 
            return;
        
        for(pair<int, int> pair : Edges[i])
            dfs(pair.first, sum_val + pair.second);
    }

int Find_Network_Delay(vector<vector<int>>& times, int N, int K)

{
    Edges.resize(N);
    visits.resize(N, INT_MAX);
        
        for(vector<int> v : times) 
            Edges[v[0]-1].push_back(make_pair(v[1]-1, v[2]));
        
        dfs(K-1, 0);
        
        int out = 0;
        for(int i : visits)
        {
            if(i == INT_MAX) 
                return -1;
            out = (i > out) ? i : out;
        }
        return out;


}


int main()
{


    int N, E, K;


    cout<<"Enter the number of Nodes in Network\n";
    cin >> N;
    cout<<"Enter number of Edges in Network\n";
    cin>>E;
    cout<<"Enter the starting Node ranging from 1 to N\n";
    cin>>K;
    vector<vector<int>> times;

    cout<<"Enter source node , destination node and time taken to go from source to destination\n";
    for (int i = 0; i < E; ++i) 
    {
        int u, v, w;
        cin >> u >> v >> w;
        times.push_back(vector<int>({u,v,w}));
    }

    cout << "The Delay is :\n"<<Find_Network_Delay(times, N, K)<<"\n";



    return 0;
}
