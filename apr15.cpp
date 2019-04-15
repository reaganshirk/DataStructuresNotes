/*
- Rest of Semester:
	- Graphs
		- Project 5 will be (posted today...?) over graphs
		- See Sridhar's notes for picture of a graph, looks like a tree where all nodes are connected
	- Priority Search Trees
	- Sorting
	- Hashing

- Graphs (also called networks)
	- A graph, by definition: G = (V, E) where V is a vertex set or a node set (same thing) and
	  E is the links or edges (same thing)
	- V = {V_0, V_1, ... , V_(n - 1)}
	- |V| = n (cardinality, not abs value)
	- E is a subset of V x V where V x V = {empty set, (V_0, V_1), (V_1, V_2), ...}
	- When you have (V_i, V_j), it means you have two points where you can draw an arc or directed line (line between them with an arrow, kinda like a vector)
		- If (V_i, V_j) == (V_j, V_i), then we say links have no direction, i.e the links are an edge
		- See Sridhar's notes for pictoral examples
	- Undirected Graph: Graph where none of the links have direction
	- Self loop: when the link goes from the node to itself
	- Multiple edges: When a graph has more than one edge between nodes (verticies)
	- Simple Graph:
		- A graph G = (V, E) is a simple graph if it does not contain self loops or multiple edges.
		- Weighted or Unweighted Graphs:
			- Weight corresponds to whatever you think it should...?
			- Edge weighted and node weighted
		- Path:
			- x_1, x_2, x_3, x_4, x_5 is a path if (x_i, x_i+1) belongs to E. 
			- Based on Sridhar's picture:
				- 0, 2, 3 is a path
				- 1, 4, 5, is a path
				- 0, 2, 2, 0, 2, 3 is not a path
				- 1, 5, 4, 1, 5 is a path
					- There must be an edge between the two adjacent verticies for it to be a path
					- A simple path is when no edge is repeated
	- A graph is connected if there exists a simple path between all pairs of verticies 
	- Directed Graph has a directed path
		- Directed path is a path made up of edges that have a direction
		- A directed graph is strongly connected if there is a directed path between all pairs of verticies
	- Cycle
		- A cycle is a path in which the first and last verticies are the same
		- See Sridhar's notes for a pictoral representation
		- A simple cycle is nothing but a simple path where the first and last verticies are the same
		- A directed cycle is a directed path where the first and last verticies are the same
		- ** Important **: A directed graph is a tree if it does not contain a cycle
	- Neighbors: verticies that are connected
	- Degree of Node: number of neighbors
	- Subgraph: 
		- Both vertex and edge induced subgraphs
		- The vertex induced subgraph of v' = {0, 1, 4}:
			- Take the edges from the origin graphand use them to connect the nodes you've taken
			- Very self explanitory
		- The edge incuded subgraph of v' = {(3, 4), (0, 2)}:
			- Connect the nodes at the given pairs, do not connect all 4
		- v' = v will give the whole graph
		- G = (V, E), T = (V, E'), E' is a subset of E
			- G is connected, T is a spanning tree of G if T is connected
			- Spanning tree is very important
	- Directed Acyclic Graph: a directed graph with no directed cycle
	- Topological Sort: Listing all the nodes in {} by their prerequisites 
	- Back to the tree:
		- |V| = n, |E| = n - 1, is this a tree?
			- If G is connected, then the answer is yes
		- Forrest of Trees: When each connected component is a tree
	- How to store a graph ** important for project ** (graph representation)
		- Adjacency matrix
			- Boolean matrix:
				- 0 down the diagonal from upper left to lower right if the graph is not connected
				- 1 if the row value is connected to the column value, 0 if they're not connected 
				- adj[i][j] == 1 if (i, j) belongs to E
				- Can store a graph in as many ways as you can store a matrix
				- ** Important question ** given an n node directed graph, what is the maximum number of edges possible?
					- n^2 - n
					- For undirected graph: (n^2 - n) / 2
				- Size: O(n^2)
		- Adjacency list
			- I'm pretty sure he just said he's okay with LL, vector, whatever we want to use.
			- In the list, put a LL of the index neightbors in that index
				- i.e, in the 0th index, there will be a LL containing 4 and 1
				- Array of LL
			- Size: O(n + m) where m is the number of edges, proportional to the input
				- Better than the boolean matrix depending on the size of m
				- Actually really sucks because each "box" is 64 bits
		- We will assume the graph for our project is undirected 
*/