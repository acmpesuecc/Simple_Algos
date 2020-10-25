#include<iostream>
#include<vector>
#include<limits>
#include<bits/stdc++.h>

using pairType = std::pair<int, int>; 
using graphType = std::unordered_map<int, vector<pairType> >; 

int bellmanFord(const int & K, const int &N, std::vector<int> &delay, graphType & graph, const int &TIMEOUT )
{
    int d = -1;
    delay[K] = 0;
    for(int j = 0 ; j < N-1; j++){
        for(int i = 0 ; i < N; i++){
            const vector<pairType> vec_link = graph[i];
            for(const auto & it : vec_link){
                const int v = it.first;
                const int w = it.second;
                if(delay[i] + w < delay[v])
                    delay[v] = delay[i]+w;
            }
        }
    }
    for(const auto & it : delay){
        if( it > d ) d = it;
        if( it == TIMEOUT) return -1; 
    }
    return d;
}

int networkDelayTime(vector<vector<int>>& times, int N, int K) {
    const int TIMEOUT = 10000;
    std::vector<int> delay(N, TIMEOUT);
    graphType graph;
        
    for(int i=0; i < times.size(); i++){ 
        int u = times[i][0] -1;
        int v = times[i][1] -1;
        int w = times[i][2];
        graph[u].push_back(make_pair(v, w));
    }
        
    return bellmanFord(K-1, N, delay, graph, TIMEOUT); 
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

    cout << "The Delay is :\n"<<networkDelayTime(times, N, K)<<"\n";



    return 0;
}
