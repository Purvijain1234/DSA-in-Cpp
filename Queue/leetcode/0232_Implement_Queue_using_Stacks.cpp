/*
==================================================
Problem Number : 0232
Problem Name   : Implement Queue using Stacks
Difficulty     : Easy

Topics
- Stack
- Queue
- Design

Pattern
- Stack Simulation
- Data Structure Design

Approach
- Use two stacks:
  - `s1` for incoming elements.
  - `s2` for outgoing elements.
- `push(x)`:
  - Push the element into `s1`.
- `pop()`:
  - If `s2` is empty, move all elements from `s1` to `s2`.
  - Pop and return the top of `s2`.
- `peek()`:
  - If `s2` is empty, transfer all elements from `s1`.
  - Return the top of `s2`.
- `empty()`:
  - Return true if both stacks are empty.

Time Complexity
Push  : O(1)
Pop   : O(1) Amortized
Peek  : O(1) Amortized
Empty : O(1)

Space Complexity
O(n)

Learning
- A queue (FIFO) can be implemented using two stacks (LIFO).
- Elements are transferred only when `s2` becomes empty.
- Each element is moved at most once between stacks, giving amortized O(1) operations.
- Amortized analysis is commonly used in data structure design.

==================================================
*/

class MyQueue {
public:
    stack<int> s1, s2;

    MyQueue() {

    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int x = s2.top();
        s2.pop();
        return x;
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
