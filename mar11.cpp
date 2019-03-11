/*
Stack:
	- LIFO data structure: last in first out
Queue:
	- FIFO data structure: first in first out
	- Operations you can perform:
		- enQueue (equivalent of push for a Stack)
		- deQueue (equivalent of pop for a Stack)
		- size
		- peek
	- LinkedList implementation of a Queue
		- dequeue operation is the same as remove
			- remove()
		- enqueue operation is the same as insertAtSize
			- Expensive, it has to run through the entire Queue
			- insertAt(x, size())
		- peek
			- info()
	- Exceptions for a Queue
		- Queue underflow
		- Queue overflow
		- Queue memory

		template <class DT>
		class QueueLL :: virtual public LinkedList<DT>

	- Array Implementation of a Queue
		- front of queue = 0, rear of queue = 0
		- operation: enQueue(10) -> goes into index 0
			- front = 0, rear = 1
			- rear is pointing to next empty slot that a number goes in
		- operation: enQueue(5) -> goes to index 1. 
			- front = 0, rear = 2
		- operation: enQueue(11) -> goes to index 2.
			- front = 0, rear = 3
		- operation: enQueue(12) -> goes to index 3.
			- front = 0, rear = 4
		- operation: deQueue()
			- front = 1 (because the number at index 0 was removed)
		- operation: deQueue
			- front = 2
		- operation: deQueue
			- front = 3
		- operation: deQueue
			- front = 4
		- operation: enqueue(100)
			- front = 4, rear = 5
			- PROBLEM: no space. Just has to wrap around, do a mod (?). Look at Queue as a circular array
			- When can we say that a Queue is full?
				- You can tell if the Queue is full or not by looking at the rear ** we will be asked about this on the quiz or exam **
				- Implementation is in the textbook, 3 line programs
				- front = (front + 1) mod n
				- rear = (rear + 1) mod n
					- n is the number of elements in the Queue
					- what we use to make the Queue circular
Simple Bucket Sort
	- non-comparison based sorting algorithm
	- we know the largest number
	- Problems:
		- negative numbers
		- duplicate values
		- largest number is too big compared with the number of numbers to be sorted
			- e.g 5, 9, 774
	- Time complexity: O(n + M) where M is the largest number and n is the number of numbers (big oof)
	- Space complexity: O(n + M) (also big oof)
	- Fastest algorithm: O(nln(n)) with a space complexity of O(n)
Radix Sort
	- non-comparison based sorting algorithm
	- knows the largest number
	- uses the Queue data structure (very nicely, apparently)
		- ** favorite exam/quiz question **
	- Numbers to be sorted:
		- L = 98, 3, 18, 4, 191, 162, 2, 2005, 11
		- Round 1 of this algorithm:
			- create an array (x) with indicies 0-9 -> array of Queues
			- Queue<int> x[10];
			- to get first digit of 98, do a mod 10. You will get 8, put 98 in the 8th index
				- x[8].enQueue(98); -> last digit determines which index the number goes into
					- you will have two numbers occupying one index
			- n units of time to enQueue, 10 units of time to initialize
			- empty the Queue: 191, 11, 162, 2, 3, 4, 2005, 98, 18
				- sorted by last digit, took max(10, n) units of time to deQueue
		- Round 2 of this algorithm
			- new array with indicies 0-9
			- now look at rightmost digit of number + 1
			- 191 goes in 9th index because rightmost digit of number + 1 = 9
			- now the list is: 2, 3, 4, 2005, 11, 18, 98, 162, 191
		- Do this one more time, 2005 will be on the end
	- Complexity:
		- Each time: max(10, n)
			- Done L times = L * max(10, n)
		- O(n * L)
			- Better than the simple bucket sort when M is very large
	- One problem:
		- If you use array implementation of a Queue, the total space you allocate is 10 * n
	
*/