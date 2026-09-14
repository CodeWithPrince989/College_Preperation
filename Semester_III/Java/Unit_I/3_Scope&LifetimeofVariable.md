# Java Programming — Scope and Lifetime of Variables

This is a **frequently tested conceptual topic**. The key is to clearly understand the difference between **scope** and **lifetime**.

---

# 1. What is a Variable?

A **variable** is a named memory location used to store a value that can change during program execution.

Example:

```java
int age = 21;
```

Here:

* `int` → data type
* `age` → variable name
* `21` → value

---

# 2. What is Scope of a Variable?

**Scope** refers to the **region of a program where a variable can be accessed or referenced**.

In simple words:

> **Scope = Where can I use this variable?**

Example:

```java
public class Demo {
    public static void main(String[] args) {

        int x = 10;

        System.out.println(x);
    }
}
```

Here, `x` can be accessed inside the block where it is declared.

---

# 3. What is Lifetime of a Variable?

**Lifetime** refers to the **period during program execution for which a variable exists and has storage associated with it**.

In simple words:

> **Lifetime = How long does this variable exist?**

So remember:

```text
Scope   → Where can I access it?
Lifetime → How long does it exist?
```

---

# 4. Types of Variables Based on Scope

In Java, variables are commonly discussed as:

1. **Local variables**
2. **Instance variables**
3. **Static (class) variables**

Their scope and lifetime are different.

---

# 5. Local Variables

A local variable is declared **inside a method, constructor, or block**.

### Example

```java
public static void main(String[] args) {

    int x = 10;

    System.out.println(x);
}
```

Here `x` is a local variable.

### Scope

The variable can be accessed only within the **method/block in which it is declared**, subject to the normal lexical-scope rules.

### Lifetime

Its lifetime is associated with the **execution of the method/block activation** in which it is declared.

Example:

```java
public static void main(String[] args) {

    int x = 10;

    if (x > 5) {
        int y = 20;
        System.out.println(y);
    }

    // System.out.println(y);  // Error
}
```

`y` exists only within the `if` block.

---

# 6. Block Scope

A variable declared inside a block `{ }` has scope limited to that block.

Example:

```java
public static void main(String[] args) {

    int x = 10;

    {
        int y = 20;

        System.out.println(x); // Valid
        System.out.println(y); // Valid
    }

    System.out.println(x); // Valid
    // System.out.println(y); // Error
}
```

### Why?

Because `y` was declared inside the inner block.

```text
main()
│
├── x  ← accessible throughout main's relevant scope
│
└── { 
      y ← accessible only here
    }
```

---

# 7. Method Parameter Scope

Parameters of a method are also local variables.

Example:

```java
static void display(int number) {
    System.out.println(number);
}
```

Here `number` is a parameter.

Its scope is within the method body.

```text
display()
   │
   └── number
       ↓
   method body
```

Its lifetime is associated with that particular method invocation.

---

# 8. Instance Variables

An **instance variable** is declared inside a class but **outside methods, constructors, and blocks**, and it is not declared `static`.

Example:

```java
class Student {

    int age;

    void display() {
        System.out.println(age);
    }
}
```

Here `age` is an instance variable.

Each object of `Student` has its **own copy** of `age`.

```java
Student s1 = new Student();
Student s2 = new Student();

s1.age = 20;
s2.age = 22;
```

Conceptually:

```text
s1 → age = 20

s2 → age = 22
```

### Scope

An instance variable can be accessed through its object and, subject to access-control rules, from the class's methods and other code.

### Lifetime

It exists as part of the object and remains available while that object is **reachable and not yet reclaimed by the garbage collector**.

---

# 9. Static / Class Variables

A variable declared using `static` inside a class is called a **static variable** or **class variable**.

Example:

```java
class Student {

    static String college = "DCRUST";
}
```

There is one class-level variable associated with the class rather than one separate copy per object.

```java
Student.college
```

### Scope

Its accessibility depends on its declaration and access modifier, but it is associated with the class rather than a particular object.

### Lifetime

A static variable is associated with the class while that class is loaded/initialized in a JVM class-loading context.

---

# 10. Scope vs Lifetime

This distinction is **very important for exams**.

| Scope                                               | Lifetime                                              |
| --------------------------------------------------- | ----------------------------------------------------- |
| Region where a variable can be accessed             | Period during which the variable exists               |
| Concerned with **accessibility**                    | Concerned with **existence/storage**                  |
| Determined mainly by where the variable is declared | Depends on the kind of variable and execution/runtime |
| Example: local variable inside a block              | Example: local variable during a method invocation    |

### Easy way to remember:

> **Scope = Where?**
> **Lifetime = How long?**

---

# 11. Comparison of Variable Types

| Variable      | Declared                                  | Scope                                                    | Lifetime                                          |
| ------------- | ----------------------------------------- | -------------------------------------------------------- | ------------------------------------------------- |
| **Local**     | Inside method/block                       | Within its applicable method/block scope                 | During the relevant method/block execution        |
| **Parameter** | In method/constructor parameter list      | Within method/constructor body                           | During that invocation                            |
| **Instance**  | Inside class, outside methods, non-static | Through the object/class context subject to access rules | With the object's lifetime                        |
| **Static**    | Inside class using `static`               | Class-level scope subject to access rules                | Associated with class loading/lifetime in the JVM |

---

# 12. Example Showing Different Scopes

```java
class Student {

    static String college = "DCRUST";  // Static variable
    int age = 21;                       // Instance variable

    void display(int marks) {           // Parameter

        int x = 10;                     // Local variable

        if (marks >= 40) {

            int result = 1;             // Block variable

            System.out.println(college);
            System.out.println(age);
            System.out.println(marks);
            System.out.println(x);
            System.out.println(result);
        }

        // result is not accessible here
    }
}
```

Here:

```text
college → static/class variable
age     → instance variable
marks   → parameter
x       → local variable
result  → block-local variable
```

---

# 13. Variable Shadowing

Sometimes a local variable or parameter has the same name as an instance variable.

Example:

```java
class Student {

    int age = 20;

    void display(int age) {
        System.out.println(age);
        System.out.println(this.age);
    }
}
```

Here the parameter `age` **shadows** the instance variable `age` within the method.

To access the instance variable:

```java
this.age
```

This is a useful concept to mention if a question asks about variable scope.

---

# 14. Important Point: Local Variables Don't Get Default Values

This is commonly asked in Java exams.

```java
public static void main(String[] args) {

    int x;

    System.out.println(x); // Compile-time error
}
```

A local variable must be definitely assigned a value before it is read.

But an instance variable gets a default value:

```java
class Demo {

    int x;

    public static void main(String[] args) {
        Demo d = new Demo();
        System.out.println(d.x);
    }
}
```

Output:

```text
0
```

---

# 15. Scope Diagram

```text
Class
│
├── static variable
│      └── class-level
│
├── instance variable
│      └── object-level
│
└── method
       │
       ├── parameter
       │
       ├── local variable
       │
       └── block
              └── block-local variable
```

---

# 16. Exam-Ready 10-Mark Answer

### Q. Explain scope and lifetime of variables in Java.

**Answer:**

The **scope of a variable** is the region of a program in which the variable can be accessed or referenced. The **lifetime of a variable** is the period during program execution for which the variable exists and has storage associated with it.

Java variables can be classified into local variables, parameters, instance variables, and static variables.

**1. Local Variables:**
A local variable is declared inside a method, constructor, or block. Its scope is limited to the applicable method or block. Its lifetime is associated with the execution of that method or block.

```java
void display() {
    int x = 10;
    System.out.println(x);
}
```

**2. Parameters:**
Method and constructor parameters are local to the method or constructor body. Their lifetime is associated with the particular method or constructor invocation.

```java
void display(int marks) {
    System.out.println(marks);
}
```

**3. Instance Variables:**
Instance variables are declared inside a class but outside methods and are not `static`. Each object has its own copy. Their lifetime is associated with the corresponding object.

```java
class Student {
    int age;
}
```

**4. Static Variables:**
Static variables are declared using the `static` keyword. They belong to the class rather than to individual objects. Their lifetime is associated with the class being loaded in a particular JVM class-loading context.

```java
class Student {
    static String college = "DCRUST";
}
```

Therefore, **scope determines where a variable can be accessed, whereas lifetime determines how long the variable exists**.

---

# ⭐ Last-Minute Revision

Remember this:

> **Scope = Where can I use the variable?**
> **Lifetime = How long does the variable exist?**

### Variable types

```text
Local      → method/block
Parameter  → method/constructor
Instance   → object
Static     → class
```

### Most important exam distinction

**Local variable:** scope is limited to its method/block and it must be initialized before use.

**Instance variable:** belongs to an object.

**Static variable:** belongs to a class.

**One-line memory trick:**

> **Local → Method | Instance → Object | Static → Class**
