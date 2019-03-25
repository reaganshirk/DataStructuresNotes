/*
 Opportunity for bonus points in projects 4 and 5

 Binary Trees
	- pre-order traversal
		- visit root
			- print
		- process left tree in pre-orderorder
			- almost recursively calling, prints the next root underneath and to the left of the previous root
		- process right tree in pre-order
	- in order traversal
		- process left tree in order
			- starts with highest level root (closest to bottom) and goes in reverse order
		- visit root
		- process right tree in order
	- post order traversal
		- process left tree in post order
		- process right tree in post order
		- visit root

 template <class DT>
 void BinaryTree<DT>::preOrder()
 {
	if (!(info == NULL))
	{
		cout << *info << ", ";
		(*left).preOrder();
		(*right).preOrder();
	}
 }

 template <class DT>
 void BinaryTree<DT>::inOrder()
 {
	if (!(info == NULL))
	{
		(*left).inOrder();
		cout << *info << ", ";
		(*right).inOrder();
	}
 }

 For the post order method, just move the cout statement to after the function calls. Should be able to do this for quiz/exam
 Exam question: write non-recursive pre-order function
	- create a stack, push the top level node inside it
	- go through a while loop; while the stack is not empty, pop and print the first item
	- push the right node to the stack, then the left node
	- go back to while loop, pop print the top of the stack
	- push right then left node
	- pop and print top of stack
	- continue process
 Algorithm:
 nonRecursivePreOrder(root)
 {
	create stack S
	S.push(root)
	while (!S.empty())
	{
		x = S.pop();
		cout << x < ", ";
		if (x.right != NULL)
		{
			S.push(x.right)
		}
		if (x.left != NULL)
		{
			S.push(x.left)
		}
	}
 }
 Sridhar has requested that we look at his enumerator pre order algorithm in the book 

 Non recursive in order using stack algorithm:
 ** will be a quiz/test question **

 create stack S
 S.push(root)
 x = root
 while (x != NULL)
 {
	if (x.left != NULL)
	{
		s.push(x.left)
		x = x.left
	}
 }

 while (!(S.empty()))
 {
	x = S.pop()
	cout << x
	if (!(x.right == NULL))
	{
		S.pushToBottomLeft(x.right) // where pushToBottomLeft is the while loop written directly above
	}
 }

 Pre order: 3, 9, 4, 6, 12, 13, 11, 10
 In order: 6, 4, 9, 13, 12, 3, 10, 11
 Given pre order and in order, you can construct a unique tree
	- node is 3, first in list of pre order
	- next in list of pre order is 9. In list of in order, 9 is to the left of 3. 9 is the first node to the left of 3
	- next in list of pre order is 4. In list of in order, 4 is to the left of 3 and 9. 4 is the first node to the left of 9.
	- system continues

 ** PROJECT 4 **
- We will construct a tree data structure. Rooted tree
- Trees aren't always binary, may be arbitrary rooted tree.
- Given a node number that is sequential in nature
- Non templated class called Tree.
- Create an array in protected field called a parent array. Array of int. Size is defined when you create the object tree
	- Tree(11) creates an array of ints of size 11
	- The array does not hold each value stored in the tree. 
	- The index of the array is the value, the value stored in that index is the parent to which the index value belongs.
	- Check Sridhar's class notes for more clarity
- For finding the children of a number, search the parent array. return the index position of any index holding the value 0
- Finding the level of a node, use a while loop. He talked really fast and I missed the algorithm. 
- Finding the height of the tree, find the maximum level
- Get all of the nodes at level x, go through each node and if it satisfies that condition print it
- Least common ancestor
	- Climb up, the first point that you meet is the least common ancestor
*/