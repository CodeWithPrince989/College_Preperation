Absolutely. These are **high-weight Java OOP topics**, so for a 9+ SGPA target you should not study them as isolated definitions. You need to understand the **relationship between class → object → constructor → method → `this` → static → access control**, and then cover recursion, `String`, and garbage collection separately.

Below are **exam-oriented but conceptually deep notes**, with examples, diagrams, comparisons, common mistakes, and likely questions.

# Java OOP — Complete Exam Notes

## 1. Class

### Definition

A **class** is a blueprint or template that defines the **data (fields)** and **behavior (methods)** of objects.

A class may contain:

* Fields/variables
* Methods
* Constructors
* Blocks
* Nested classes/interfaces
* Static members

### Syntax

```java
class ClassName {
    // fields

    // constructors

    // methods
}
```

### Example

```java
class Student {

    int rollNo;
    String name;

    void display() {
        System.out.println(rollNo);
        System.out.println(name);
    }
}
```

Here:

```text
Student
 ├── rollNo
 ├── name
 └── display()
```

`Student` is the **class**.

---

# 2. Object

An **object** is an instance of a class.

If a class is a blueprint, an object is an actual entity created from that blueprint.

### Creating an object

```java
Student s1 = new Student();
```

There are three important parts:

```text
Student s1 = new Student();
   ↓      ↓       ↓
 type  reference  object creation
```

* `Student` → reference type
* `s1` → reference variable
* `new Student()` → creates an object

### Example

```java
class Student {

    int rollNo;
    String name;

    void display() {
        System.out.println(rollNo + " " + name);
    }
}

class Main {
    public static void main(String[] args) {

        Student s1 = new Student();

        s1.rollNo = 101;
        s1.name = "Prince";

        s1.display();
    }
}
```

Output:

```text
101 Prince
```

---

# 3. Class vs Object

| Class                                    | Object                         |
| ---------------------------------------- | ------------------------------ |
| Blueprint/template                       | Instance of class              |
| Logical definition                       | Runtime entity                 |
| Defines fields and methods               | Has actual state               |
| Does not represent one particular entity | Represents a particular entity |
| Example: `Student`                       | Example: `s1`                  |

### Easy memory

> **Class = What an object should have/do**
> **Object = Actual instance**

---

# 4. Methods

A **method** is a block of code that performs a specific task.

### Syntax

```java
returnType methodName(parameters) {
    // statements
}
```

Example:

```java
class Calculator {

    int add(int a, int b) {
        return a + b;
    }
}
```

Calling the method:

```java
Calculator c = new Calculator();

int result = c.add(10, 20);

System.out.println(result);
```

Output:

```text
30
```

---

## 4.1 Components of a Method

Consider:

```java
public int add(int a, int b) {
    return a + b;
}
```

| Component      | Meaning         |
| -------------- | --------------- |
| `public`       | Access modifier |
| `int`          | Return type     |
| `add`          | Method name     |
| `int a, int b` | Parameters      |
| `return`       | Returns result  |

---

# 5. Types of Methods

Methods can be classified in several ways.

### Method with no parameter and no return value

```java
void display() {
    System.out.println("Hello");
}
```

### Method with parameters

```java
void display(String name) {
    System.out.println(name);
}
```

### Method with return value

```java
int square(int n) {
    return n * n;
}
```

### Method with parameters and return value

```java
int add(int a, int b) {
    return a + b;
}
```

---

# 6. Constructors

A **constructor** is a special member of a class used to **initialize objects**.

### Characteristics

1. Constructor name must be the same as the class name.
2. It has **no return type**, not even `void`.
3. It is invoked when an object is created using `new`.
4. It can be overloaded.
5. It is not inherited.
6. Constructors can have access modifiers.
7. If no constructor is declared, Java provides a **default constructor** under the applicable rules.

### Example

```java
class Student {

    int rollNo;
    String name;

    Student() {
        rollNo = 101;
        name = "Prince";
    }
}
```

Creating object:

```java
Student s = new Student();
```

The constructor executes automatically.

---

# 7. Constructor vs Method

Very important for exams.

| Constructor                    | Method                                                 |
| ------------------------------ | ------------------------------------------------------ |
| Initializes an object          | Performs an operation/behavior                         |
| Same name as class             | Can have any valid name                                |
| No return type                 | Has a return type or `void`                            |
| Invoked during object creation | Invoked explicitly/through method invocation           |
| Cannot be inherited            | Methods can be inherited depending on access/modifiers |
| Can be overloaded              | Can be overloaded                                      |
| Cannot be `static`             | Can be `static`                                        |

---

# 8. Types of Constructors

Commonly discussed types:

1. No-argument constructor
2. Parameterized constructor
3. Copy constructor — a programmer-defined pattern in Java, not a special language-defined constructor type

---

## 8.1 No-Argument Constructor

```java
class Student {

    Student() {
        System.out.println("Constructor called");
    }
}
```

```java
Student s = new Student();
```

Output:

```text
Constructor called
```

---

## 8.2 Parameterized Constructor

A constructor that accepts parameters.

```java
class Student {

    int rollNo;
    String name;

    Student(int r, String n) {
        rollNo = r;
        name = n;
    }
}
```

Usage:

```java
Student s = new Student(101, "Prince");
```

---

# 9. Constructor Overloading

**Constructor overloading** means defining multiple constructors in the same class with different parameter lists.

```java
class Student {

    int rollNo;
    String name;

    Student() {
        rollNo = 0;
        name = "Unknown";
    }

    Student(int r) {
        rollNo = r;
    }

    Student(int r, String n) {
        rollNo = r;
        name = n;
    }
}
```

Now:

```java
Student s1 = new Student();
Student s2 = new Student(101);
Student s3 = new Student(101, "Prince");
```

Java selects the constructor based on the **number and types of arguments**.

---

# 10. `this` Reference

`this` is a reference to the **current object**.

It is particularly useful when instance variables and parameters have the same names.

Example:

```java
class Student {

    int rollNo;
    String name;

    Student(int rollNo, String name) {
        this.rollNo = rollNo;
        this.name = name;
    }
}
```

Without `this`:

```java
rollNo = rollNo;
```

both names refer to the parameter in that context, so the instance field would not be assigned as intended.

With:

```java
this.rollNo = rollNo;
```

the meaning is:

```text
this.rollNo → current object's field
rollNo      → constructor parameter
```

---

## 10.1 Uses of `this`

### 1. Refer to current object's instance variable

```java
this.name = name;
```

### 2. Invoke current object's method

```java
this.display();
```

Usually `display()` would work too.

### 3. Invoke another constructor of same class

```java
this(10);
```

This is called **constructor chaining**.

Important: a `this(...)` constructor invocation must be the **first statement** in a constructor.

Example:

```java
class Student {

    Student() {
        this(100);
    }

    Student(int rollNo) {
        System.out.println(rollNo);
    }
}
```

### 4. Return current object

```java
return this;
```

This is used in some fluent APIs and method-chaining designs.

---

# 11. Static Fields

A `static` field belongs to the **class**, rather than each individual object.

Example:

```java
class Student {

    int rollNo;
    String name;

    static String college = "DCRUST";
}
```

Here:

```text
rollNo → each object has its own copy
name   → each object has its own copy
college → shared by the class
```

### Example

```java
class Student {

    int rollNo;
    static String college = "ABC College";

    Student(int r) {
        rollNo = r;
    }
}

class Main {
    public static void main(String[] args) {

        Student s1 = new Student(101);
        Student s2 = new Student(102);

        System.out.println(Student.college);
    }
}
```

The static field is shared across instances of the class.

---

# 12. Static Methods

A method declared with `static` belongs to the class.

```java
class MathUtil {

    static int square(int n) {
        return n * n;
    }
}
```

Call it using:

```java
int result = MathUtil.square(5);
```

Output:

```text
25
```

No object is required to invoke the static method.

---

# 13. Important Rules of Static Methods

A static method can directly access:

* Static fields
* Static methods

A static method **cannot directly access instance fields or instance methods** because no particular object is implied.

Example:

```java
class Test {

    int x = 10;
    static int y = 20;

    static void display() {

        System.out.println(y); // Valid

        // System.out.println(x); // Error
    }
}
```

To access `x`, you need an object:

```java
Test obj = new Test();
System.out.println(obj.x);
```

### Important exam point

A static method cannot use `this` because `this` refers to a particular object, while a static method belongs to the class.

---

# 14. Static Field vs Instance Field

| Static Field                                    | Instance Field                  |
| ----------------------------------------------- | ------------------------------- |
| Belongs to class                                | Belongs to object               |
| One shared field per class/class-loader context | Each object has its own field   |
| Declared with `static`                          | No `static`                     |
| Can be accessed using class name                | Usually accessed through object |
| Example: `Student.college`                      | Example: `s1.name`              |

---

# 15. Access Control

Access control determines **where a class member can be accessed**.

Java provides four levels of member access:

1. `private`
2. default/package-private
3. `protected`
4. `public`

### Access table

| Modifier    | Same Class | Same Package | Subclass in Different Package | Other Package |
| ----------- | ---------: | -----------: | ----------------------------: | ------------: |
| `private`   |          ✓ |            ✗ |                             ✗ |             ✗ |
| default     |          ✓ |            ✓ |                            ✗* |             ✗ |
| `protected` |          ✓ |            ✓ |                           ✓** |             ✗ |
| `public`    |          ✓ |            ✓ |                             ✓ |             ✓ |

* A subclass in another package does not get access merely because it is a subclass; package-private members are package-scoped.

** `protected` access across packages is available to a subclass through the subclass relationship, subject to Java's protected-access rules.

---

## 15.1 `private`

Accessible only inside the declaring class.

```java
class Student {

    private int marks = 90;

    void display() {
        System.out.println(marks);
    }
}
```

Outside the class:

```java
// System.out.println(s.marks); // Error
```

`private` is heavily used for **encapsulation**.

---

## 15.2 Default / Package-Private

If no access modifier is specified:

```java
class Student {
    int marks = 90;
}
```

`marks` is accessible within the **same package**.

---

## 15.3 `protected`

Accessible:

* Within the same package
* In subclasses outside the package, subject to protected access rules

```java
class Parent {
    protected int x = 10;
}
```

---

## 15.4 `public`

Accessible wherever the class/member is accessible and the package is imported/referenced appropriately.

```java
public int marks = 90;
```

---

# 16. Encapsulation and Access Control

Access modifiers support **encapsulation**.

Instead of directly exposing data:

```java
class BankAccount {

    private double balance;

    public double getBalance() {
        return balance;
    }

    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }
}
```

The field is protected using `private`, while controlled access is provided through methods.

This is a very important OOP principle.

---

# 17. Method Overloading

Method overloading means having multiple methods with the **same name but different parameter lists**.

```java
class Calculator {

    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    double add(double a, double b) {
        return a + b;
    }
}
```

This is **compile-time polymorphism**.

### Important

Changing only the return type does **not** constitute method overloading.

Invalid:

```java
int add(int a, int b)
double add(int a, int b)
```

---

# 18. Recursion

**Recursion** is a technique in which a method calls itself to solve a problem by reducing it to smaller instances of the same problem.

Every proper recursive solution needs:

1. **Base case**
2. **Recursive case**

---

## Example: Factorial

Mathematically:

```text
5! = 5 × 4 × 3 × 2 × 1
```

Recursive definition:

```text
n! = n × (n-1)!
```

with:

```text
0! = 1
```

Java:

```java
class Factorial {

    static int fact(int n) {

        if (n == 0) {
            return 1;       // Base case
        }

        return n * fact(n - 1); // Recursive case
    }

    public static void main(String[] args) {

        System.out.println(fact(5));
    }
}
```

Output:

```text
120
```

---

# 19. How Recursion Works

For:

```java
fact(5)
```

execution becomes:

```text
fact(5)
 ↓
5 × fact(4)
       ↓
     4 × fact(3)
           ↓
         3 × fact(2)
               ↓
             2 × fact(1)
                   ↓
                 1 × fact(0)
                       ↓
                       1
```

Then results return upward:

```text
1
1 × 1 = 1
2 × 1 = 2
3 × 2 = 6
4 × 6 = 24
5 × 24 = 120
```

---

# 20. Base Case is Essential

Without a base case:

```java
static void fun() {
    fun();
}
```

The method keeps calling itself until the call stack is exhausted, typically resulting in:

```text
StackOverflowError
```

Therefore:

> **No base case → recursion does not terminate normally.**

---

# 21. Advantages and Disadvantages of Recursion

### Advantages

* Elegant for recursive problems
* Useful for trees and graphs
* Useful for divide-and-conquer algorithms
* Can make some algorithms easier to understand

### Disadvantages

* Function calls consume stack memory
* Can cause `StackOverflowError`
* Often slower than an equivalent iterative solution because of call overhead
* May be harder to debug

---

# 22. String Class

`String` is one of the most frequently used classes in Java.

A `String` represents a **sequence of characters**.

Example:

```java
String name = "Prince";
```

`String` belongs to:

```java
java.lang
```

so it does not normally need an explicit import.

---

# 23. Creating Strings

### Using string literal

```java
String s1 = "Hello";
```

### Using `new`

```java
String s2 = new String("Hello");
```

Both represent the string `"Hello"`, but their creation and object identity behavior can differ.

---

# 24. String Immutability

One of the most important properties of Java's `String` class is:

> **String objects are immutable.**

Once a `String` object is created, its contents cannot be changed.

Example:

```java
String s = "Hello";

s.concat(" World");

System.out.println(s);
```

Output:

```text
Hello
```

Why?

`concat()` returns a new string; it does not modify the original string.

Correct:

```java
s = s.concat(" World");
```

Now:

```text
Hello World
```

---

# 25. String Pool

Java maintains a special area commonly called the **String Pool** for string literals.

Example:

```java
String a = "Java";
String b = "Java";
```

The literals can refer to the same pooled `String` object.

Conceptually:

```text
a ──┐
    ├──> "Java"
b ──┘
```

But:

```java
String c = new String("Java");
```

explicitly creates a new `String` object.

Therefore:

```java
a == b
```

is typically `true` for these literals, while:

```java
a == c
```

is `false`.

But:

```java
a.equals(c)
```

is `true`.

### Very important:

* `==` → compares reference identity for objects
* `.equals()` → `String` content comparison

---

# 26. Important String Methods

### `length()`

```java
String s = "Java";

System.out.println(s.length());
```

Output:

```text
4
```

---

### `charAt()`

Returns character at a given index.

```java
System.out.println(s.charAt(1));
```

Output:

```text
a
```

---

### `substring()`

```java
String s = "Programming";

System.out.println(s.substring(0, 4));
```

Output:

```text
Prog
```

The ending index is exclusive.

---

### `toUpperCase()`

```java
System.out.println("java".toUpperCase());
```

Output:

```text
JAVA
```

---

### `toLowerCase()`

```java
System.out.println("JAVA".toLowerCase());
```

Output:

```text
java
```

---

### `equals()`

```java
String a = "Java";
String b = "Java";

System.out.println(a.equals(b));
```

Output:

```text
true
```

---

### `contains()`

```java
String s = "Java Programming";

System.out.println(s.contains("Java"));
```

Output:

```text
true
```

---

### `indexOf()`

```java
String s = "Java";

System.out.println(s.indexOf('a'));
```

Output:

```text
1
```

---

### `replace()`

```java
String s = "Java";

System.out.println(s.replace('a', 'o'));
```

Output:

```text
Jovo
```

Again, the original `String` remains unchanged.

---

# 27. String vs StringBuilder vs StringBuffer

| Feature                                | String     | StringBuilder                       | StringBuffer                                                   |
| -------------------------------------- | ---------- | ----------------------------------- | -------------------------------------------------------------- |
| Mutable                                | ❌          | ✓                                   | ✓                                                              |
| Thread-safe methods                    | Immutable  | No synchronization guarantee        | Synchronized methods                                           |
| Performance for repeated modifications | Lower      | Generally better                    | Generally slower than StringBuilder                            |
| Typical use                            | Fixed text | Single-threaded string modification | Shared/multi-threaded contexts where synchronization is needed |

Example:

```java
StringBuilder sb = new StringBuilder("Java");

sb.append(" Programming");

System.out.println(sb);
```

Output:

```text
Java Programming
```

---

# 28. Garbage Collection

**Garbage collection (GC)** is the automatic memory-management mechanism of Java that reclaims memory occupied by objects that are **no longer reachable**.

Java programmers do not normally manually free objects using `free()` or `delete`.

---

## Example

```java
class Test {

    public static void main(String[] args) {

        Test obj1 = new Test();

        obj1 = null;
    }
}
```

After:

```java
obj1 = null;
```

the object may become **eligible for garbage collection**, assuming there are no other reachable references to it.

### Important wording

Do **not** write:

> `obj = null` immediately destroys the object.

Correct:

> The object becomes **eligible for garbage collection** if no other reachable references exist.

The JVM's garbage collector determines when/how memory is reclaimed.

---

# 29. `System.gc()`

Java provides:

```java
System.gc();
```

which is a request/suggestion to the JVM to perform garbage collection.

It does **not guarantee** that GC will happen immediately.

Therefore:

```java
System.gc();
```

does not mean:

> "Run garbage collection right now."

---

# 30. `finalize()` — Important Exam Note

Historically, Java provided:

```java
protected void finalize()
```

as a mechanism associated with cleanup before an object was reclaimed.

However, **finalization has been deprecated for removal in modern Java and should not be used for resource management**.

For modern Java, resources such as files and database connections should generally be managed using **try-with-resources** and explicit resource APIs.

For your exam, if your syllabus/textbook specifically mentions `finalize()`, learn its historical role, but mention that it is **deprecated and not recommended in modern Java**.

---

# 31. Object Eligibility for Garbage Collection

An object can become eligible when there is no reachable reference to it.

### Case 1: Reference set to `null`

```java
Student s = new Student();

s = null;
```

The object can become eligible if no other reference points to it.

### Case 2: Reference reassignment

```java
Student s1 = new Student();
Student s2 = new Student();

s1 = s2;
```

The first `Student` object can become eligible if no other reference points to it.

### Case 3: Local object becomes unreachable

An object created inside a method can become eligible after the method finishes if no reference to it escapes and remains reachable elsewhere.

---

# 32. Complete Relationship of These Topics

This is the conceptual chain you should remember:

```text
                    CLASS
                      │
          ┌───────────┴───────────┐
          ↓                       ↓
       Fields                  Methods
          │                       │
          │                       │
          ↓                       ↓
       Object ───────────────→ Method call
          │
          ↓
     Constructor
          │
          ↓
    Object initialization
          │
          ↓
        this
   (current object)
```

And:

```text
static field/method
        ↓
     belongs to class
        ↓
   no specific object required
```

While:

```text
Object becomes unreachable
          ↓
Eligible for GC
          ↓
JVM may reclaim memory
```

---

# ⭐ High-Probability Exam Questions

### 2 Marks

1. Define a class.
2. What is an object?
3. What is a constructor?
4. What is the use of `this`?
5. What is a static variable?
6. Define recursion.
7. What is string immutability?
8. What is garbage collection?
9. What is constructor overloading?
10. What is access control?

### 5 Marks

1. Explain class and object with an example.
2. Explain constructors and their types.
3. Explain the `this` reference.
4. Explain static fields and static methods.
5. Explain Java access modifiers.
6. Explain recursion with factorial.
7. Explain String immutability.
8. Explain garbage collection in Java.
9. Explain constructor overloading.

### 10 Marks

1. **Explain classes, objects, constructors and methods with suitable examples.**
2. **Explain static fields and methods and differentiate them from instance members.**
3. **Explain Java access control with all access modifiers.**
4. **Explain the `this` reference and its different uses.**
5. **Explain recursion with a suitable Java program.**
6. **Explain the String class and important String methods.**
7. **Explain garbage collection and object eligibility in Java.**

---

# 🧠 9+ SGPA Final Revision Sheet

Memorize these core statements:

| Topic                  | One-line concept                             |
| ---------------------- | -------------------------------------------- |
| **Class**              | Blueprint defining state and behavior        |
| **Object**             | Instance of a class                          |
| **Method**             | Performs an operation/behavior               |
| **Constructor**        | Initializes an object                        |
| **`this`**             | Reference to current object                  |
| **Static field**       | Class-level shared field                     |
| **Static method**      | Class-level method                           |
| **Access control**     | Controls visibility/access                   |
| **Overloading**        | Same name, different parameter list          |
| **Recursion**          | Method calls itself                          |
| **String**             | Immutable sequence of characters             |
| **Garbage Collection** | Automatic reclamation of unreachable objects |

### Most important code patterns

**Object:**

```java
Student s = new Student();
```

**Constructor:**

```java
Student(int id) {
    this.id = id;
}
```

**Static:**

```java
static int count;
```

**Static method:**

```java
static void display() { }
```

**Recursion:**

```java
int fact(int n) {
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}
```

**String comparison:**

```java
a.equals(b)
```

**GC eligibility:**

```java
obj = null;
```

> **Exam strategy:** For a 10-mark OOP answer, don't only write definitions. Use the pattern **definition → syntax → diagram/concept → Java program → explanation → advantages/applications → comparison**. This gives you enough technical substance to score well without filling pages with irrelevant theory.
