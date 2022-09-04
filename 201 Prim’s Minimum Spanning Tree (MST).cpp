// // A C++ program for Prim's Minimum
// // Spanning Tree (MST) algorithm. The program is
// // for adjacency matrix representation of the graph
// #include <bits/stdc++.h>
// using namespace std;

// // Number of vertices in the graph
// #define V 5

// // A utility function to find the vertex with
// // minimum key value, from the set of vertices
// // not yet included in MST
// int minKey(int key[], bool mstSet[])
// {
// 	// Initialize min value
// 	int min = INT_MAX, min_index;

// 	for (int v = 0; v < V; v++)
// 		if (mstSet[v] == false && key[v] < min)
// 			min = key[v], min_index = v;

// 	return min_index;
// }

// // A utility function to print the
// // constructed MST stored in parent[]
// void printMST(int parent[], int graph[V][V])
// {
// 	cout << "Edge \tWeight\n";
// 	for (int i = 1; i < V; i++)
// 		cout << parent[i] << " - " << i << " \t"
// 			<< graph[i][parent[i]] << " \n";
// }

// // Function to construct and print MST for
// // a graph represented using adjacency
// // matrix representation
// void primMST(int graph[V][V])
// {
// 	// Array to store constructed MST
// 	int parent[V];

// 	// Key values used to pick minimum weight edge in cut
// 	int key[V];

// 	// To represent set of vertices included in MST
// 	bool mstSet[V];

// 	// Initialize all keys as INFINITE
// 	for (int i = 0; i < V; i++)
// 		key[i] = INT_MAX, mstSet[i] = false;

// 	// Always include first 1st vertex in MST.
// 	// Make key 0 so that this vertex is picked as first
// 	// vertex.
// 	key[0] = 0;
// 	parent[0] = -1; // First node is always root of MST

// 	// The MST will have V vertices
// 	for (int count = 0; count < V - 1; count++) {
// 		// Pick the minimum key vertex from the
// 		// set of vertices not yet included in MST
// 		int u = minKey(key, mstSet);

// 		// Add the picked vertex to the MST Set
// 		mstSet[u] = true;

// 		// Update key value and parent index of
// 		// the adjacent vertices of the picked vertex.
// 		// Consider only those vertices which are not
// 		// yet included in MST
// 		for (int v = 0; v < V; v++)

// 			// graph[u][v] is non zero only for adjacent
// 			// vertices of m mstSet[v] is false for vertices
// 			// not yet included in MST Update the key only
// 			// if graph[u][v] is smaller than key[v]
// 			if (graph[u][v] && mstSet[v] == false
// 				&& graph[u][v] < key[v])
// 				parent[v] = u, key[v] = graph[u][v];
// 	}

// 	// print the constructed MST
// 	printMST(parent, graph);
// }

// // Driver's code
// int main()
// {
// 	/* Let us create the following graph
// 		2 3
// 	(0)--(1)--(2)
// 	| / \ |
// 	6| 8/ \5 |7
// 	| / \ |
// 	(3)-------(4)
// 			9	 */
// 	int graph[V][V] = { { 0, 2, 0, 6, 0 },
// 						{ 2, 0, 3, 8, 5 },
// 						{ 0, 3, 0, 0, 7 },
// 						{ 6, 8, 0, 0, 9 },
// 						{ 0, 5, 7, 9, 0 } };

// 	// Print the solution
// 	primMST(graph);

// 	return 0;
// }

// // This code is contributed by rathbhupendra


C++
#include <bits/stdc++.h>
using namespace std;
class Graph{
 	vector<pair<int,int>> *l;
 	int V;
 
 	public:
 	Graph(int n){
       	V = n;
       	l = new vector<pair<int,int>> [n];
 	}
 	void addEdge(int x,int y,int w){
       	l[x].push_back({y,w});
       	l[y].push_back({x,w});
 	}
 	int prim_mst(){
       	//min heap
       	priority_queue<pair<int,int>, vector<pair<int,int> > ,greater<pair<int,int>>> Q;
 
       	//visited array that denotes if a node has been included in MST or not
       	bool *visited = new bool[V]{0};
       	int ans = 0;
 
       	//start from source node
       	Q.push({0,0});
 
       	while(!Q.empty()){
            	//pick the edge with min weight
 
            	auto best = Q.top();
            	Q.pop();
 
            	int to = best.second;
            	int weight = best.first;
 
            	if(visited[to]){
                  	continue;
            	}
            	ans += weight;
            	visited[to] = 1;
            	//add new edges
            	for(auto x:l[to]){
                  	if(visited[x.first] == 0){
                       	Q.push({x.second,x.first});
                  	}
            	}
       	}
       	return ans;
 	}
};
int main()
{
 	int n,m;
 	cin>>n>>m;
 	Graph g(n);
 	for(int i = 0;i<m;i++){
       	int x,y,w;
       	cin>>x>>y>>w;
       	g.addEdge(x-1,y-1,w);
 	}
 	cout<<g.prim_mst()<<"\n"; 
 	return 0;
}
