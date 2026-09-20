# Data Structure Notes for Semester Exam

### What is Data Structure?
Data Structure is a way of organizing and storing data in a Computer that computer can access it through memory efficiently. It is a Mathematical or logical model of representing the data, as well as Implementation in computer program.

Data Structure are Classified in two board categories:

Data Structure --> Linear(array, linked list, stack, Queue) and Non-linear(Tree, Graph)

### Linear DS
A data structure in which data elements are arranged sequentially or linearly, where each element is attached to its previous and next adjacent elements, is called a linear data structure.

#### Array
Array is a fundamental and linear data structure that stores values in contigeous location. 
Note:- In case of C/C++, Java-Primitive-Array, actual element are stores at contigeous location and In case of Python, JavaScript and Java-Non-Primitive, references are stored at contigeous location.

- Random Access:
- Cache Freindliness :- Since the element/Value are stored at contigeous location, we get advantage of locality reference.
Array are use to build other data structure 
An array is a collection of elements of the same data type stored in contiguous memory locations. It allows efficient access to elements using an index.

#### Linked List
LL is a Fundamental DS in Computer Science. It mainly allow efficient data insertion and deletion operation compared to array. it also used to implement other data structure like queue, dequeue, and stack.

it is a type of linear data structure individual items are not neccesorly in cont. location. indivial item are called node and connected by links.

- First Node called head node and we can traverse whole list using head and next link/



Below are **semester-exam-ready notes** for all the linked-list topics you listed. I’ll explain them conceptually first, then give you **algorithms, diagrams, complexities, and points you can write in the exam**.

# Linked List — Complete Exam Notes

## 1. Introduction to Linked List

A **linked list** is a linear data structure in which elements are stored in **nodes**. Unlike arrays, the nodes of a linked list are **not necessarily stored in contiguous memory locations**.

Each node generally contains:

1. **Data** – stores the actual value.
2. **Link/Pointer** – stores the address of the next node.

### Structure of a node

```text
+---------+---------+
|  DATA   |  NEXT   |
+---------+---------+
```

A singly linked list looks like:

```text
HEAD
 |
 v
+------+------+
| 10   |  *---|---->
+------+------+
              |
              v
        +------+------+
        | 20   |  *---|---->
        +------+------+
                     |
                     v
               +------+------+
               | 30   | NULL |
               +------+------+
```

The last node contains `NULL` in its link field.

### Advantages

* Dynamic size.
* Memory is allocated when required.
* Insertion and deletion are efficient when the position/node is known.
* Does not require contiguous memory.

### Disadvantages

* Extra memory is required for pointers.
* No direct/random access like arrays.
* Traversal is sequential.
* Pointer manipulation makes implementation more complex.

---

# 2. Representation of Linked Lists in Memory

This is an important **theory question**.

In an array, elements are generally stored in contiguous memory:

```text
1000   1004   1008   1012
 |      |      |      |
 10     20     30     40
```

In a linked list, nodes can be located at **different memory addresses**.

For example:

```text
Address     Data      Next
--------------------------------
1000        10        2050
2050        20        3500
3500        30        NULL
```

Therefore:

```text
HEAD
 |
 v
1000                 2050                 3500
+------+-------+     +------+-------+     +------+------+
|  10  | 2050  | --> |  20  | 3500  | -->|  30  | NULL |
+------+-------+     +------+-------+     +------+------+
```

The **HEAD pointer** stores the address of the first node.

### Important terms

**Node:** Basic unit of a linked list.

**HEAD:** Pointer containing the address of the first node.

**NULL:** Indicates that there is no next node.

**Link field:** Contains the address of the next node.

### C/C++ representation

```cpp
struct Node {
    int data;
    Node* next;
};
```

Creating a node:

```cpp
Node* newNode = new Node();
newNode->data = 10;
newNode->next = nullptr;
```

### Exam point

> Linked-list nodes are dynamically allocated and may be scattered throughout memory. The relationship between nodes is maintained using pointers.

---

# 3. Traversing a Linked List

**Traversal** means visiting each node of the linked list exactly once to process or display its data.

Suppose:

```text
10 → 20 → 30 → 40 → NULL
```

During traversal:

```text
10
20
30
40
```

### Algorithm

1. Start from `HEAD`.
2. Check whether the current pointer is `NULL`.
3. Process/display the data.
4. Move to the next node.
5. Repeat until `NULL` is reached.

### Pseudocode

```text
TRAVERSE(HEAD)

1. PTR = HEAD
2. While PTR != NULL
      a. Process PTR->DATA
      b. PTR = PTR->NEXT
3. Stop
```

### C++ code

```cpp
void traverse(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
```

### Complexity

* Time: **O(n)**
* Extra space: **O(1)**

---

# 4. Searching in a Linked List

Searching means finding whether a particular element exists in the linked list.

Suppose:

```text
10 → 20 → 30 → 40 → NULL
```

Search for `30`.

```text
10 ≠ 30
20 ≠ 30
30 = 30 ✓
```

### Algorithm

```text
SEARCH(HEAD, KEY)

1. PTR = HEAD
2. While PTR != NULL:
      a. If PTR->DATA == KEY
             return FOUND
      b. PTR = PTR->NEXT
3. return NOT FOUND
```

### C++ implementation

```cpp
bool search(Node* head, int key) {
    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data == key)
            return true;

        temp = temp->next;
    }

    return false;
}
```

### Complexity

| Case         | Complexity |
| ------------ | ---------: |
| Best case    |       O(1) |
| Average case |       O(n) |
| Worst case   |       O(n) |

Why?

Because a linked list doesn't support direct indexing. To find an element, we may have to start from the first node and move sequentially.

---

# 5. Insertion into a Linked List

Insertion means adding a new node to the linked list.

Insertion can occur:

1. At the beginning
2. At the end
3. After a specific node
4. Before a specific node

---

## A. Insertion at Beginning

Original:

```text
HEAD
 |
 v
10 → 20 → 30 → NULL
```

Insert `5`.

First create:

```text
5 → ?
```

Then:

```text
newNode->next = HEAD;
HEAD = newNode;
```

Result:

```text
HEAD
 |
 v
5 → 10 → 20 → 30 → NULL
```

### Algorithm

```text
INSERT_BEGINNING(HEAD, ITEM)

1. Create a new node NEW
2. NEW->DATA = ITEM
3. NEW->NEXT = HEAD
4. HEAD = NEW
5. Return HEAD
```

### Complexity

**O(1)**

---

# 6. Insertion at End

Original:

```text
10 → 20 → 30 → NULL
```

Insert `40`.

Result:

```text
10 → 20 → 30 → 40 → NULL
```

### Algorithm

```text
INSERT_END(HEAD, ITEM)

1. Create NEW node
2. NEW->DATA = ITEM
3. NEW->NEXT = NULL
4. If HEAD == NULL
       HEAD = NEW
5. Otherwise:
       PTR = HEAD
       while PTR->NEXT != NULL
           PTR = PTR->NEXT
       PTR->NEXT = NEW
```

### Complexity

Without a tail pointer:

**O(n)**

With a tail pointer:

**O(1)**

---

# 7. Insertion After a Given Node

Suppose:

```text
10 → 20 → 40 → NULL
```

Insert `30` after `20`.

### Step 1

Create:

```text
30 → ?
```

### Step 2

Connect `30` to `40`:

```text
30 → 40
```

### Step 3

Connect `20` to `30`:

```text
10 → 20 → 30 → 40 → NULL
```

### Code

```cpp
newNode->next = temp->next;
temp->next = newNode;
```

### Complexity

If the required node is already known:

**O(1)**

If we first need to search for it:

**O(n)**

---

# 8. Deletion from Linked List

Deletion means removing a node from the linked list.

Common cases:

1. Delete first node
2. Delete last node
3. Delete a specific node

---

## A. Deletion from Beginning

Original:

```text
HEAD
 |
 v
10 → 20 → 30 → NULL
```

Remove `10`.

Set:

```text
HEAD = HEAD->next
```

Result:

```text
HEAD
 |
 v
20 → 30 → NULL
```

### Algorithm

```text
DELETE_BEGINNING(HEAD)

1. If HEAD == NULL
       List is empty
2. TEMP = HEAD
3. HEAD = HEAD->NEXT
4. Delete TEMP
5. Return HEAD
```

### Complexity

**O(1)**

---

# 9. Deletion from End

Original:

```text
10 → 20 → 30 → NULL
```

Delete `30`.

We need to reach the node before `30`.

```text
10 → 20 → 30 → NULL
       ↑
     previous
```

Then:

```text
previous->next = NULL
```

Result:

```text
10 → 20 → NULL
```

### Complexity

For a singly linked list:

**O(n)**

because we generally need to traverse the list.

---

# 10. Deletion of a Specific Node

Suppose:

```text
10 → 20 → 30 → 40 → NULL
```

Delete `30`.

We find the previous node:

```text
10 → 20 → 30 → 40
     ↑     ↑
   prev   target
```

Then:

```cpp
prev->next = target->next;
```

Result:

```text
10 → 20 → 40 → NULL
```

### Algorithm

```text
DELETE_NODE(HEAD, KEY)

1. If HEAD == NULL
       return
2. If HEAD->DATA == KEY
       delete first node
3. Otherwise:
       Find previous node of KEY
4. previous->next = current->next
5. Delete current
```

### Complexity

**O(n)**

---

# 11. Polynomial Addition Using Linked Lists

This is an important application of linked lists and can be asked as a **long-answer question**.

A polynomial can be represented using linked-list nodes.

For example:

$$
P(x)=5x^3+4x^2+2
$$

can be represented as:

```text
+-----+------+     +-----+------+     +-----+------+
|  5  |  3   | --> |  4  |  2   | --> |  2  |  0   |
+-----+------+     +-----+------+     +-----+------+
 coeff exponent    coeff exponent     coeff exponent
```

Each node contains:

```text
Coefficient
Exponent
Next
```

### Structure

```cpp
struct Node {
    int coeff;
    int power;
    Node* next;
};
```

---

## Polynomial Addition

Suppose:

$$
P(x)=5x^3+4x^2+2x
$$

and

$$
Q(x)=3x^3+2x^2+7
$$

Represent them as:

```text
P:
(5,3) → (4,2) → (2,1)

Q:
(3,3) → (2,2) → (7,0)
```

Compare powers.

### Power 3

```text
5 + 3 = 8
```

### Power 2

```text
4 + 2 = 6
```

### Power 1

```text
2
```

### Power 0

```text
7
```

Therefore:

$$
P(x)+Q(x)=8x^3+6x^2+2x+7
$$

Result:

```text
(8,3) → (6,2) → (2,1) → (7,0)
```

### General algorithm

Let `P` and `Q` point to the first nodes.

```text
POLY_ADD(P, Q)

while P != NULL and Q != NULL

    if P.power == Q.power
        add coefficients
        move P and Q

    else if P.power > Q.power
        copy P term
        move P

    else
        copy Q term
        move Q

Copy remaining terms of P
Copy remaining terms of Q
```

### Complexity

If polynomial 1 has `m` terms and polynomial 2 has `n` terms:

**O(m + n)**

---

# 12. Doubly Linked List

A **doubly linked list** is a linked list in which each node contains three fields:

1. Pointer to previous node
2. Data
3. Pointer to next node

### Structure

```text
+------+------+------+
| PREV | DATA | NEXT |
+------+------+------+
```

Example:

```text
NULL
  ↓
+------+------+------+
| NULL | 10   |  *---|----+
+------+------+------+    |
                           ↓
                    +------+------+------+
                    |  *---| 20   |  *---|----+
                    +------+------+------+
                       ↑
                       |
                    previous
```

Simplified:

```text
NULL ← 10 ⇄ 20 ⇄ 30 → NULL
```

---

## Node Structure in C++

```cpp
struct Node {
    int data;
    Node* prev;
    Node* next;
};
```

---

## Advantages of Doubly Linked List

### 1. Bidirectional traversal

We can move:

```text
10 → 20 → 30
```

or

```text
30 → 20 → 10
```

### 2. Easier deletion

A node can directly access both its previous and next nodes.

### 3. Useful for applications requiring forward and backward movement.

---

## Disadvantages

* Requires extra memory for `prev`.
* More pointer manipulation.
* Insertion/deletion requires updating more links.

---

# 13. Singly vs Doubly Linked List

| Feature           | Singly Linked List     | Doubly Linked List               |
| ----------------- | ---------------------- | -------------------------------- |
| Pointers/node     | 1                      | 2                                |
| Traversal         | Forward                | Forward + backward               |
| Memory            | Less                   | More                             |
| Reverse traversal | Difficult              | Easy                             |
| Implementation    | Simpler                | More complex                     |
| Deletion          | Requires previous node | Previous node directly available |

---

# 14. Applications of Linked Lists

Linked lists are widely used when **dynamic insertion/deletion** is required.

### 1. Dynamic memory management

Linked structures are used in memory-management systems.

### 2. Stack implementation

A stack can be implemented using a linked list.

```text
TOP
 ↓
30
 ↓
20
 ↓
10
```

Push and pop can be performed efficiently.

### 3. Queue implementation

A queue can be implemented using linked lists.

```text
FRONT → 10 → 20 → 30 ← REAR
```

### 4. Polynomial representation

Each polynomial term can be stored as a node:

```text
(coefficient, exponent)
```

### 5. Graph representation

Linked lists are commonly used in **adjacency-list representation** of graphs.

```text
A → B → C
B → A → D
C → A
```

### 6. Browser navigation

A doubly linked structure can conceptually support:

```text
Previous ← Current → Next
```

### 7. Undo/Redo systems

Doubly linked structures can represent movement between previous and subsequent states.

### 8. Music playlists

Songs can be connected using next/previous links.

### 9. Hash tables

Linked lists can be used for **separate chaining** when multiple keys map to the same hash bucket.

---

# 15. Time Complexity — Important for Exam

| Operation               | Singly Linked List |
| ----------------------- | -----------------: |
| Access kth element      |               O(n) |
| Search                  |               O(n) |
| Insert at beginning     |               O(1) |
| Insert at end           |              O(n)* |
| Insert after known node |               O(1) |
| Delete beginning        |               O(1) |
| Delete end              |               O(n) |
| Delete known node       |             O(1)** |
| Traverse                |               O(n) |

`*` O(1) if a tail pointer is maintained.

`**` O(1) when the required node/previous node is already available.

---

# 16. Important Diagram to Remember

For a **singly linked list**:

```text
          HEAD
           |
           ↓
     +-----+-----+     +-----+-----+     +-----+------+
     | DATA|NEXT | --> | DATA|NEXT | --> | DATA| NULL |
     +-----+-----+     +-----+-----+     +-----+------+
```

For a **doubly linked list**:

```text
       NULL                    NULL
        ↑                       ↑
        |                       |
NULL ← [10] ⇄ [20] ⇄ [30] → NULL
```

---

# 17. How to Write a 9+ SGPA Answer

For a **5–10 mark linked-list question**, follow this structure:

### 1. Definition

Give a precise definition.

### 2. Diagram

Draw the node structure and linked-list representation.

### 3. Explanation

Explain how pointers connect nodes.

### 4. Algorithm

Write numbered steps/pseudocode.

### 5. Example

Show before → operation → after.

### 6. Complexity

Write time and space complexity.

### 7. Advantages/Applications

Add 2–5 points where relevant.

For example, for **Insertion in Linked List**, don't only write code. Write:

> **Definition → Node structure → Diagram → Types of insertion → Algorithm → Example → Complexity → Advantages.**

That makes the answer much more complete and gives you enough material to score well in a descriptive semester exam.
