#include <iostream>

#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <string>

using namespace std;

// STL (Standard Template Library) in C++:
// 1. Containers: Used to store collections of data.
//    - Sequence Containers: vector, list, deque, array, forward_list
//    - Associative Containers: set, multiset, map, multimap
//    - Unordered Containers: unordered_set, unordered_multiset, unordered_map, unordered_multimap
// 2. Iterators: Used to traverse elements in containers.
// 3. Algorithms: Functions for operations like searching, sorting, counting, etc.
// 4. Functors: Function objects that can be used with algorithms.

int main() {

    // Example usage of STL containers and algorithms

    // Vector: A sequence container that represents a dynamic array.
    // It can grow or shrink in size dynamically and provides random access to elements.
    
    // // Vector: Dynamic array
    // vector<int> vec = {1, 2, 3, 4, 5};
    // cout << "Vector: ";
    // for (int v : vec) cout << v << " ";
    // cout << endl;

    // // Functions of vector:
    // vec.push_back(6); // Add element to the end
    // cout << "After push_back(6): ";
    // for (int v : vec) cout << v << " ";
    // cout << endl;

    // vec.pop_back(); // Remove last element
    // cout << "After pop_back(): ";
    // for (int v : vec) cout << v << " ";
    // cout << endl;

    // vec.insert(vec.begin() + 2, 10); // Insert 10 at index 2
    // cout << "After insert(10 at index 2): ";
    // for (int v : vec) cout << v << " ";
    // cout << endl;

    // vec.erase(vec.begin() + 1); // Remove element at index 1
    // cout << "After erase(index 1): ";
    // for (int v : vec) cout << v << " ";
    // cout << endl;

    // cout << "Size of vector: " << vec.size() << endl; // Get size
    // cout << "Capacity of vector: " << vec.capacity() << endl; // Get capacity
    // cout << "Max size of vector: " << vec.max_size() << endl; // Get max size
    // cout << "Front element: " << vec.front() << endl; // Get first element
    // cout << "Back element: " << vec.back() << endl; // Get last element
    // cout << "At index 2: " << vec.at(2) << endl; // Access element at index
    // cout << "Empty: " << (vec.empty() ? "Yes" : "No") << endl; // Check if empty

    // vec.clear(); // Clear all elements
    // cout << "After clear(): " << (vec.empty() ? "Yes" : "No") << endl;




    // // Doubly Linked List: A linked list where each node has pointers to both the previous and next nodes.
    // list<int> doublyLinkedList = {10, 20, 30, 40};

    // // Functions of Doubly Linked List:
    // // 1. Push elements to the back
    // doublyLinkedList.push_back(50);
    // cout << "After push_back(50): ";
    // for (int val : doublyLinkedList) cout << val << " ";
    // cout << endl;

    // // 2. Push elements to the front
    // doublyLinkedList.push_front(5);
    // cout << "After push_front(5): ";
    // for (int val : doublyLinkedList) cout << val << " ";
    // cout << endl;

    // // 3. Pop elements from the back
    // doublyLinkedList.pop_back();
    // cout << "After pop_back(): ";
    // for (int val : doublyLinkedList) cout << val << " ";
    // cout << endl;

    // // 4. Pop elements from the front
    // doublyLinkedList.pop_front();
    // cout << "After pop_front(): ";
    // for (int val : doublyLinkedList) cout << val << " ";
    // cout << endl;

    // // 5. Insert elements at a specific position
    // auto it = doublyLinkedList.begin();
    // advance(it, 2); // Move iterator to the 3rd position
    // doublyLinkedList.insert(it, 25);
    // cout << "After insert(25 at position 3): ";
    // for (int val : doublyLinkedList) cout << val << " ";
    // cout << endl;

    // // 6. Erase elements at a specific position
    // it = doublyLinkedList.begin();
    // advance(it, 1); // Move iterator to the 2nd position
    // doublyLinkedList.erase(it);
    // cout << "After erase(position 2): ";
    // for (int val : doublyLinkedList) cout << val << " ";
    // cout << endl;

    // // 7. Get the size of the list
    // cout << "Size of doubly linked list: " << doublyLinkedList.size() << endl;

    // // 8. Check if the list is empty
    // cout << "Is the list empty? " << (doublyLinkedList.empty() ? "Yes" : "No") << endl;

    // // 9. Clear all elements in the list
    // doublyLinkedList.clear();
    // cout << "After clear(): " << (doublyLinkedList.empty() ? "Yes" : "No") << endl;






    // // Double-ended queue (Deque): A container that allows insertion and deletion at both ends.
    // // Functions of Deque:
    // deque<int> deq = {100, 200, 300};
    // deq.push_back(500);
    // cout << "After push_back(500): ";
    // for (int d : deq) cout << d << " ";
    // cout << endl;

    // // 2. push_front(): Adds an element to the front.
    // deq.push_front(25);
    // cout << "After push_front(25): ";
    // for (int d : deq) cout << d << " ";
    // cout << endl;

    // // 3. pop_back(): Removes the last element.
    // deq.pop_back();
    // cout << "After pop_back(): ";
    // for (int d : deq) cout << d << " ";
    // cout << endl;

    // // 4. pop_front(): Removes the first element.
    // deq.pop_front();
    // cout << "After pop_front(): ";
    // for (int d : deq) cout << d << " ";
    // cout << endl;

    // // 5. at(): Accesses an element at a specific position.
    // cout << "Element at index 1: " << deq.at(1) << endl;

    // // 6. size(): Returns the number of elements.
    // cout << "Size of deque: " << deq.size() << endl;

    // // 7. empty(): Checks if the deque is empty.
    // cout << "Is deque empty? " << (deq.empty() ? "Yes" : "No") << endl;

    // // 8. clear(): Removes all elements.
    // deq.clear();
    // cout << "After clear(): " << (deq.empty() ? "Yes" : "No") << endl;



    // // Map: Key-value pairs
    // // Map: An associative container that stores key-value pairs in sorted order of keys.
    // // Keys are unique, and each key maps to a single value.
    // map<string, int> mp = {{"Alice", 25}, {"Bob", 30}, {"Charlie", 35}};

    // // Functions of Map:
    // // 1. Insert elements
    // mp["David"] = 40; // Insert using key-value pair
    // mp.insert({"Eve", 45}); // Insert using pair
    // cout << "After inserting David and Eve: ";
    // for (auto m : mp) cout << m.first << ":" << m.second << " ";
    // cout << endl;

    // // 2. Access elements
    // cout << "Value associated with key 'Alice': " << mp["Alice"] << endl;

    // // 3. Erase elements
    // mp.erase("Bob"); // Remove element by key
    // cout << "After erasing Bob: ";
    // for (auto m : mp) cout << m.first << ":" << m.second << " ";
    // cout << endl;

    // // 4. Find elements
    // auto it = mp.find("Charlie");
    // if (it != mp.end()) {
    //     cout << "Found Charlie with value: " << it->second << endl;
    // } else {
    //     cout << "Charlie not found" << endl;
    // }

    // // 5. Check size
    // cout << "Size of map: " << mp.size() << endl;

    // // 6. Check if empty
    // cout << "Is map empty? " << (mp.empty() ? "Yes" : "No") << endl;

    // // 7. Clear all elements
    // mp.clear();
    // cout << "After clear(): " << (mp.empty() ? "Yes" : "No") << endl;




    // // Stack: A container adapter that provides LIFO (Last In, First Out) functionality.
    // // It allows adding and removing elements only from the top of the stack.
    // // Common operations:
    // // - push(): Adds an element to the top of the stack.
    // // - pop(): Removes the top element of the stack.
    // // - top(): Returns the top element of the stack without removing it.
    // // - size(): Returns the number of elements in the stack.
    // // - empty(): Checks if the stack is empty.
    // // Stack: LIFO (Last In, First Out)
    // // Functions of Stack:
    // // 1. push(): Adds an element to the top of the stack.
    // stack<int> stk;
    // stk.push(10);
    // stk.push(20);
    // stk.push(30);
    // cout << "Stack after push operations (top to bottom): ";
    // stack<int> tempStk = stk; // Temporary stack to display elements
    // while (!tempStk.empty()) {
    //     cout << tempStk.top() << " ";
    //     tempStk.pop();
    // }
    // cout << endl;

    // // 2. pop(): Removes the top element of the stack.
    // stk.pop();
    // cout << "Stack after pop operation (top to bottom): ";
    // tempStk = stk; // Refresh temporary stack
    // while (!tempStk.empty()) {
    //     cout << tempStk.top() << " ";
    //     tempStk.pop();
    // }
    // cout << endl;

    // // 3. top(): Returns the top element of the stack.
    // cout << "Top element of the stack: " << stk.top() << endl;

    // // 4. size(): Returns the number of elements in the stack.
    // cout << "Size of the stack: " << stk.size() << endl;

    // // 5. empty(): Checks if the stack is empty.
    // cout << "Is the stack empty? " << (stk.empty() ? "Yes" : "No") << endl;

    // // 6. Empty the stack
    // cout << "Emptying the stack: ";
    // while (!stk.empty()) {
    //     cout << stk.top() << " ";
    //     stk.pop();
    // }
    // cout << endl;

    // cout << "Is the stack empty? " << (stk.empty() ? "Yes" : "No") << endl;




    // // // Queue: A container adapter that provides FIFO (First In, First Out) functionality.
    // // It allows adding elements to the back and removing elements from the front.
    // // Functions of Queue:
    // queue<int> que;

    // // 1. push(): Adds an element to the back of the queue.
    // que.push(10);
    // que.push(20);
    // que.push(30);
    // cout << "Queue after push operations (front to back): ";
    // queue<int> tempQue = que; // Temporary queue to display elements
    // while (!tempQue.empty()) {
    //     cout << tempQue.front() << " ";
    //     tempQue.pop();
    // }
    // cout << endl;

    // // 2. pop(): Removes the front element of the queue.
    // que.pop();
    // cout << "Queue after pop operation (front to back): ";
    // tempQue = que; // Refresh temporary queue
    // while (!tempQue.empty()) {
    //     cout << tempQue.front() << " ";
    //     tempQue.pop();
    // }
    // cout << endl;

    // // 3. front(): Returns the front element of the queue.
    // cout << "Front element of the queue: " << que.front() << endl;

    // // 4. back(): Returns the back element of the queue.
    // cout << "Back element of the queue: " << que.back() << endl;

    // // 5. size(): Returns the number of elements in the queue.
    // cout << "Size of the queue: " << que.size() << endl;

    // // 6. empty(): Checks if the queue is empty.
    // cout << "Is the queue empty? " << (que.empty() ? "Yes" : "No") << endl;

    // // 7. Empty the queue
    // cout << "Emptying the queue: ";
    // while (!que.empty()) {
    //     cout << que.front() << " ";
    //     que.pop();
    // }
    // cout << endl;

    // cout << "Is the queue empty? " << (que.empty() ? "Yes" : "No") << endl;



    // // Priority Queue: A container adapter that provides a way to manage a collection of elements 
    // // such that the largest (or smallest) element is always at the top.
    // // By default, it is implemented as a max-heap.

    // // Functions of Priority Queue:
    // priority_queue<int> pq;

    // // 1. push(): Adds an element to the priority queue.
    // pq.push(50);
    // pq.push(20);
    // pq.push(30);
    // cout << "Priority Queue after push operations (max-heap): ";
    // priority_queue<int> tempPq = pq; // Temporary priority queue to display elements
    // while (!tempPq.empty()) {
    //     cout << tempPq.top() << " ";
    //     tempPq.pop();
    // }
    // cout << endl;

    // // 2. pop(): Removes the top (largest) element of the priority queue.
    // pq.pop();
    // cout << "Priority Queue after pop operation (max-heap): ";
    // tempPq = pq; // Refresh temporary priority queue
    // while (!tempPq.empty()) {
    //     cout << tempPq.top() << " ";
    //     tempPq.pop();
    // }
    // cout << endl;

    // // 3. top(): Returns the top (largest) element of the priority queue.
    // cout << "Top element of the priority queue: " << pq.top() << endl;

    // // 4. size(): Returns the number of elements in the priority queue.
    // cout << "Size of the priority queue: " << pq.size() << endl;

    // // 5. empty(): Checks if the priority queue is empty.
    // cout << "Is the priority queue empty? " << (pq.empty() ? "Yes" : "No") << endl;

    // // 6. Empty the priority queue
    // cout << "Emptying the priority queue: ";
    // while (!pq.empty()) {
    //     cout << pq.top() << " ";
    //     pq.pop();
    // }
    // cout << endl;

    // cout << "Is the priority queue empty? " << (pq.empty() ? "Yes" : "No") << endl;




    // Algorithms: Sort and Reverse

    // // 1. sort(): Sorts the elements in a range in ascending order.
    // //    - Parameters: 
    // //      - Start iterator (inclusive)
    // //      - End iterator (exclusive)
    // //    - Time Complexity: O(n log n)
    // vector<int> vec = {5, 2, 9, 1, 5, 6};
    // cerr << "Original Vector before sort: ";
    // for (int v : vec) cout << v << " ";
    // cerr << endl;
    // sort(vec.begin(), vec.end());
    // cout << "Sorted Vector: ";
    // for (int v : vec) cout << v << " ";
    // cout << endl;

    // // 2. reverse(): Reverses the order of elements in a range.
    // //    - Parameters:
    // //      - Start iterator (inclusive)
    // //      - End iterator (exclusive)
    // //    - Time Complexity: O(n)
    // vector<int> vec = {5, 2, 9, 1, 5, 6};
    // cerr << "Original Vector before reverse: ";
    // for (int v : vec) cout << v << " ";
    // cerr << endl;
    // reverse(vec.begin(), vec.end());
    // cout << "Reversed Vector: ";
    // for (int v : vec) cout << v << " ";
    // cout << endl;

    return 0;
}