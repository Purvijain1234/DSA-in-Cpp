/*
==================================================
Problem Number : 0155
Problem Name   : Min Stack
Difficulty     : Medium

Topics
- Stack
- Design

Pattern
- Auxiliary Stack
- Data Structure Design

Approach
- Maintain two stacks:
  - `st` stores all elements.
  - `minst` stores the minimum elements.
- For `push(value)`:
  - Push the value into `st`.
  - If `minst` is empty or the value is smaller than or equal to the current minimum,
    push it into `minst`.
- For `pop()`:
  - If the top of `st` equals the top of `minst`,
    remove it from both stacks.
  - Pop from `st`.
- `top()` returns the top element of `st`.
- `getMin()` returns the top element of `minst`, which is the current minimum.

Time Complexity
Push   : O(1)
Pop    : O(1)
Top    : O(1)
GetMin : O(1)

Space Complexity
O(n)

Learning
- An auxiliary stack efficiently tracks the minimum element.
- Store duplicate minimum values to handle repeated elements correctly.
- All operations achieve constant time complexity.
- Design problems often require maintaining additional data structures.

==================================================
*/

class MinStack {
public:
    stack<int> st;
    stack<int> minst;

    MinStack() {

    }

    void push(int value) {
        st.push(value);

        if (minst.empty() || value <= minst.top()) {
            minst.push(value);
        }
    }

    void pop() {
        if (st.top() == minst.top()) {
            minst.pop();
        }

        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minst.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
