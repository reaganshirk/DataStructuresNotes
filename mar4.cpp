/*
stacks
	- array implementation
	- linkedList implementation
		- pop, push
method calls
	- activation record on the stack
	- moving on the maze
arithmetic expression
	 - x * 2 + y - 3 - 4 * y + z / 100
	 - infix expression 
		- operator is in between the operands
	- A = (x * 2) + y - 3 - (4 * y) + (z / 100)
		- above is the correct interpretation of the arithmetic expression
arithmetic operation
	- take the infix expression convert to postfix expression
	- evaluate the postfix expression
postfix expression
	- x y *
		- x * y
	- x y * 2 +
		- x * y + 2
	- a b - 2 ^ 
		- (a - b)^2
	- a b - 2 ^ c d - 2 ^ + 0.5 ^
		- sqrt((a - b)^2 + (c - d)^2)
postfix expression evaluation
	s <-- stack
	while (there are more tokens
		A = getNextToken;
		if (A is an operator)
			a1 = s.pop
			a2 = s.pop
			perform a1 A a2
			the result x
			s.push(x)
		else
			s.push(A)
	cout << s.pop
infix to postfix
	- look at infix to postfix conversion in textbook
something about exam questions
	- write an algorithm for postfix expression evaluation
	- write an algorithm for infix to postfix conversion
	- convert infix to postfix by hand (or vice versa)
	- ** queues will not be on the exam **
	- look at everything we've gone over so far
	- questions will be asked in reverse chronological order
	- stacks: running through maze, activation
	- c++ class definition of a stack
		- different for linkedlist and array
	- exceptions of a stack
	- c++ class definition for a linkedlist
		- add, remove, size, insertAt, removeAt, destructor, square bracket operator
		- probably won't be asked for all but will be asked for 1 or 2
		- array implementation of a linkedlist ** WILL BE A QUESTION ON THE EXAM **
			- I took a picture and will add what I can to the notes later
	- idea is to type the program and run. He knows it won't work but that's what we should aim for
	- Generalized linkedlist: only need the class definition
	- arrays
		- I missed everything he just said about arrays because he talked about skip lists but said we won't have to know them
		- matricies
			- row major, column major
			- sparse matricies
			- class definition of matricies using arrays
			- c++ for a SparseMatrix implementation 
	- best way to study: look through quiz
	- confused? write down formal definition of Big O and hope for some bonus points
	- recursive and non-recursive binary search (probably both in the textbook, also check GeeksforGeeks)
	- array class: how to initialize an object
		- for loops and shit
		- number of primitive operations (I asked this quiz question on Chegg, really in depth answer)
	- big o and big theta
	- how many times a constructor is called
	- debugging/fixing errors in code
	- write legibly, name and ID number, don't write too lightly

number of primitive operations
	for (int i = 0; i < n; ++i) --> 3n + 2 (always this for a for loop)
		x = x + 1; --> 2n

	total: 5n + 2

	for (int i = 0; i < n; ++i) --> 3n + 2
		for (int j = 0; j < n; ++j) --> n * (3n + 2)
			x = x + 1 --> 2n * n
	total: 3n + 2 + (n * (3n + 2)) + (2n * n)

	x = n; --> 1
	while ( x > 0) --> log(n) + 1
		x = x / 2 --> 2*log(n)
*/