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
April 17:
	- Triangular matricies: Draw a line through the diagonal of a matrix. Can store either above the line or below the line. Do not store
	  the boxes that the line goes through. Can be stored in array or unsigned characters and bits.
	- Depth First Search: Pick a node, go to its neighbors, mark it visited, repeat. Once you get to a node with all visited neighbors,
	  work backwards. End up with a tree that will be stored in a parent array. Spanning tree.
	dfs (int x)
	{
		visited[x] = true;
		for (each neighbor y of x)
		{
			if (!visited[y])
			{
				parent[y] = x;
				dfs(y);
			}
		}
	}
	- Breadth First Search: Pick a node, make its neighbors its children. Go to one child and do the same, go to other child and do the same.
	  Skip any neighbor that has already been visited.
	 int bfs (int x)
	 {
		Q. enqueue(x);
		visited[x] = true;
		while (!Q.isEmpty())
		{
			k = Q.dequeue();
			for (each unvisited neighbor y of k)
			{
				parent[y] = k;
				visited[y] = true;
				Q.enqueue(y);
			}
		}
	}
*/