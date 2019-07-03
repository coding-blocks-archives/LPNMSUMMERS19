// Dijkstras
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
#include <climits>
#include <set>
using namespace std;

template<typename T>
class Graph{
	unordered_map<T,list<pair<T,int> > > h;
public:
	void addEdge(T u,T v,int dist,bool bidir=true){
		h[u].push_back(make_pair(v,dist));
		if(bidir){
			h[v].push_back(make_pair(u,dist));			
		}
	}

	void Print(){
		for(auto node:h){
			cout<<node.first<<"-->";
			for(auto neighbours:node.second){
				cout<<"("<<neighbours.first<<","<<neighbours.second<<")";
			}
			cout<<endl;
		}
	}

	void Dijkstras(T src){

		map<T,int> dist;
		set<pair<int,T> > s;
		for(auto node:h){
			dist[node.first] = INT_MAX;
		}

		dist[src] = 0;
		s.insert(make_pair(0,src));
		while(!s.empty()){
			auto node = *(s.begin());
			T parent = node.second;
			int parentDist = node.first;

			s.erase(s.begin());

			for(auto children : h[parent]){
				if(parentDist+children.second<dist[children.first]){
					auto f = s.find(make_pair(dist[children.first],children.first));

					if(f!=s.end()){
						s.erase(f);
					}	
					dist[children.first] = parentDist+children.second;
					s.insert(make_pair(dist[children.first],children.first));

				}
			}	

		}

		for(auto node:dist){
			cout<<"Distance of "<<node.first<<" from "<<src<<" is "<<node.second<<endl;
		}
	}

};

int main(){
	Graph<string> g;

	g.addEdge("Amritsar","Agra",1); 
	g.addEdge("Amritsar","Jaipur",4);
	g.addEdge("Delhi","Jaipur",2); 
	g.addEdge("Delhi","Agra",1); 
	g.addEdge("Bhopal","Agra",2); 
	g.addEdge("Bhopal","Mumbai",3); 
	g.addEdge("Jaipur","Mumbai",8);

	g.Print();
	g.Dijkstras("Amritsar");


	return 0; 
}