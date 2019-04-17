/*
- Adjacency matrix - bool, 8 bits. 8 * n^2 bits
	- Can make more efficient
	- Assume n = 64. 64 * 8 bits. Create 8 unsigned characters
	- Create 2 dimensional array of unsigned characters 
		- ^^ Not gonna make us do this thank god because I'm lost rn
- Adjacency list - 64 * n + 2 * m * (logn + 64) bits //assuming you're on a 64 bit machine
- Upper or Lower Triangular Matrix
	- Draw diagonal through the matrix, decide if you want to store the upper or lower half
		- Sridhar's class notes for pictures
	- Don't store the boxes that are on the diagonal, only those above/below it
	- Can store in an array or with unsigned characters and bits
- Project 5
	** allowed to use list in the stl to create an array of lists **

	class adjMatrix
	{
		protected:
			stuff
		public:
			constructor
			copy constructor
			destructor
			other public methods
	}
	class adjList
	{
		protected:	
			stuff
		public:
			constructor
			copy constructor
			destructor
			other public methods
	}

	int main()
	{
		cin >> numberOfVerticies
		adjMatrix* myM = new adjMatrix(numberOfVerticies);
		adjList* myL = new adjList(numberOfVerticies);

		while (!cin.eof())
		{
			cin >> x >> y;
			(*myM).addEdge(x, y);
			(*myL).addEdge(x, y);
		}
	}

	** for bonus **: have an abstract graph class, parent graph class. Inheretance. class called graphClass, then you can pass on the LL class and it knows how to store it.
					 pass on the array class and it knows how to store it. Also something about a timer...? Be able to find out how long it takes to add all the edges in the
					 structure. I.e, "took this long to do it with the adjacency list, took this long to do it with the adjacency matrix". Code will be provided to us by TAs. 
	- Depth First Search
		- See Sridhar's notes for pictures
		- Start at a given node, this time node 1 (containing value 1, not node #1). 
		- Check unvisited neighbors
			- Go to one of the neighbors, mark it visited. Go to one of its neighbors
			- repeat
			- Once you have a node with all visited neighbors, you go backwards and start checking the neighbors of that node
			- End up with a (really ugly) tree that will be stored in a parent array 
				- This tree is a spanning tree
	// main method
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false; // boolean array
	}

	for (int i = 0; i < n; ++i)
	{
		if (!visited[i])
		{
			dfs(i); // if you call this more than once then the graph is not connected. The number of lines you call dfs determines the number of connected components
					// detecting cycles. If you find a node that the neighbor has already been visited, that's a cycle
		}
	}

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

	- Breadth First Search
		- complexity is O(n + m) just like dfs
		- Start at a node, mark it visited
		- Make its neighbors its children
		- Go to one of the children, do the same
		- Go to the other child(ren), do the same
			- if the neighbor has already been visited, just skip it
		- The tree that is created is the shortest route from the root to any other node
		- Also called the single source shortest path tree

	// main
	for (int i = 0; i < n; ++i)
	{
		visited[i] = false;
	}
	bfs(1);

	int bfs(int x)
	{
		Q.enqueue(x);
		visited[x] = true;
		while (!Q.empty())
		{
			k = Q.dequeue();
			for (each unvisited neighbor y of k0
			{
				parent[y] = k;
				visited[y] = true;
				Q.enqueue(y);
			}
		}
	}

	Diameter of a graph: longest of the shortest path (I think that's what he said I'm confused)
*/