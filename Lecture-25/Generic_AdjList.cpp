// Generic_AdjList
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
#include <queue>
#include <climits>
using namespace std;

template<typename T>
class Graph{
	unordered_map<T,list<T> > adjList;

	void DFSHelper(T src,map<T,bool> &visited){
		visited[src] = true;
		cout<<src<<" ";
		for(auto node:adjList[src]){
			if(!visited[node]){
				DFSHelper(node,visited);
			}
		}
	}	
public:
	void addEdge(T u,T v,bool bidir=true){
		adjList[u].push_back(v);
		if(bidir){
			adjList[v].push_back(u);			
		}
	}

	void Print(){
		for(auto node:adjList){
			cout<<node.first<<"-->";
			for(auto neighbours:node.second){
				cout<<neighbours<<", ";
			}	
			cout<<endl;
		}
	}

	void BFS(T src){
		unordered_map<T,bool> visited;
		queue<T> q;
		q.push(src);
		visited[src] = true;
		while(!q.empty()){
			T node = q.front();
			cout<<node<<" ";
			q.pop();
			for(auto neighbours:adjList[node]){
				if(!visited[neighbours]){
					visited[neighbours] = true;
					q.push(neighbours);
				}
			}
		}
	}

	int SSSP(T src,T des){
		unordered_map<T,int> dist;
		unordered_map<T,T> parent_map;
		queue<T> q;
		for(auto node:adjList){
			dist[node.first] = INT_MAX;
		}
		q.push(src);
		dist[src] = 0;
		parent_map[src] = src;

		while(!q.empty()){
			T parent = q.front();
			q.pop();
			int parentDist = dist[parent];
			for(auto children : adjList[parent]){
				if(dist[children] == INT_MAX){
					dist[children] = parentDist + 1;
					q.push(children);
					parent_map[children] = parent;
				}
			}
		}

		for(auto i:dist){
			cout<<"Distance of "<<i.first<<" from "<<src<<" is "<<i.second<<endl;
		}

		T temp = des;
		while(temp!=src){
			cout<<temp<<"<--";
			temp = parent_map[temp];
		}
		cout<<src<<endl;

		return dist[des];
	}

	void DFS(T src){
		map<T,bool> visited;
		int component = 1;
		DFSHelper(src,visited);

		for(auto node:adjList){
			if(!visited[node.first]){
				DFSHelper(node.first,visited);
				component ++;
			}
		}
		cout<<endl<<"Total components "<<component<<endl;

		cout<<endl;
	}
};


int main(){
	Graph<int> g;

	// g.addEdge("Putin","Trump",false);
	// g.addEdge("Putin","Modi",false);
	// g.addEdge("Trump","Modi",true);
	// g.addEdge("Yogi","Modi",true);
	// g.addEdge("Yogi","Prabhu",false);
	// g.addEdge("Prabhu","Modi",false);
	// g.addEdge("Putin","Pope",false);
	g.addEdge(0,1);
	g.addEdge(2,1);
	g.addEdge(2,4);
	g.addEdge(2,3);
	g.addEdge(0,4);
	g.addEdge(3,4);
	g.addEdge(3,5);
	g.addEdge(30,15);
	g.addEdge(13,15);
	g.addEdge(33,13);
	g.addEdge(330,130);
	g.addEdge(331,131);

	// g.Print();
	// g.BFS(0);
	// cout<<g.SSSP(0,5)<<endl;
	g.DFS(0);

	return 0; 
}