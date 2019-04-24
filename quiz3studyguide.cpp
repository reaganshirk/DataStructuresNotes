/*
April 15:
	- A graph is undirected if the edges have no direction, i.e (V_i, V_j) = (V_j, V_i)
	- A path occurs when (x_i, x_i+1) belongs to E
	- A graph is connected if there is a path between each pair of verticies
	- A cycle is a path where the first and last verticies are the same
	- A directed graph is a tree if it does NOT contain a cycle
	- Degree of Node = number of neighbors
	- Vertex induced subgraph: take the edges from the origin graph and use them to connect the nodes you've taken
	- Edge induced subgraph: connect nodes at the given pairs, do not connect the pairs themselves together
	- V' = V will give the whole graph
	- G = (V, E), T = (V, E'). If G is connected and I is connected, T is a spanning tree of G
	- Spanning tree: a subset of graph G which has all verticies covered with minimum possible number of edges. Connected, no cycles.
	- |V| = n, |E| = n - 1, (cardinality, not abs value) is a tree if G is connected
	- Forrest of Trees: When each connected component is a tree
	- Given an n-node directed graph, the maximum number of edges is n^2 - n. For undirected: n^2 - n / 2. Size: O(n^2)
	- Adjacency list: size is O(n + m)
*/