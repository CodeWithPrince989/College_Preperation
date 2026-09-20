Absolutely. These topics form the **Stacks and Queues unit**, and for a semester exam you should prepare them in a way that lets you write **definition + representation + operations/algorithm + example + complexity + applications**.

# UNIT: STACKS AND QUEUES

---

# PART A — STACK

## 1. What is a Stack?

A **stack** is a linear data structure in which insertion and deletion are performed from **one end only**, called the **TOP**.

A stack follows:

> **LIFO — Last In, First Out**

The element inserted last is removed first.

### Example

Think of a stack of plates:

```text
       TOP
        ↓
      +----+
      | 30 | ← Last inserted
      +----+
      | 20 |
      +----+
      | 10 |
      +----+
```

If we remove an element, `30` will be removed first.

### Basic operations

1. **Push** – insert an element.
2. **Pop** – remove an element.
3. **Peek/Peep** – view the top element without removing it.

---

# 2. Representation of Stack

A stack can be represented using:

### 1. Array

### 2. Linked List

---

## A. Stack Using Array

Suppose the maximum size is 5.

```text
Index
  4
+----+
|    |
+----+
  3
+----+
| 30 |
+----+
  2
+----+
| 20 |
+----+
  1
+----+
| 10 |
+----+
  0
+----+

TOP = 3
```

Usually, initially:

```text
TOP = -1
```

which means the stack is empty.

---

# 3. PUSH Operation

**Push** means inserting an element at the top of the stack.

Suppose:

```text
10 → 20 → 30
```

and we push `40`.

Before:

```text
TOP
 ↓
30
20
10
```

After:

```text
TOP
 ↓
40
30
20
10
```

### Algorithm

```text
PUSH(STACK, ITEM)

1. If TOP == MAX - 1
       Print "Stack Overflow"
       Stop

2. TOP = TOP + 1

3. STACK[TOP] = ITEM

4. Stop
```

### C++ logic

```cpp
if (top == MAX - 1)
    cout << "Stack Overflow";
else {
    top++;
    stack[top] = item;
}
```

### Complexity

**O(1)**

---

# 4. POP Operation

**Pop** means removing the top element from the stack.

Before:

```text
TOP
 ↓
30
20
10
```

After POP:

```text
TOP
 ↓
20
10
```

`30` is removed.

### Algorithm

```text
POP(STACK)

1. If TOP == -1
       Print "Stack Underflow"
       Stop

2. ITEM = STACK[TOP]

3. TOP = TOP - 1

4. Return ITEM
```

### Complexity

**O(1)**

---

# 5. PEEP / PEEK Operation

Your syllabus uses **Peep**. It is also commonly called **Peek**.

It means viewing the top element **without removing it**.

Suppose:

```text
TOP
 ↓
40
30
20
10
```

Peep gives:

```text
40
```

but the stack remains unchanged.

### Algorithm

```text
PEEP(STACK)

1. If TOP == -1
       Print "Stack Underflow"

2. Else
       Return STACK[TOP]
```

### Complexity

**O(1)**

---

# 6. Stack Overflow and Underflow

### Stack Overflow

Occurs when we try to push an element into a full stack.

```text
TOP = MAX - 1
```

### Stack Underflow

Occurs when we try to pop/peep from an empty stack.

```text
TOP = -1
```

These terms are **very important for exams**.

---

# 7. Stack Using Linked List

A stack can also be implemented using a linked list.

```text
TOP
 ↓
+----+----+
| 30 | •--|---->
+----+----+
           |
           ↓
       +----+----+
       | 20 | •--|---->
       +----+----+
                  |
                  ↓
              +----+------+
              | 10 | NULL |
              +----+------+
```

Here, insertion and deletion are performed at the beginning of the linked list.

### Advantages

* Dynamic size.
* No fixed maximum size.
* Push and pop can be performed in O(1).

---

# 8. Applications of Stack

Stacks have many important applications.

### 1. Function calls

Programming languages use a **call stack** to manage function calls.

### 2. Recursion

Recursive function calls are managed using the stack.

### 3. Expression conversion

Stacks are used to convert:

```text
Infix → Postfix
Infix → Prefix
```

### 4. Postfix evaluation

A stack is used to evaluate postfix expressions.

### 5. Parentheses matching

Example:

```text
{ [ ( ) ] }
```

A stack can check whether brackets are properly balanced.

### 6. Undo/Redo

Applications can maintain previous states using stacks.

### 7. Browser history

Previous pages can be maintained using stack-like structures.

### 8. Backtracking

Stacks are useful in:

* Maze solving
* Depth First Search
* Backtracking algorithms

---

# PART B — INFIX TO POSTFIX

## 9. Types of Expressions

There are three common forms.

### Infix

Operator is between operands.

```text
A + B
```

### Prefix

Operator comes before operands.

```text
+ A B
```

### Postfix

Operator comes after operands.

```text
A B +
```

---

# 10. Why Convert Infix to Postfix?

Consider:

```text
A + B * C
```

We need operator precedence to understand that multiplication occurs before addition.

Postfix representation:

```text
A B C * +
```

Postfix expressions do not require parentheses for determining evaluation order.

---

# 11. Operator Precedence

Remember this order:

| Operator | Priority |
| -------- | -------: |
| `()`     |  Highest |
| `^`      |     High |
| `* / %`  |   Medium |
| `+ -`    |      Low |

For operators having the same precedence, associativity is considered.

Generally:

```text
+ - * / %
```

are **left associative**.

Exponentiation `^` is typically treated as **right associative** in expression-conversion problems.

---

# 12. Infix to Postfix Algorithm

Use:

* **Operand → directly add to output**
* **`(` → push into stack**
* **`)` → pop until `(`**
* **Operator → compare precedence with stack top**

### Algorithm

```text
1. Scan the expression from left to right.

2. If the symbol is an operand:
       Add it to postfix output.

3. If symbol is '(':
       Push it into stack.

4. If symbol is ')':
       Pop operators until '(' is found.
       Remove '('.

5. If symbol is an operator:
       Pop higher/equal precedence operators
       from stack and add them to output.
       Then push current operator.

6. After scanning the entire expression:
       Pop all remaining operators.

7. The resulting expression is postfix.
```

---

# 13. Example: Infix to Postfix

Convert:

```text
A + B * C
```

### Step-by-step

| Symbol | Stack | Output |
| ------ | ----- | ------ |
| A      | —     | A      |
| +      | +     | A      |
| B      | +     | AB     |
| *      | + *   | AB     |
| C      | + *   | ABC    |
| End    | —     | ABC*+  |

Therefore:

```text
Infix:
A + B * C

Postfix:
ABC*+
```

---

# 14. Another Important Example

Convert:

```text
(A + B) * C
```

Process:

```text
(
A
+
B
)
*
C
```

Result:

```text
AB+C*
```

Therefore:

$$
(A+B)*C = AB+C*
$$

---

# PART C — POSTFIX EVALUATION

# 15. Evaluation of Postfix Expression

Postfix expressions can be evaluated using a **stack**.

Example:

```text
2 3 * 4 +
```

Meaning:

```text
(2 × 3) + 4
```

Result:

```text
10
```

---

# 16. Algorithm for Postfix Evaluation

Scan the expression from left to right.

### If operand:

Push it onto stack.

### If operator:

1. Pop the top element → `operand2`
2. Pop the next element → `operand1`
3. Perform:

```text
operand1 operator operand2
```

4. Push the result back.

At the end, the stack contains the final answer.

---

# 17. Example

Evaluate:

```text
2 3 * 4 +
```

### Step 1

Read `2`.

```text
Stack:
2
```

### Step 2

Read `3`.

```text
Stack:
3
2
```

### Step 3

Read `*`.

Pop:

```text
3
2
```

Calculate:

```text
2 × 3 = 6
```

Push `6`.

```text
Stack:
6
```

### Step 4

Read `4`.

```text
Stack:
4
6
```

### Step 5

Read `+`.

```text
6 + 4 = 10
```

Final answer:

```text
10
```

### Important

For subtraction/division, **order matters**.

For:

```text
8 2 -
```

Do:

```text
8 - 2 = 6
```

NOT:

```text
2 - 8
```

---

# PART D — RECURSION

# 18. What is Recursion?

**Recursion** is a programming technique in which a function calls itself to solve a smaller version of the same problem.

A recursive function must generally have:

1. **Base case**
2. **Recursive case**

### Example: Factorial

$$
n! = n \times (n-1)!
$$

Base case:

$$
0! = 1
$$

Code:

```cpp
int factorial(int n) {
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}
```

For:

```text
factorial(4)
```

Calls occur:

```text
factorial(4)
    ↓
4 × factorial(3)
         ↓
       3 × factorial(2)
                ↓
              2 × factorial(1)
                       ↓
                     1 × factorial(0)
                              ↓
                              1
```

Then results return:

```text
1
2
6
24
```

---

# 19. Recursion and Stack

This is an important connection.

Every recursive function call creates an **activation record** on the call stack.

For:

```text
factorial(3)
```

the stack conceptually becomes:

```text
factorial(3)
factorial(2)
factorial(1)
factorial(0)
```

When the base case is reached, the functions return in reverse order.

Therefore recursion uses the **system stack/call stack**.

### Advantages

* Code can be shorter and cleaner.
* Useful for naturally recursive problems.
* Useful in tree and graph algorithms.

### Disadvantages

* Uses stack memory.
* Can cause stack overflow for excessive recursion.
* Sometimes iterative solutions use less memory.

---

# PART E — QUEUE

# 20. What is a Queue?

A **queue** is a linear data structure in which:

> **Insertion occurs at REAR and deletion occurs at FRONT.**

It follows:

> **FIFO — First In, First Out**

Example:

```text
FRONT                         REAR
  ↓                             ↓
+----+----+----+----+
| 10 | 20 | 30 | 40 |
+----+----+----+----+
```

`10` entered first, so `10` leaves first.

Think of people standing in a queue.

---

# 21. Representation of Queue

A queue can be represented using:

1. Array
2. Linked List

For array implementation:

```text
+----+----+----+----+----+
| 10 | 20 | 30 |    |    |
+----+----+----+----+----+
  ↑              ↑
FRONT           REAR
```

---

# 22. Queue Operations

The major operations are:

### 1. Enqueue

Insert an element at the rear.

### 2. Dequeue

Remove an element from the front.

### 3. Peek/Front

View the front element.

### 4. IsEmpty

Check whether queue is empty.

### 5. IsFull

For a fixed-size array queue, check whether queue is full.

---

# 23. Enqueue Operation

Suppose:

```text
10 → 20 → 30
```

Enqueue `40`.

Result:

```text
10 → 20 → 30 → 40
```

Insertion happens at **REAR**.

### Algorithm

```text
ENQUEUE(ITEM)

1. If REAR == MAX - 1
       Queue Overflow
       Stop

2. If queue is empty
       FRONT = 0

3. REAR = REAR + 1

4. QUEUE[REAR] = ITEM
```

### Complexity

**O(1)**

---

# 24. Dequeue Operation

Suppose:

```text
FRONT
 ↓
10 → 20 → 30 → 40
```

Dequeue removes `10`.

Result:

```text
FRONT
 ↓
20 → 30 → 40
```

### Algorithm

```text
DEQUEUE()

1. If FRONT == -1 or FRONT > REAR
       Queue Underflow

2. ITEM = QUEUE[FRONT]

3. FRONT = FRONT + 1

4. Return ITEM
```

### Complexity

**O(1)**

---

# 25. Queue Visualization

This interactive visualization is useful for understanding the difference between linear and circular queues:

genui{"learning_viz":{"type_id":"ARRAY_QUEUE_FRONT_REAR","initial_values":{"mode":"linear"},"locale_override":"en-US"}}

---

# 26. Problem with Simple Linear Queue

Consider a queue of size 5:

```text
[10][20][30][40][50]
 ↑                 ↑
F                  R
```

Now dequeue three elements:

```text
[ ][ ][ ][40][50]
          ↑    ↑
          F    R
```

The first three positions are empty, but a simple linear queue may report that the rear has reached the end.

This leads to **wasted space**.

The solution is:

# Circular Queue

---

# 27. Circular Queue

A **circular queue** is a queue in which the last position is logically connected to the first position.

```text
       +-----+
       |  0  |
       +-----+
      /       \
   +-----+   +-----+
   |  4  |   |  1  |
   +-----+   +-----+
      \       /
       +-----+
       | 2,3 |
       +-----+
```

Conceptually:

```text
0 → 1 → 2 → 3 → 4
↑               ↓
└───────────────┘
```

When `REAR` reaches the last position, it can wrap around to position `0` if space is available.

### Formula

```text
REAR = (REAR + 1) % MAX
```

and similarly for `FRONT`.

---

# 28. Advantages of Circular Queue

* Better utilization of array space.
* Avoids unnecessary shifting.
* Enqueue and dequeue can be performed efficiently.
* Useful in buffers and scheduling systems.

---

# 29. Applications of Queue

Queues are used in:

### 1. CPU Scheduling

Processes wait in queues for CPU execution.

### 2. Printer Spooling

Print jobs are placed in a queue.

```text
Job1 → Job2 → Job3 → Printer
```

### 3. Breadth First Search

**BFS** uses a queue.

### 4. Network/Data Buffers

Packets can wait in queues before processing.

### 5. Customer Service Systems

Customers are served in arrival order.

### 6. Operating Systems

Queues are used for process and resource management.

### 7. Keyboard/IO buffering

Input data can be temporarily stored in queues.

---

# PART F — PRIORITY QUEUE

# 30. What is a Priority Queue?

A **priority queue** is a queue in which each element has an associated **priority**.

Unlike a normal FIFO queue, the element with the highest priority is served first.

Example:

```text
Patient A → Priority 2
Patient B → Priority 5
Patient C → Priority 1
```

If larger number means higher priority:

```text
B → A → C
```

### Important

In a priority queue:

> Service order depends on priority, not simply arrival time.

If two elements have the same priority, FIFO ordering can be used.

---

# 31. Applications of Priority Queue

* CPU/process scheduling
* Dijkstra's shortest-path algorithm
* Prim's algorithm
* Network packet scheduling
* Event-driven simulation
* Emergency service systems

A **heap** is a common efficient implementation of a priority queue.

---

# PART G — DEQUE

# 32. What is a Deque?

**Deque** stands for:

> **Double Ended Queue**

In a deque, insertion and deletion can occur at **both ends**.

```text
FRONT                         REAR
  ↓                             ↓
+----+----+----+----+
| 10 | 20 | 30 | 40 |
+----+----+----+----+
  ↑                  ↑
Insert/Delete    Insert/Delete
```

Therefore:

```text
Front → insert/delete
Rear  → insert/delete
```

---

# 33. Types of Deque

### 1. Input Restricted Deque

Insertion is allowed at only one end, but deletion is allowed at both ends.

```text
Insertion → one end
Deletion  → both ends
```

### 2. Output Restricted Deque

Deletion is allowed at only one end, but insertion is allowed at both ends.

```text
Insertion → both ends
Deletion  → one end
```

These definitions are commonly asked directly in exams.

---

# 34. Applications of Deque

* Palindrome checking
* Sliding-window algorithms
* Task scheduling
* Browser history
* Maintaining data where insertion/deletion is required from both ends

---

# 35. Queue vs Stack

Very important comparison:

| Feature                  | Stack                            | Queue            |
| ------------------------ | -------------------------------- | ---------------- |
| Principle                | LIFO                             | FIFO             |
| Insertion                | TOP                              | REAR             |
| Deletion                 | TOP                              | FRONT            |
| Main insertion operation | Push                             | Enqueue          |
| Main deletion operation  | Pop                              | Dequeue          |
| Example                  | Stack of plates                  | People in a line |
| Main applications        | Recursion, expression processing | Scheduling, BFS  |

---

# 36. Linear Queue vs Circular Queue

| Feature                 | Linear Queue    | Circular Queue      |
| ----------------------- | --------------- | ------------------- |
| Arrangement             | Linear          | Circular            |
| Space utilization       | Can waste space | Better              |
| Rear movement           | Only forward    | Wraps around        |
| Reuse deleted positions | Limited         | Yes                 |
| Formula                 | `rear + 1`      | `(rear + 1) % size` |

---

# 37. Priority Queue vs Normal Queue

| Normal Queue                     | Priority Queue                      |
| -------------------------------- | ----------------------------------- |
| FIFO                             | Priority-based                      |
| Arrival order determines service | Priority determines service         |
| Simple implementation            | Usually more complex                |
| Used in ordinary waiting systems | Used in scheduling/priority systems |

---

# 38. Quick Revision Sheet

Before your semester exam, remember this:

```text
STACK
│
├── LIFO
├── TOP
├── PUSH → Insert
├── POP → Delete
├── PEEP/PEEK → View top
├── Overflow → Full stack
├── Underflow → Empty stack
├── Applications
│   ├── Recursion
│   ├── Function calls
│   ├── Expression conversion
│   ├── Postfix evaluation
│   └── Backtracking
│
└── Expression
    ├── Infix
    ├── Prefix
    └── Postfix


QUEUE
│
├── FIFO
├── FRONT → Delete
├── REAR → Insert
├── ENQUEUE → Insert
├── DEQUEUE → Delete
│
├── Circular Queue
│
├── Priority Queue
│
├── Deque
│   ├── Input Restricted
│   └── Output Restricted
│
└── Applications
    ├── CPU Scheduling
    ├── Printer Queue
    ├── BFS
    ├── Buffers
    └── Network Systems
```

## ⭐ Most Important Questions for Your Semester Exam

I would especially prepare these **in writing**, not just read them:

1. **Explain stack and its operations with algorithms.**
2. **Explain stack representation using array and linked list.**
3. **Convert an infix expression into postfix using a stack.**
4. **Evaluate a postfix expression using a stack.**
5. **Explain recursion and its relationship with stack.**
6. **Explain queue and its operations with algorithms.**
7. **Explain circular queue and its operations.**
8. **Explain priority queue and its applications.**
9. **What is a deque? Explain its types.**
10. **Compare stack and queue.**
11. **Explain applications of stacks and queues.**

For **9+ SGPA**, don't memorize only definitions. For every major operation, remember the **diagram + algorithm + one example + time complexity**. That combination gives you enough material to write a strong 5–10 mark answer.
