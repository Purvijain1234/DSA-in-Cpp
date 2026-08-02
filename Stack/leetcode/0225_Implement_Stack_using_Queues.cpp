/*
==================================================
Problem Number : 0225
Problem Name   : Implement Stack using Queues
Difficulty     : Easy

Topics
- Stack
- Queue
- Design

Pattern
- Queue Simulation
- Data Structure Design

Approach
- Use two queues:
  - `q1` stores the current stack.
  - `q2` is used temporarily during push.
- For every push:
  - Insert the new element into `q2`.
  - Move all elements from `q1` to `q2`.
  - Swap `q1` and `q2`.
- Since the newest element is always at the front of `q1`:
  - `pop()` removes the front element.
  - `top()` returns the front element.
- `empty()` checks whether `q1` is empty.

Time Complexity
Push  : O(n)
Pop   : O(1)
Top   : O(1)
Empty : O(1)

Space Complexity
O(n)

Learning
- A stack (LIFO) can be implemented using FIFO queues.
- Rotating elements during `push()` keeps the newest element at the front.
- This approach optimizes `pop()` and `top()` operations.
- Design problems often involve trading the complexity of one operation for another.

==================================================
*/

class MyStack {
public:
    queue<int> q1, q2;

    MyStack() {

    }

    void push(int x) {
        q2.push(x);

        while (!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }

        swap(q1, q2);
    }

    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }

    int top() {
        return q1.front();
    }

    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
