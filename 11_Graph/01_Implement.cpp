#include <iostream>
#include<unordered_map>

using namespace std;

//-------------- Implement graph help of adjaceny list

class Graph{
    public:

    unordered_map<int,list<int>> adj;

    //Function to add adjaceny node
    void addEdge(int u,int v,bool direction){
        //direction -> 0 : Undirected graph
        //direction -> 1 : Directed graph

        adj[u].push_back(v);

        if(direction ==0)
            adj[v].push_back(u);
    }

    //Function to print the graph
    void print(){

        for(auto it:mp){
            cout << it.first << "-->";
            
            for(auto j:it.second)
                cout << it.second << " ";
            cout <<endl;
        }
    }

};

int main(){

    Graph g;
    int m; //No of nodes
    int n; //No of edges

    cout << "Enter no of nodes ";
    cin >>m;
    cout <<endl;

    cout << "Enter no of edges ";
    cin >>n; 
    cout << endl;

    cout << "Enter the nodes "<<endl;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        g.addEdge(u,v,0); //Undirected graph
    }    

    return 0;
}   