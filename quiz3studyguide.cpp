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
April 22nd
				min heap	max heap	min-max heap	deap
	insert		log(n)		log(n)		log(n)			log(n)
	find min	1			x			1				1
	find max	x			1			1				1
	delete min	log(n)		x			log(n)			log(n)
	delete max	x			log(n)		log(n)			log(n)	

	- min heap:
		- Structural properties:
			- complete binary tree
			- max height of log(n)
		- Ordering properties:
			- Value at node is smaller than all values in its subtree
			- Minimum will always be first value in array
		- Insert:
			- Assume there is room in the array
			- Stick number in the last element of the array
			- Compare with parent (i - 1 / 2)
			- If parent is larger, swap
			- Continue until parent is smaller
			- Not sure if this pseudocode is right but it's what I'd guess based off of the above info

			void insert(int x)
			{
				array[size - 1] = x;
				while (x.parent > x)
				{
					swap(x.parent, x);
				}
			}

		- Delete:
			- Move last array element to root
			- Compare to both of its children (2i + 1, 2i + 2)
			- Swap with smallest child
			- Not sure if this pseudocode is right but it's what I'd guess based off of the above info

			void delete()
			{
				int x = array[size - 1];
				setRoot(x);
				while (x.getChild < x) // while loop instead of if statement in case x has several children to check
				{
					swap(x.getChild, x);
				}
			}

		- Sorting with min heap
			- heapsort
			- Inserting element = n, building heap = log(n), total = nlog(n)
			- n number of deleteMins will give you a sorted list
		- Huffman compression:
			- Build tree off of the 2 least used symbols. 
			- Use the tree to get the binary (ASCII? Idk) for each symbol
			- Create binary (ASCII?) string
			- Look at Sridhar's notes for this it confused me and his are more helpful
*/