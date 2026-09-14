# Control Flow – Block Scope in Java

**Block scope** is an important concept under **control flow and variable scope**. It determines **where a variable declared inside a block can be accessed**.

---

## 1. What is a Block?

A **block** is a group of Java statements enclosed within curly braces `{ }`.

```java
{
    int x = 10;
    System.out.println(x);
}
```

The statements between `{` and `}` form a block.

Blocks are commonly created by:

* `if`
* `else`
* `for`
* `while`
* `do-while`
* `switch`
* Standalone `{ }` blocks

---

# 2. What is Block Scope?

**Block scope** means that a variable declared inside a block is accessible **only within that block and its nested blocks**.

### Example

```java
public class Main {
    public static void main(String[] args) {

        if (true) {
            int x = 10;
            System.out.println(x);  // Valid
        }

        // System.out.println(x);  // Error
    }
}
```

Here:

```java
int x = 10;
```

is declared inside the `if` block.

Therefore, `x` can be accessed inside that block, but **not outside it**.

---

# 3. Block Scope and Nested Blocks

A block can contain another block.

```java
public class Main {
    public static void main(String[] args) {

        int a = 10;

        {
            int b = 20;

            System.out.println(a); // Valid
            System.out.println(b); // Valid
        }

        System.out.println(a); // Valid
        // System.out.println(b); // Error
    }
}
```

### Why?

`a` is declared in the outer block, so the inner block can access it.

But `b` is declared in the inner block, so the outer block **cannot access it**.

### Rule:

> **Outer scope → accessible inside inner scope.**
> **Inner scope → not accessible outside its scope.**

---

# 4. Block Scope with `if`

```java
if (marks >= 40) {
    int result = 1;
    System.out.println(result);
}
```

`result` exists only inside the `if` block.

This is invalid:

```java
if (marks >= 40) {
    int result = 1;
}

System.out.println(result); // Compile-time error
```

---

# 5. Block Scope with `for` Loop

Variables declared in a `for` loop can have limited scope.

```java
for (int i = 0; i < 5; i++) {
    System.out.println(i);
}

// System.out.println(i); // Error
```

The variable `i` is accessible within the `for` statement's scope, including its loop body, but not after the loop.

---

# 6. Block Scope with `while`

```java
while (true) {
    int x = 100;
    System.out.println(x);
}
```

`x` is local to the `while` body.

It cannot be accessed outside that block.

---

# 7. Same Variable Name in Different Blocks

Java allows variables with the same name in **non-overlapping local scopes**.

Example:

```java
public class Main {
    public static void main(String[] args) {

        {
            int x = 10;
            System.out.println(x);
        }

        {
            int x = 20;
            System.out.println(x);
        }
    }
}
```

Output:

```text
10
20
```

These are different local variables because their scopes don't overlap.

---

# 8. Important: Local Variable Scope

A local variable is generally declared inside:

* Method
* Constructor
* Block
* Loop
* `if/else`
* `switch`

Its scope is determined by the enclosing block or declaration context.

Example:

```java
public static void main(String[] args) {

    int a = 10;

    if (a > 5) {
        int b = 20;

        System.out.println(a); // Valid
        System.out.println(b); // Valid
    }

    System.out.println(a); // Valid
    // System.out.println(b); // Invalid
}
```

---

# 9. Block Scope vs Lifetime

Don't confuse **scope** with **lifetime**.

| Concept      | Meaning                                       |
| ------------ | --------------------------------------------- |
| **Scope**    | Where a variable can be accessed              |
| **Lifetime** | How long the variable exists during execution |

### Easy trick:

> **Scope = Where?**
> **Lifetime = How long?**

For a local variable declared inside a block, its accessibility is limited by that block.

---

# 10. Important Exam Example

Consider:

```java
public class Main {
    public static void main(String[] args) {

        int x = 10;

        if (x > 5) {
            int y = 20;

            System.out.println(x);
            System.out.println(y);
        }

        System.out.println(x);
        // System.out.println(y);
    }
}
```

### Explanation

* `x` is declared in the outer block.
* `y` is declared in the `if` block.
* Inner block can access `x`.
* Inner block can access `y`.
* Outer block can access `x`.
* Outer block **cannot access `y`**.

---

# 11. Block Scope Diagram

```text
main() block
│
├── x = 10
│
├── if block
│   │
│   ├── y = 20
│   │
│   └── y accessible here
│
└── x accessible here
    y NOT accessible here
```

---

# ⭐ Exam-Ready 5-Mark Answer

**Block scope** in Java refers to the region within `{ }` where a local variable is accessible. A variable declared inside a block can be accessed within that block and its nested blocks, but it cannot be accessed outside the block.

Example:

```java
public class Main {
    public static void main(String[] args) {

        int x = 10;

        if (x > 5) {
            int y = 20;

            System.out.println(x);
            System.out.println(y);
        }

        System.out.println(x);
        // System.out.println(y); // Error
    }
}
```

Here, `x` is declared in the outer block and can be accessed inside the `if` block. `y` is declared inside the `if` block and therefore cannot be accessed outside it.

Thus, block scope provides **controlled visibility of local variables** and helps prevent unintended access to variables.

---

## 🔥 Last-Minute Revision

```text
Block = { }

Variable inside block
        ↓
Accessible inside block
        ↓
Accessible in nested blocks
        ↓
NOT accessible outside block
```

**Most important rule:**

> **A variable is accessible from its declaration point to the end of its scope.**
