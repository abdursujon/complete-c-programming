 Circular Buffer Implementation
                                                                                                                                                                                   
  Problem:                                                                                                                                                                       
  Design a fixed-size queue that overwrites the oldest data when full (or returns error - your choice). This is called a circular/ring buffer.

  Input:
  - init(5) → creates buffer of size 5
  - push(10) → adds 10 to buffer
  - pop() → removes and returns oldest element

  Example:
  init(3)
  push(1) → [1, _, _]      returns 0
  push(2) → [1, 2, _]      returns 0
  push(3) → [1, 2, 3]      returns 0
  push(4) → buffer full    returns -1
  pop()   → [_, 2, 3]      returns 1
  push(4) → [4, 2, 3]      returns 0  (wraps around)
  pop()   → [4, _, 3]      returns 2
  pop()   → [4, _, _]      returns 3
  pop()   → empty          returns -1

  Constraints:
  - O(1) time for push and pop
  - Handle empty/full edge cases
  - No memory leaks

  Function signatures:
  void init(CircularBuffer *cb, int size);
  int push(CircularBuffer *cb, int value);
  int pop(CircularBuffer *cb, int *value);
  int is_full(CircularBuffer *cb);
  int is_empty(CircularBuffer *cb);

  3. Log systems — Keep last N log entries in memory; oldest automatically overwritten when full