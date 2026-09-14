# Control Flow in Java

## Conditional Statements, Loops, `break` and `continue`

Control flow statements determine **the order in which Java program statements are executed**.

They are mainly divided into:

1. **Conditional statements** → make decisions
2. **Looping statements** → repeat statements
3. **Jump statements** → change normal flow (`break`, `continue`, `return`)

---

# 1. Conditional Statements

Conditional statements execute different blocks of code depending on whether a condition is `true` or `false`.

Java provides:

* `if`
* `if-else`
* `else-if`
* Nested `if`
* `switch`

---

## 1.1 `if` Statement

The `if` statement executes a block only when the condition is `true`.

### Syntax

```java
if (condition) {
    // statements
}
```

### Example

```java
int age = 20;

if (age >= 18) {
    System.out.println("Eligible to vote");
}
```

Output:

```text
Eligible to vote
```

### Flow

```text
       Condition
          |
      +---+---+
    true    false
      |       |
   Execute   Skip
   block     block
      |
      ↓
   Continue
```

---

# 1.2 `if-else` Statement

Used when there are **two possible paths**.

### Syntax

```java
if (condition) {
    // true block
} else {
    // false block
}
```

### Example

```java
int marks = 35;

if (marks >= 40) {
    System.out.println("Pass");
} else {
    System.out.println("Fail");
}
```

Output:

```text
Fail
```

---

# 1.3 `else-if` Ladder

Used when there are **multiple conditions**.

### Syntax

```java
if (condition1) {
    
} else if (condition2) {
    
} else if (condition3) {
    
} else {
    
}
```

### Example

```java
int marks = 85;

if (marks >= 90) {
    System.out.println("A+");
} else if (marks >= 80) {
    System.out.println("A");
} else if (marks >= 70) {
    System.out.println("B");
} else if (marks >= 60) {
    System.out.println("C");
} else {
    System.out.println("Fail");
}
```

Output:

```text
A
```

### Important

Conditions are checked **from top to bottom**. Once a condition is `true`, its block executes and the remaining `else-if` conditions are skipped.

---

# 1.4 Nested `if`

An `if` statement inside another `if` statement is called a **nested `if`**.

```java
int age = 20;
boolean citizen = true;

if (age >= 18) {

    if (citizen) {
        System.out.println("Eligible to vote");
    }
}
```

Here, the second `if` is inside the first `if`.

---

# 1.5 `switch` Statement

`switch` is used when one expression needs to be compared against multiple possible values.

### Syntax

```java
switch (expression) {
    case value1:
        // statements
        break;

    case value2:
        // statements
        break;

    default:
        // statements
}
```

### Example

```java
int day = 2;

switch (day) {
    case 1:
        System.out.println("Monday");
        break;

    case 2:
        System.out.println("Tuesday");
        break;

    case 3:
        System.out.println("Wednesday");
        break;

    default:
        System.out.println("Invalid day");
}
```

Output:

```text
Tuesday
```

### Role of `break`

`break` terminates the `switch` statement.

Without `break`, execution can continue into the next case (**fall-through**).

---

# 2. Looping Statements

Loops are used to **execute a block repeatedly** as long as a condition or iteration rule permits.

Java provides:

1. `for`
2. `while`
3. `do-while`
4. Enhanced `for` loop (`for-each`)

---

# 2.1 `for` Loop

The `for` loop is commonly used when the number of iterations is known or controlled by a counter.

### Syntax

```java
for (initialization; condition; update) {
    // statements
}
```

### Example

```java
for (int i = 1; i <= 5; i++) {
    System.out.println(i);
}
```

Output:

```text
1
2
3
4
5
```

### Execution

```text
Initialization
      ↓
  Condition
   ↓    ↓
 true  false
  ↓      ↓
Body    Exit
  ↓
Update
  ↓
Condition
```

### Important

The `for` loop has three main parts:

| Part           | Purpose                       |
| -------------- | ----------------------------- |
| Initialization | Executes once at beginning    |
| Condition      | Checked before each iteration |
| Update         | Executes after each iteration |

---

# 2.2 `while` Loop

A `while` loop is used when the number of iterations may not be known in advance.

### Syntax

```java
while (condition) {
    // statements
}
```

### Example

```java
int i = 1;

while (i <= 5) {
    System.out.println(i);
    i++;
}
```

Output:

```text
1
2
3
4
5
```

### Important

`while` is a **pre-test loop** because the condition is checked **before** executing the body.

Therefore, it is possible for the loop body to execute **zero times**.

---

# 2.3 `do-while` Loop

The `do-while` loop executes the body first and checks the condition afterward.

### Syntax

```java
do {
    // statements
} while (condition);
```

### Example

```java
int i = 1;

do {
    System.out.println(i);
    i++;
} while (i <= 5);
```

Output:

```text
1
2
3
4
5
```

### Important

A `do-while` loop executes **at least once**, even if the condition is initially false.

Example:

```java
int i = 10;

do {
    System.out.println(i);
} while (i < 5);
```

Output:

```text
10
```

---

# 2.4 Enhanced `for` Loop / For-Each Loop

Used to iterate over arrays and other `Iterable` collections.

### Syntax

```java
for (dataType variable : collection) {
    // statements
}
```

### Example

```java
int[] numbers = {10, 20, 30, 40};

for (int n : numbers) {
    System.out.println(n);
}
```

Output:

```text
10
20
30
40
```

It is simpler when you need to process each element sequentially and don't need an index.

---

# 3. Difference Between `for`, `while` and `do-while`

| Feature               | `for`                    | `while`                    | `do-while`                      |
| --------------------- | ------------------------ | -------------------------- | ------------------------------- |
| Condition checked     | Before body              | Before body                | After body                      |
| Minimum executions    | 0                        | 0                          | **1**                           |
| Best suited for       | Counter-controlled loops | Condition-controlled loops | Body must execute at least once |
| Initialization syntax | In loop header           | Usually before loop        | Usually before loop             |
| Update syntax         | Usually in header        | Usually in body            | Usually in body                 |

### Easy memory

```text
for       → 0 or more
while     → 0 or more
do-while  → 1 or more
```

---

# 4. `break` Statement

The `break` statement **immediately terminates the nearest enclosing loop or `switch` statement**.

### Example

```java
for (int i = 1; i <= 10; i++) {

    if (i == 5) {
        break;
    }

    System.out.println(i);
}
```

Output:

```text
1
2
3
4
```

When `i == 5`, `break` terminates the loop.

### Flow

```text
Loop
 ↓
Condition
 ↓
break?
 ↓ yes
Exit loop
```

---

# 5. `continue` Statement

The `continue` statement **skips the remaining statements of the current loop iteration** and proceeds to the next iteration.

### Example

```java
for (int i = 1; i <= 5; i++) {

    if (i == 3) {
        continue;
    }

    System.out.println(i);
}
```

Output:

```text
1
2
4
5
```

When `i == 3`, the `println` is skipped, but the loop continues.

---

# 6. `break` vs `continue`

This is a **very important exam comparison**.

| `break`                           | `continue`                      |
| --------------------------------- | ------------------------------- |
| Terminates the loop               | Skips current iteration         |
| Control moves outside the loop    | Control moves to next iteration |
| Can be used in loops and `switch` | Used in loops                   |
| Stops further iterations          | Remaining iterations continue   |

### Easy trick

> **`break` = Stop the loop**
> **`continue` = Skip this iteration**

---

# 7. `break` in Nested Loops

An **unlabeled `break`** terminates only the **nearest enclosing loop**.

```java
for (int i = 1; i <= 3; i++) {

    for (int j = 1; j <= 3; j++) {

        if (j == 2) {
            break;
        }

        System.out.println(i + " " + j);
    }
}
```

The `break` terminates the **inner loop**, not the outer loop.

---

# 8. Labeled `break`

Java also supports labeled statements.

```java
outer:
for (int i = 1; i <= 3; i++) {

    for (int j = 1; j <= 3; j++) {

        if (i == 2 && j == 2) {
            break outer;
        }

        System.out.println(i + " " + j);
    }
}
```

Here:

```java
break outer;
```

terminates the **labeled outer loop**.

This is less common in everyday Java but is useful to know for exams.

---

# 9. Labeled `continue`

A labeled `continue` can skip to the next iteration of a specified outer loop.

```java
outer:
for (int i = 1; i <= 3; i++) {

    for (int j = 1; j <= 3; j++) {

        if (j == 2) {
            continue outer;
        }

        System.out.println(i + " " + j);
    }
}
```

When `j == 2`, control moves to the **next iteration of the outer loop**.

---

# 10. `break`, `continue` and `return`

Don't confuse these three:

| Statement  | Effect                       |
| ---------- | ---------------------------- |
| `break`    | Exits nearest loop/switch    |
| `continue` | Skips current loop iteration |
| `return`   | Exits the current method     |

Example:

```java
for (int i = 1; i <= 5; i++) {

    if (i == 2)
        continue;

    if (i == 4)
        break;

    System.out.println(i);
}
```

Output:

```text
1
3
```

* `i = 2` → `continue` → skip 2
* `i = 3` → print 3
* `i = 4` → `break` → terminate loop

---

# ⭐ Exam-Ready 10-Mark Answer

### Control Flow Statements in Java

Control flow statements control the order in which statements are executed in a Java program. They are broadly classified into **conditional statements, looping statements and jump statements**.

### 1. Conditional Statements

Conditional statements are used for decision making.

* `if`
* `if-else`
* `else-if`
* nested `if`
* `switch`

Example:

```java
if (marks >= 40) {
    System.out.println("Pass");
} else {
    System.out.println("Fail");
}
```

### 2. Looping Statements

Looping statements repeatedly execute a block of code.

* `for`
* `while`
* `do-while`
* enhanced `for`

Example:

```java
for (int i = 1; i <= 5; i++) {
    System.out.println(i);
}
```

### 3. Jump Statements

`break` and `continue` alter the normal execution of loops.

**`break`:** Terminates the nearest loop or switch.

```java
if (i == 5)
    break;
```

**`continue`:** Skips the current iteration and proceeds with the next iteration.

```java
if (i == 3)
    continue;
```

Thus, control-flow statements provide **decision making, repetition and controlled transfer of execution** in Java programs.

---

## 🔥 Last-Minute Revision

```text
CONTROL FLOW
│
├── Conditional
│   ├── if
│   ├── if-else
│   ├── else-if
│   ├── nested if
│   └── switch
│
├── Loops
│   ├── for
│   ├── while
│   ├── do-while
│   └── enhanced for
│
└── Jump
    ├── break    → exit loop/switch
    ├── continue → skip iteration
    └── return   → exit method
```

### Must remember for exam

**`if` → decision**
**`switch` → multiple cases**
**`for` → counter/iteration**
**`while` → condition first**
**`do-while` → executes at least once**
**`break` → terminate**
**`continue` → skip current iteration**
