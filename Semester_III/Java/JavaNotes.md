# Java Programming — History of Java

## 1. Introduction

**Java** is a high-level, object-oriented, class-based, general-purpose programming language developed by **Sun Microsystems**. It was designed with the goal of creating software that could run on different platforms without requiring modification.

Java follows the principle:

> **“Write Once, Run Anywhere” (WORA)**

This is possible because Java programs are compiled into **bytecode**, which runs on the **Java Virtual Machine (JVM)**.

---

# 2. History of Java

The history of Java can be understood as a sequence of important developments.

### 1990 — Green Project

In **1990**, a team at **Sun Microsystems** started a project called the **Green Project**.

The team was led by:

* **James Gosling**
* **Patrick Naughton**
* **Mike Sheridan**

The main objective was to develop software for **consumer electronic devices** such as set-top boxes and interactive television systems.

---

### 1991 — Oak Language

James Gosling initially developed a new programming language for the Green Project.

The language was named **Oak**.

The name **Oak** was chosen because there was an oak tree outside James Gosling's office.

The language was designed to be:

* Simple
* Portable
* Secure
* Object-oriented
* Platform-independent

---

### 1994 — Shift Toward the Internet

With the rapid growth of the **World Wide Web**, the team realized that Oak was well suited for developing interactive applications for the Internet.

The language was modified and adapted for Internet programming.

However, the name **Oak** had trademark issues, so a new name was required.

---

### 1995 — Java is Born

In **1995**, Oak was renamed **Java**.

The name **Java** was selected during discussions among the development team.

Sun Microsystems officially introduced Java in **1995**.

The key idea was:

> **Write Once, Run Anywhere**

Java became particularly popular because of its **platform independence** and support for Internet applications.

---

### 1996 — JDK 1.0

The first official version of Java was released in **1996** as:

**JDK 1.0**

JDK stands for **Java Development Kit**.

It provided the tools required to develop and run Java applications.

---

# 3. Important Java Timeline

| Year     | Event                                                                                   |
| -------- | --------------------------------------------------------------------------------------- |
| **1990** | Green Project started at Sun Microsystems                                               |
| **1991** | Oak programming language developed                                                      |
| **1994** | Oak adapted toward Internet programming                                                 |
| **1995** | Oak renamed **Java** and officially introduced                                          |
| **1996** | **JDK 1.0** released                                                                    |
| **1998** | **J2SE 1.2** released; Java platform editions introduced                                |
| **2004** | **Java 5** released with major language features such as generics and enhanced for-loop |
| **2006** | Java made available as open-source software under the OpenJDK project                   |
| **2009** | Oracle announced agreement to acquire Sun Microsystems                                  |
| **2010** | Oracle completed acquisition of Sun Microsystems                                        |
| **2014** | **Java 8** released; major features included Lambda expressions and Stream API          |
| **2017** | **Java 9** introduced the Module System                                                 |
| **2018** | Java moved toward a **6-month release cycle**                                           |
| **2021** | **Java 17**, an important LTS version, released                                         |
| **2023** | **Java 21**, an LTS version, released                                                   |
| **2025** | **Java 25**, an LTS version, released                                                   |

---

# 4. Java Development

Java was initially developed by a team at **Sun Microsystems**, with **James Gosling** being widely recognized as the **father of Java**.

### Key people

**James Gosling**
→ Lead developer and commonly known as the **Father of Java**

**Patrick Naughton**
→ Member of the original Green Project team

**Mike Sheridan**
→ Member of the original Green Project team

---

# 5. Why Was Java Developed?

Java was designed to overcome several limitations of existing programming approaches.

### Major objectives

1. **Platform independence**
2. **Object-oriented programming**
3. **Security**
4. **Portability**
5. **Simplicity**
6. **Reliability**
7. **Support for network programming**
8. **Automatic memory management**
9. **Multithreading**

The most important objective was to make programs **portable across different platforms**.

---

# 6. How Java Achieved Platform Independence

This is an **important exam concept**.

A normal compiled program may depend on a particular operating system or processor.

Java uses an intermediate form called **bytecode**.

### Execution process

```text
Java Source Code
       ↓
     javac
       ↓
   Bytecode (.class)
       ↓
      JVM
       ↓
Machine Code
       ↓
    Hardware
```

For example:

```text
Program.java
     ↓
  Compiler
     ↓
Program.class
     ↓
JVM
     ↓
Windows / Linux / macOS
```

The same `.class` bytecode can run on different operating systems as long as a suitable **JVM** is available.

Therefore:

> **Java source code is compiled into platform-independent bytecode, which is executed by a platform-specific JVM.**

This is the fundamental reason behind Java's **platform independence**.

---

# 7. Java and the Internet

Java became popular during the growth of the Internet because it provided features suitable for network-based applications.

Java supported:

* Network programming
* Distributed applications
* Web applications
* Security mechanisms
* Platform-independent execution
* Multithreading

Java applets were historically used to run Java programs inside web browsers, although **Java applets are now obsolete and no longer used in modern browsers**.

---

# 8. Important Terms

### JVM — Java Virtual Machine

JVM executes Java **bytecode**.

### JRE — Java Runtime Environment

JRE provides the environment required to **run Java applications**, including the JVM and runtime libraries.

### JDK — Java Development Kit

JDK provides tools required to **develop Java applications**, including the compiler and runtime components.

Simplified relationship:

```text
JDK
 ├── Development Tools
 └── JRE
      ├── JVM
      └── Java Libraries
```

---

# 9. Java Under Oracle

Originally, Java was developed by **Sun Microsystems**.

In **2010**, Oracle completed its acquisition of Sun Microsystems. Java development subsequently continued under Oracle's stewardship, alongside the broader Java/OpenJDK ecosystem.

---

# 10. Exam-Ready 10-Mark Answer

### Q. Explain the history of Java.

**Answer:**

Java is a high-level, object-oriented, general-purpose programming language developed at **Sun Microsystems**. It was designed to provide portability, security, reliability and platform-independent execution.

The development of Java began in **1990** as part of the **Green Project** at Sun Microsystems. The project was led by **James Gosling**, along with **Patrick Naughton** and **Mike Sheridan**. Initially, a new programming language called **Oak** was developed in 1991. The language was primarily intended for programming consumer electronic devices.

With the rapid growth of the World Wide Web, the developers recognized the potential of the language for Internet applications. Because the name Oak had trademark issues, it was renamed **Java** in **1995**. Java was officially introduced by Sun Microsystems in 1995 with the principle **“Write Once, Run Anywhere.”**

The first official Java Development Kit, **JDK 1.0**, was released in **1996**. Java gained popularity because Java programs are compiled into **platform-independent bytecode**, which is executed by the **Java Virtual Machine (JVM)**.

In 2006, Java was made available as open-source software through the **OpenJDK** project. Oracle later acquired Sun Microsystems in 2010 and continued Java development.

Java has evolved through many versions. **Java 8** introduced important features such as Lambda expressions and the Stream API. **Java 9** introduced the Module System. Modern Java follows a regular release cycle, with several versions designated as **Long-Term Support (LTS)** releases, including Java 17, Java 21 and Java 25.

Thus, Java evolved from the Oak language of the Green Project into a widely used programming platform for enterprise software, web applications, Android-era development, backend systems, cloud applications and many other areas.

---

# 11. Very Important Points for Exam

Remember this sequence:

**Green Project → Oak → Internet → Java → JDK 1.0 → OpenJDK → Oracle**

And remember:

* **Developed at:** Sun Microsystems
* **Father of Java:** James Gosling
* **Initial name:** Oak
* **Green Project:** 1990
* **Oak:** 1991
* **Java introduced:** 1995
* **JDK 1.0:** 1996
* **OpenJDK:** 2006
* **Oracle acquired Sun:** 2010
* **Main concept:** Write Once, Run Anywhere
* **Platform independence:** Bytecode + JVM

### ⭐ 5 keywords you should definitely write

**Oak | Green Project | James Gosling | Bytecode | JVM**

If you remember these five and the timeline, you can construct a strong answer even under exam pressure.


# Java Programming — Data Types

**Data Types** is a very important Java topic because it is connected to variables, memory, type conversion, operators, methods, arrays, etc. For a **9+ SGPA-level answer**, you should know the classification, sizes, ranges, default values, and examples.

---

# 1. What is a Data Type?

A **data type** specifies the type of data that a variable can store.

It tells the Java compiler:

* What kind of value will be stored.
* How much memory is required.
* What operations can be performed on that value.

### Example

```java
int age = 21;
double salary = 45000.50;
char grade = 'A';
boolean passed = true;
```

Here:

* `int` → integer value
* `double` → decimal value
* `char` → character
* `boolean` → true/false value

---

# 2. Classification of Java Data Types

Java data types are broadly divided into **two categories**:

```text
                 Java Data Types
                       |
              ┌────────┴────────┐
              ↓                 ↓
         Primitive         Non-Primitive
          Data Types        Data Types
              |                 |
       ┌──────┼──────┐      String
       ↓      ↓      ↓      Arrays
    Numeric  char  boolean  Classes
       |
   ┌───┴────┐
   ↓        ↓
Integer   Floating
Types      Types
```

### Two main types:

1. **Primitive Data Types**
2. **Non-Primitive / Reference Data Types**

---

# 3. Primitive Data Types

Primitive data types are the **basic built-in data types** provided by Java.

Java has **8 primitive data types**:

| Data Type |           Size | Example             |
| --------- | -------------: | ------------------- |
| `byte`    |         8 bits | `byte x = 10;`      |
| `short`   |        16 bits | `short x = 1000;`   |
| `int`     |        32 bits | `int x = 100000;`   |
| `long`    |        64 bits | `long x = 100000L;` |
| `float`   |        32 bits | `float x = 10.5f;`  |
| `double`  |        64 bits | `double x = 10.5;`  |
| `char`    |        16 bits | `char x = 'A';`     |
| `boolean` | JVM-dependent* | `boolean x = true;` |

> **Exam note:** For `boolean`, Java does not specify a fixed storage size in the language specification. Do **not** blindly write “1 byte” as a language-level fact. Many textbooks mention 1 byte, but that is not a guaranteed Java language size.

---

# 4. Integer Data Types

Java provides four integer types:

### `byte`

* Size: **8 bits**
* Range: **-128 to 127**

```java
byte age = 21;
```

The range is:

$$
-2^7 \text{ to } 2^7-1
$$

$$
-128 \text{ to } 127
$$

---

### `short`

* Size: **16 bits**
* Range: **-32,768 to 32,767**

```java
short marks = 25000;
```

Range:

$$
-2^{15} \text{ to } 2^{15}-1
$$

---

### `int`

* Size: **32 bits**
* Range: **-2³¹ to 2³¹ − 1**
* Most commonly used integer type.

```java
int population = 1000000;
```

Range:

$$
-2,147,483,648
$$

to

$$
2,147,483,647
$$

---

### `long`

* Size: **64 bits**
* Used for very large integer values.

```java
long population = 8000000000L;
```

The suffix `L` is commonly used to explicitly indicate a `long` literal.

Range:

$$
-2^{63} \text{ to } 2^{63}-1
$$

---

# 5. Floating-Point Data Types

Java provides two floating-point types:

## `float`

* Size: **32 bits**
* Single-precision floating-point number.
* Suffix `f` or `F` is normally required for a decimal literal assigned to `float`.

```java
float price = 99.5f;
```

Without `f`:

```java
float price = 99.5;   // Error
```

because decimal literals are `double` by default.

---

## `double`

* Size: **64 bits**
* Double-precision floating-point number.
* Generally preferred over `float` when greater precision is needed.

```java
double salary = 45000.75;
```

A decimal literal such as:

```java
10.5
```

is a `double` by default.

---

# 6. Character Data Type — `char`

`char` is used to store a **single 16-bit Unicode character**.

### Example

```java
char grade = 'A';
```

Important:

```java
'A'    // char
"A"    // String
```

Single quotes are used for a character.

Double quotes are used for a String.

### Example

```java
char ch = 'P';
```

Java `char` uses **UTF-16 code units**, which is why its size is 16 bits.

---

# 7. Boolean Data Type

`boolean` represents a logical value.

It can contain only:

```text
true
false
```

### Example

```java
boolean isPassed = true;
boolean isAdult = false;
```

Unlike some languages such as C/C++, Java does **not** allow an integer to be directly used as a boolean.

For example:

```java
boolean x = 1;   // Error
```

---

# 8. Non-Primitive / Reference Data Types

Non-primitive data types are also called **reference types**.

Examples include:

* Classes
* Objects
* Arrays
* Interfaces
* `String`
* Enums
* Records

### Example

```java
String name = "Prince";
```

Here:

```text
String → reference type
name   → reference variable
```

Another example:

```java
int[] numbers = {10, 20, 30};
```

`int[]` is an array reference type.

---

# 9. Primitive vs Reference Data Types

| Primitive                         | Reference                                      |
| --------------------------------- | ---------------------------------------------- |
| Basic built-in types              | Types that refer to objects/instances          |
| 8 primitive types                 | Many possible reference types                  |
| Examples: `int`, `char`, `double` | Examples: `String`, arrays, classes            |
| Variables hold primitive values   | Variables hold references to objects/arrays    |
| Cannot be `null`                  | Can generally be `null`                        |
| Generally more lightweight        | Objects may involve additional memory/overhead |

### Example

```java
int x = 10;
```

`x` directly contains the primitive value `10`.

Whereas:

```java
String name = "Prince";
```

`name` is a reference variable referring to a String object.

---

# 10. Default Values of Instance and Static Variables

This is an important exam point.

If an **instance variable** or **static variable** is declared without an explicit initializer, Java gives it a default value.

| Data Type       | Default Value |
| --------------- | ------------- |
| `byte`          | `0`           |
| `short`         | `0`           |
| `int`           | `0`           |
| `long`          | `0L`          |
| `float`         | `0.0f`        |
| `double`        | `0.0d`        |
| `char`          | `'\u0000'`    |
| `boolean`       | `false`       |
| Reference types | `null`        |

### Very important:

**Local variables do NOT receive automatic default values.**

This is invalid:

```java
public static void main(String[] args) {
    int x;
    System.out.println(x); // Compile-time error
}
```

You must initialize `x` first:

```java
int x = 10;
```

---

# 11. Why Does Java Have Different Data Types?

Different data types allow Java programs to use memory efficiently and represent different kinds of information.

For example:

```java
int age = 21;
double percentage = 85.5;
char grade = 'A';
boolean passed = true;
```

Using the appropriate type makes the program clearer and helps the compiler detect invalid operations.

---

# 12. Important Difference: `float` vs `double`

| `float`                                   | `double`                                 |
| ----------------------------------------- | ---------------------------------------- |
| 32-bit                                    | 64-bit                                   |
| Single precision                          | Double precision                         |
| Less precision                            | More precision                           |
| Requires `f` for typical decimal literals | Decimal literals are `double` by default |
| Uses less storage                         | Uses more storage                        |

Example:

```java
float a = 10.5f;
double b = 10.5;
```

---

# 13. Important Difference: `char` vs `String`

This is frequently asked.

| `char`                      | `String`                            |
| --------------------------- | ----------------------------------- |
| Primitive type              | Reference type                      |
| Stores one UTF-16 code unit | Represents a sequence of characters |
| Uses single quotes          | Uses double quotes                  |
| Example: `'A'`              | Example: `"ABC"`                    |

```java
char ch = 'A';
String name = "Prince";
```

---

# 14. Exam-Important Concept: Why `int` is Commonly Used

Although Java provides `byte`, `short`, `int`, and `long`, **`int` is generally the default choice for integer calculations** unless there is a specific reason to use another type.

For example:

```java
int a = 10;
int b = 20;
int sum = a + b;
```

---

# 15. Example Program Using Data Types

```java
public class Main {
    public static void main(String[] args) {

        byte age = 21;
        short marks = 500;
        int population = 1000000;
        long distance = 9000000000L;

        float percentage = 85.5f;
        double salary = 45000.75;

        char grade = 'A';
        boolean passed = true;

        System.out.println(age);
        System.out.println(marks);
        System.out.println(population);
        System.out.println(distance);
        System.out.println(percentage);
        System.out.println(salary);
        System.out.println(grade);
        System.out.println(passed);
    }
}
```

---

# 16. ⭐ Exam-Ready 10-Mark Answer

### Q. Explain different data types in Java.

**Answer:**

A data type specifies the type of value that a variable can store. It also determines the range of values and the operations that can be performed on the data. Java provides two major categories of data types: **primitive data types and reference data types**.

### 1. Primitive Data Types

Java provides eight primitive data types:

* **byte:** 8-bit signed integer.
* **short:** 16-bit signed integer.
* **int:** 32-bit signed integer.
* **long:** 64-bit signed integer.
* **float:** 32-bit single-precision floating-point type.
* **double:** 64-bit double-precision floating-point type.
* **char:** 16-bit Unicode character type.
* **boolean:** represents either `true` or `false`.

Example:

```java
int age = 21;
double percentage = 85.5;
char grade = 'A';
boolean passed = true;
```

### 2. Reference Data Types

Reference data types refer to objects or arrays rather than directly representing primitive values. Examples include **classes, arrays, interfaces, String, enums and records**.

Example:

```java
String name = "Prince";
int[] marks = {80, 85, 90};
```

Therefore, Java's data type system allows programmers to represent different kinds of data while providing type safety and efficient memory usage.

---

# 17. ⭐ Quick Revision Sheet

```text
                 JAVA DATA TYPES
                       │
              ┌────────┴────────┐
              │                 │
         PRIMITIVE          REFERENCE
              │                 │
       ┌──────┼───────┐         │
       │      │       │         ├── String
    Integer  Float   Others     ├── Array
       │      │       │         ├── Class
   byte      float   char       ├── Interface
   short     double  boolean    └── Enum/Record
   int
   long
```

### Memorize this table:

| Type      |                   Size | Key Point        |
| --------- | ---------------------: | ---------------- |
| `byte`    |                  8-bit | Small integer    |
| `short`   |                 16-bit | Small integer    |
| `int`     |                 32-bit | Common integer   |
| `long`    |                 64-bit | Large integer    |
| `float`   |                 32-bit | Single precision |
| `double`  |                 64-bit | Double precision |
| `char`    |                 16-bit | UTF-16 code unit |
| `boolean` | Not fixed by Java spec | `true` / `false` |

### 🔥 Must remember for exam

**8 primitive data types:**

> `byte → short → int → long → float → double → char → boolean`

And the two major categories:

> **Primitive + Reference**

This topic is sufficiently covered for typical **2-, 5-, and 10-mark semester questions**.


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


# Java Programming — Operators

**Operators** are one of the most important Java fundamentals because they are used in expressions, conditions, loops, calculations, and almost every Java program.

For semester exams, focus on **definition, types, examples, precedence/associativity, and important differences**.

---

# 1. What is an Operator?

An **operator** is a symbol that tells the Java compiler to perform a specific operation on one or more operands.

Example:

```java
int c = a + b;
```

Here:

* `a` and `b` → **operands**
* `+` → **operator**
* `a + b` → **expression**

---

# 2. Types of Operators in Java

Java operators can be classified as:

```text
                     Java Operators
                          |
       ┌──────────┬───────┼────────┬─────────┐
       ↓          ↓       ↓        ↓         ↓
 Arithmetic   Relational Logical Assignment Unary
                          |
                    ┌─────┴─────┐
                    ↓           ↓
                 Ternary   Bitwise/Shift
```

The major categories are:

1. **Arithmetic operators**
2. **Unary operators**
3. **Relational operators**
4. **Logical operators**
5. **Assignment operators**
6. **Bitwise operators**
7. **Shift operators**
8. **Conditional/Ternary operator**
9. **`instanceof` operator**

---

# 3. Arithmetic Operators

Arithmetic operators are used to perform mathematical operations.

| Operator | Operation      | Example |
| -------- | -------------- | ------- |
| `+`      | Addition       | `a + b` |
| `-`      | Subtraction    | `a - b` |
| `*`      | Multiplication | `a * b` |
| `/`      | Division       | `a / b` |
| `%`      | Remainder      | `a % b` |

### Example

```java
int a = 10;
int b = 3;

System.out.println(a + b); // 13
System.out.println(a - b); // 7
System.out.println(a * b); // 30
System.out.println(a / b); // 3
System.out.println(a % b); // 1
```

### Important: Integer Division

```java
int x = 10;
int y = 3;

System.out.println(x / y);
```

Output:

```text
3
```

Because both operands are integers, the fractional part is discarded.

But:

```java
System.out.println(10.0 / 3);
```

produces a floating-point result.

---

# 4. Unary Operators

Unary operators operate on **one operand**.

Important unary operators are:

```text
+   -   ++   --   !
```

### Unary plus and minus

```java
int x = 10;

System.out.println(+x); // 10
System.out.println(-x); // -10
```

---

# 5. Increment Operator `++`

`++` increases the value by 1.

There are two forms:

### Pre-increment

```java
++x;
```

First increments, then uses the value.

### Post-increment

```java
x++;
```

First uses the value, then increments.

Example:

```java
int x = 5;

int a = ++x;
```

Now:

```text
x = 6
a = 6
```

Post-increment:

```java
int x = 5;

int a = x++;
```

Now:

```text
a = 5
x = 6
```

### ⭐ Remember

> **Pre → Change first, use later**

> **Post → Use first, change later**

---

# 6. Decrement Operator `--`

`--` decreases the value by 1.

### Pre-decrement

```java
--x;
```

### Post-decrement

```java
x--;
```

Example:

```java
int x = 5;

int a = --x;
```

Result:

```text
x = 4
a = 4
```

---

# 7. Relational Operators

Relational operators compare two values.

| Operator | Meaning                  |
| -------- | ------------------------ |
| `==`     | Equal to                 |
| `!=`     | Not equal to             |
| `>`      | Greater than             |
| `<`      | Less than                |
| `>=`     | Greater than or equal to |
| `<=`     | Less than or equal to    |

The result is a `boolean`.

Example:

```java
int a = 10;
int b = 20;

System.out.println(a < b);
```

Output:

```text
true
```

Another:

```java
System.out.println(a == b);
```

Output:

```text
false
```

---

# 8. `==` vs `=`

This is extremely important.

### `=`

Assignment operator.

```java
int x = 10;
```

Means:

> Assign `10` to `x`.

### `==`

Equality comparison.

```java
x == 10
```

Means:

> Is `x` equal to `10`?

---

# 9. Logical Operators

Logical operators are primarily used with boolean expressions.

| Operator | Name        | Meaning                |            |                             |
| -------- | ----------- | ---------------------- | ---------- | --------------------------- |
| `&&`     | Logical AND | Both conditions true   |            |                             |
| `        |             | `                      | Logical OR | At least one condition true |
| `!`      | Logical NOT | Reverses boolean value |            |                             |

---

## Logical AND `&&`

```java
int age = 21;

System.out.println(age >= 18 && age <= 60);
```

Both conditions must be true.

```text
true && true   → true
true && false  → false
false && true  → false
false && false → false
```

---

## Logical OR `||`

At least one condition must be true.

```text
true || true   → true
true || false  → true
false || true  → true
false || false → false
```

---

## Logical NOT `!`

Reverses the boolean value.

```java
boolean x = true;

System.out.println(!x);
```

Output:

```text
false
```

---

# 10. Short-Circuit Operators

Java's:

```text
&&
||
```

are **short-circuit logical operators**.

For `&&`, if the left side is already `false`, Java does not evaluate the right side.

For `||`, if the left side is already `true`, Java does not evaluate the right side.

Example:

```java
int x = 10;

if (x > 20 && x / 0 > 1) {
    System.out.println("Hello");
}
```

The second condition is not evaluated because:

```text
x > 20 → false
```

Therefore, no division-by-zero occurs from the second operand.

---

# 11. Assignment Operators

Assignment operators assign values to variables.

### Basic assignment

```java
=
```

Example:

```java
int x = 10;
```

### Compound assignment operators

| Operator | Example    | Equivalent    |      |        |    |
| -------- | ---------- | ------------- | ---- | ------ | -- |
| `=`      | `x = 5`    | `x = 5`       |      |        |    |
| `+=`     | `x += 5`   | `x = x + 5`   |      |        |    |
| `-=`     | `x -= 5`   | `x = x - 5`   |      |        |    |
| `*=`     | `x *= 5`   | `x = x * 5`   |      |        |    |
| `/=`     | `x /= 5`   | `x = x / 5`   |      |        |    |
| `%=`     | `x %= 5`   | `x = x % 5`   |      |        |    |
| `&=`     | `x &= 5`   | `x = x & 5`   |      |        |    |
| `        | =`         | `x            | = 5` | `x = x | 5` |
| `^=`     | `x ^= 5`   | `x = x ^ 5`   |      |        |    |
| `<<=`    | `x <<= 2`  | `x = x << 2`  |      |        |    |
| `>>=`    | `x >>= 2`  | `x = x >> 2`  |      |        |    |
| `>>>=`   | `x >>>= 2` | `x = x >>> 2` |      |        |    |

Example:

```java
int x = 10;

x += 5;

System.out.println(x);
```

Output:

```text
15
```

---

# 12. Bitwise Operators

Bitwise operators work on the **individual bits** of integral values.

| Operator | Name               |            |
| -------- | ------------------ | ---------- |
| `&`      | Bitwise AND        |            |
| `        | `                  | Bitwise OR |
| `^`      | Bitwise XOR        |            |
| `~`      | Bitwise complement |            |

Example:

```java
int a = 5;  // 0101
int b = 3;  // 0011
```

### AND

```text
  0101
& 0011
------
  0001
```

Result:

```text
1
```

### OR

```text
  0101
| 0011
------
  0111
```

Result:

```text
7
```

### XOR

```text
  0101
^ 0011
------
  0110
```

Result:

```text
6
```

---

# 13. Shift Operators

Shift operators move bits left or right.

Java provides:

```text
<<
>>
>>>
```

### Left shift `<<`

```java
int x = 5;

System.out.println(x << 1);
```

Binary:

```text
0101 → 1010
```

Result:

```text
10
```

For appropriate positive values, left shifting by one is equivalent to multiplying by 2, subject to overflow considerations.

---

### Signed right shift `>>`

Moves bits to the right while preserving the sign bit.

```java
int x = 10;

System.out.println(x >> 1);
```

Result:

```text
5
```

---

### Unsigned right shift `>>>`

Fills the leftmost positions with zero bits.

This is especially important for negative integers.

---

# 14. Ternary / Conditional Operator

The ternary operator is a shorthand for a simple `if-else`.

### Syntax

```java
condition ? expression1 : expression2;
```

### Example

```java
int age = 20;

String result = (age >= 18) ? "Adult" : "Minor";
```

If the condition is true:

```text
result = "Adult"
```

Otherwise:

```text
result = "Minor"
```

### Equivalent `if-else`

```java
if (age >= 18)
    result = "Adult";
else
    result = "Minor";
```

---

# 15. `instanceof` Operator

The `instanceof` operator is used to test whether an object is an instance of a particular reference type.

Example:

```java
String name = "Prince";

System.out.println(name instanceof String);
```

Output:

```text
true
```

It produces a boolean result.

---

# 16. Operator Precedence

When an expression contains multiple operators, **operator precedence** determines which operation is performed first.

Example:

```java
int result = 10 + 5 * 2;
```

Multiplication has higher precedence than addition.

Therefore:

```text
5 * 2 = 10
10 + 10 = 20
```

So:

```text
result = 20
```

Not:

```text
30
```

---

# 17. Important Precedence Order

For the operators commonly used in semester questions, remember approximately:

```text
Highest
   ↓
()
[]
postfix ++ --
unary ++ -- + - !
* / %
+ -
< <= > >= instanceof
== !=
&
^
|
&&
||
? :
= += -= *= /= ...
   ↓
Lowest
```

**Important:** Parentheses can be used to explicitly control evaluation order.

Example:

```java
int x = (10 + 5) * 2;
```

Result:

```text
30
```

---

# 18. Associativity

When operators have the same precedence, **associativity** determines the order of evaluation.

For example:

```java
int x = 20 / 5 * 2;
```

`/` and `*` have the same precedence and are evaluated **left to right**:

```text
20 / 5 = 4
4 * 2 = 8
```

So:

```text
x = 8
```

Most binary arithmetic operators are left-associative, while assignment operators are right-associative.

Example:

```java
int a, b, c;

a = b = c = 10;
```

Evaluation proceeds from right to left for assignment.

---

# 19. Important: `&&` vs `&`

These are **not the same**.

### `&&`

Logical AND with short-circuit evaluation.

```java
true && false
```

### `&`

Can perform bitwise AND on integral operands, and can also perform non-short-circuit boolean AND when used with boolean operands.

Example:

```java
int a = 5;
int b = 3;

System.out.println(a & b);
```

Result:

```text
1
```

---

# 20. Important: `||` vs `|`

### `||`

Logical OR with short-circuit evaluation.

### `|`

Bitwise OR for integral values, and non-short-circuit boolean OR for boolean operands.

---

# 21. Operator Summary Table

| Category        | Operators            |                    |    |
| --------------- | -------------------- | ------------------ | -- |
| Arithmetic      | `+ - * / %`          |                    |    |
| Unary           | `+ - ++ -- ! ~`      |                    |    |
| Relational      | `== != > < >= <=`    |                    |    |
| Logical         | `&&                  |                    | !` |
| Assignment      | `= += -= *= /= %= &= | = ^= <<= >>= >>>=` |    |
| Bitwise         | `&                   | ^ ~`               |    |
| Shift           | `<< >> >>>`          |                    |    |
| Conditional     | `?:`                 |                    |    |
| Type comparison | `instanceof`         |                    |    |

---

# 22. ⭐ Exam-Ready 10-Mark Answer

### Q. Explain different types of operators in Java with suitable examples.

**Answer:**

An operator is a symbol that performs a specific operation on one or more operands. Java provides several types of operators for performing arithmetic, comparison, logical, bitwise, assignment, and other operations.

The major operators in Java are:

**1. Arithmetic operators:**
`+`, `-`, `*`, `/`, `%` are used for mathematical operations.

```java
int a = 10, b = 3;
System.out.println(a + b);
System.out.println(a % b);
```

**2. Unary operators:**
`+`, `-`, `++`, `--`, `!`, and `~` operate on a single operand.

```java
int x = 5;
System.out.println(++x);
```

**3. Relational operators:**
`==`, `!=`, `>`, `<`, `>=`, and `<=` compare two values and produce a boolean result.

```java
System.out.println(10 > 5); // true
```

**4. Logical operators:**
`&&`, `||`, and `!` are used to combine or negate boolean expressions.

```java
boolean result = (10 > 5) && (20 > 10);
```

**5. Assignment operators:**
`=`, `+=`, `-=`, `*=`, `/=`, etc. are used to assign or update values.

```java
int x = 10;
x += 5;
```

**6. Bitwise operators:**
`&`, `|`, `^`, and `~` operate on the bits of integral values.

**7. Shift operators:**
`<<`, `>>`, and `>>>` shift bits to the left or right.

**8. Conditional operator:**
`?:` is a ternary operator used as a compact form of `if-else`.

```java
int max = (a > b) ? a : b;
```

**9. `instanceof` operator:**
It checks whether an object is an instance of a particular reference type.

```java
name instanceof String
```

Thus, operators are fundamental components of Java expressions and are used to perform calculations, comparisons, logical operations, assignments, and bit-level operations.

---

# ⭐ Last-Minute Revision

### Learn these categories:

```text
Arithmetic    → + - * / %
Unary         → ++ -- ! ~
Relational    → == != > < >= <=
Logical       → && || !
Assignment    → = += -= *= /=
Bitwise       → & | ^ ~
Shift         → << >> >>>
Ternary       → ?:
instanceof    → type checking
```

### 🔥 Most important exam traps

1. **`=` vs `==`**

   * `=` → assignment
   * `==` → equality comparison

2. **`++x` vs `x++`**

   * `++x` → increment first
   * `x++` → use first, increment later

3. **`&&` vs `&`**

   * `&&` → logical AND + short-circuit
   * `&` → bitwise AND / non-short-circuit boolean AND

4. **`||` vs `|`**

   * `||` → logical OR + short-circuit
   * `|` → bitwise OR / non-short-circuit boolean OR

5. **`/` with integers**

   ```java
   10 / 3 = 3
   ```

6. **Precedence**

   ```java
   10 + 5 * 2 = 20
   ```

For the semester exam, **operator precedence + pre/post increment + logical vs bitwise operators** deserve extra attention because they are particularly useful for output-based questions.


# Java Programming — Type Conversion and Casting

This is an **important Java exam topic**, especially for **output-based questions**. You should understand the difference between **implicit conversion (widening)** and **explicit casting (narrowing)** very clearly.

---

# 1. What is Type Conversion?

**Type conversion** is the process of converting a value from one data type to another data type.

For example:

```java
int x = 10;
double y = x;
```

Here, the `int` value `10` is converted into a `double` value.

Java supports type conversion between compatible primitive types, and casting is used when an explicit conversion is required.

---

# 2. Why is Type Conversion Required?

Type conversion is useful when:

* Performing operations involving different data types.
* Assigning a value of one compatible type to another.
* Passing values to methods requiring another type.
* Controlling precision or representation.
* Working with expressions containing different numeric types.

---

# 3. Types of Type Conversion

There are two major forms for primitive numeric types:

```text id="7o2v5w"
             Type Conversion
                   |
          ┌────────┴────────┐
          ↓                 ↓
     Widening            Narrowing
     Conversion          Conversion
     (Implicit)           (Explicit)
```

---

# 4. Widening Conversion

**Widening conversion** means converting a value from a type with a smaller range/precision representation to a compatible type with a larger range.

It is generally performed **automatically by Java**, so explicit casting is normally not required.

### Example

```java
int x = 100;
double y = x;
```

Here:

```text
int → double
```

Java automatically converts `x` to `double`.

### Output

```java
System.out.println(y);
```

Output:

```text
100.0
```

---

# 5. Widening Conversion Order

For numeric primitive types, the commonly remembered widening path is:

```text id="j7o0qz"
byte
  ↓
short
  ↓
int
  ↓
long
  ↓
float
  ↓
double
```

`char` can also undergo widening conversion to `int`, `long`, `float`, or `double`.

For example:

```java
char ch = 'A';
int x = ch;
```

Since the Unicode value of `'A'` is 65:

```text id="t4r0yb"
x = 65
```

### Important

Widening is generally safe with respect to **range**, but converting an integer to `float` or `double` can still lose some exact integer precision for sufficiently large values.

---

# 6. Example of Widening Conversion

```java
public class Main {
    public static void main(String[] args) {

        byte a = 10;
        int b = a;

        int x = 100;
        long y = x;

        long p = 5000;
        double q = p;

        System.out.println(b);
        System.out.println(y);
        System.out.println(q);
    }
}
```

No explicit cast is required for these conversions.

---

# 7. Narrowing Conversion

**Narrowing conversion** means converting a value from a wider type to a narrower type.

It may result in:

* Loss of range
* Loss of precision
* Different numeric value due to overflow

Therefore, Java generally requires **explicit casting**.

### Example

```java
double x = 10.75;
int y = (int) x;
```

Here:

```text
double → int
```

The `(int)` is an **explicit cast**.

Output:

```text
10
```

The fractional part `.75` is discarded.

---

# 8. Syntax of Casting

The general syntax is:

```java
(targetType) value
```

Example:

```java
double x = 25.75;

int y = (int) x;
```

Here:

```text
(int) → cast operator
x     → value being converted
```

---

# 9. Widening vs Narrowing

| Widening                          | Narrowing                      |
| --------------------------------- | ------------------------------ |
| Smaller → wider compatible type   | Wider → narrower type          |
| Usually automatic                 | Usually requires explicit cast |
| Generally preserves numeric range | May lose range/precision       |
| Example: `int → long`             | Example: `double → int`        |
| No cast normally required         | Cast required                  |

### Easy memory trick:

> **Widening → automatic**

> **Narrowing → casting**

---

# 10. Example of Data Loss

Consider:

```java
double x = 99.99;
int y = (int) x;

System.out.println(y);
```

Output:

```text
99
```

The decimal portion is lost.

This is called **loss of precision/information**.

---

# 11. Narrowing Can Cause Overflow

Consider:

```java
int x = 130;

byte y = (byte) x;

System.out.println(y);
```

`byte` can store only:

```text
-128 to 127
```

Therefore, `130` cannot be represented directly as a `byte`.

After narrowing conversion, the result is:

```text
-126
```

This happens because Java's signed integer narrowing conversion retains the low-order bits according to the target type's representation.

### Exam point

> **Narrowing conversion can change the value if the original value cannot be represented by the target type.**

---

# 12. Character Casting

Characters can also participate in numeric conversions.

Example:

```java
char ch = 'A';

int x = ch;

System.out.println(x);
```

Output:

```text
65
```

Reverse conversion:

```java
int x = 66;

char ch = (char) x;

System.out.println(ch);
```

Output:

```text
B
```

---

# 13. Type Conversion in Expressions

Java also performs **numeric promotion** when arithmetic expressions contain different numeric types.

Example:

```java
int a = 10;
double b = 5.5;

double result = a + b;
```

The `int` value is promoted to `double`.

Conceptually:

```text
int + double
     ↓
double + double
     ↓
double
```

Therefore:

```text
result = 15.5
```

---

# 14. Important Rule: `byte`, `short`, and `char`

This is a **very important semester-exam point**.

When arithmetic is performed on `byte`, `short`, or `char`, Java generally promotes them to **`int`** before performing the operation.

Example:

```java
byte a = 10;
byte b = 20;

byte c = a + b;   // Compile-time error
```

Why?

Because:

```text
byte + byte → int
```

So you need:

```java
byte c = (byte)(a + b);
```

or:

```java
int c = a + b;
```

---

# 15. Example of Numeric Promotion

```java
byte a = 10;
byte b = 20;

int c = a + b;

System.out.println(c);
```

Output:

```text
30
```

The result of the addition is an `int`.

---

# 16. `int` and `long`

Consider:

```java
int a = 10;
long b = 20;

long c = a + b;
```

Here:

```text
int + long → long
```

So the result is a `long`.

---

# 17. `int` and `float`

```java
int a = 10;
float b = 5.5f;

float c = a + b;
```

Conceptually:

```text
int + float → float
```

---

# 18. `int` and `double`

```java
int a = 10;
double b = 5.5;

double c = a + b;
```

Conceptually:

```text
int + double → double
```

---

# 19. Important Difference: Conversion vs Casting

| Type Conversion                                   | Type Casting                                                       |
| ------------------------------------------------- | ------------------------------------------------------------------ |
| General process of changing one type into another | Explicitly instructing Java to convert a value to a specified type |
| Can happen automatically                          | Explicitly written by programmer                                   |
| Includes widening conversion                      | Commonly used for narrowing conversion                             |
| Example: `int → long`                             | Example: `(int) 10.5`                                              |

Example:

### Automatic conversion

```java
int x = 10;
double y = x;
```

### Explicit casting

```java
double x = 10.5;
int y = (int) x;
```

---

# 20. Important Output-Based Questions

### Question 1

```java
int x = 10;
double y = 3.5;

System.out.println(x + y);
```

### Answer

```text
13.5
```

Because:

```text
int + double → double
```

---

### Question 2

```java
double x = 10.99;
int y = (int)x;

System.out.println(y);
```

### Answer

```text
10
```

---

### Question 3

```java
int x = 10;
int y = 3;

System.out.println(x / y);
```

### Answer

```text
3
```

Both operands are integers.

---

### Question 4

```java
int x = 10;
int y = 3;

System.out.println((double)x / y);
```

### Answer

```text
3.3333333333333335
```

Because `x` is explicitly converted to `double` before division.

---

# 21. Reference Type Casting — Important Advanced Point

Java also has **reference type casting**.

Suppose:

```java
class Animal {
}

class Dog extends Animal {
}
```

Then:

```java
Animal a = new Dog();
```

This is **upcasting**:

```text
Dog → Animal
```

It is generally automatic because `Dog` is an `Animal`.

---

## Downcasting

Going from a superclass reference to a subclass reference requires an explicit cast:

```java
Animal a = new Dog();

Dog d = (Dog) a;
```

This is called **downcasting**.

But the cast must be valid at runtime. Otherwise, Java throws `ClassCastException`.

Example:

```java
Animal a = new Animal();

Dog d = (Dog) a;  // Runtime ClassCastException
```

This is different from primitive numeric casting, but it is useful to know if your syllabus includes **OOP/reference casting**.

---

# 22. Exam-Ready 10-Mark Answer

### Q. Explain type conversion and type casting in Java with examples.

**Answer:**

Type conversion is the process of converting a value from one data type to another. Java supports automatic and explicit conversion between compatible data types.

There are two major types of primitive numeric conversion:

**1. Widening Conversion:**
Widening conversion converts a value from a narrower type to a wider compatible type. It is generally performed automatically by Java.

```java
int x = 100;
double y = x;
```

Here, the `int` value is automatically converted to `double`.

The commonly remembered numeric widening order is:

```text
byte → short → int → long → float → double
```

`char` can also be widened to `int`, `long`, `float`, or `double`.

**2. Narrowing Conversion:**
Narrowing conversion converts a value from a wider type to a narrower type. It generally requires explicit casting because data or precision may be lost.

```java
double x = 10.75;
int y = (int)x;
```

The result stored in `y` is `10`.

The syntax of explicit casting is:

```java
(targetType) value
```

Java also performs **numeric promotion** in expressions. For example, `byte`, `short`, and `char` are generally promoted to `int` during arithmetic operations.

```java
byte a = 10;
byte b = 20;
int c = a + b;
```

Thus, widening conversion is generally automatic, whereas narrowing conversion generally requires explicit casting and may result in loss of precision or range.

---

# ⭐ Last-Minute Revision

### The most important diagram:

```text
        TYPE CONVERSION
              │
       ┌──────┴──────┐
       ↓             ↓
   WIDENING       NARROWING
   Automatic      Explicit cast
       │             │
 int → long      double → int
       │             │
 Safe range      Possible loss
```

### Remember these examples:

```java
int a = 10;
long b = a;              // Widening
```

```java
double x = 10.5;
int y = (int)x;          // Narrowing
```

```java
byte a = 10;
byte b = 20;
int c = a + b;           // byte + byte → int
```

### 🔥 Five exam points to memorize

1. **Widening → automatic**
2. **Narrowing → explicit cast**
3. **Casting syntax → `(type)value`**
4. **Narrowing may cause loss of precision/range**
5. **`byte`, `short`, and `char` generally promote to `int` in arithmetic expressions**

These points plus the output examples are enough to handle the usual **2-, 5-, and 10-mark questions** on type conversion and casting.



## Enumerated Types (`enum`) in Java

**Enumerated type** is a special data type in Java used to represent a **fixed set of named constants**.

For example, if a variable can have only four directions — `NORTH`, `SOUTH`, `EAST`, `WEST` — an `enum` is more appropriate than using arbitrary integers or strings.

---

### 1. Definition

An **enumeration (`enum`)** is a user-defined reference type that contains a **fixed set of predefined constants**.

**Syntax:**

```java
enum EnumName {
    CONSTANT1,
    CONSTANT2,
    CONSTANT3
}
```

**Example:**

```java
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
}
```

Here, `Day` is an enumerated type and each day is an **enum constant**.

---

## 2. Declaring and Using an Enum

```java
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
}

public class Main {
    public static void main(String[] args) {

        Day today = Day.MONDAY;

        System.out.println(today);
    }
}
```

**Output:**

```text
MONDAY
```

### Important

We access an enum constant using:

```java
EnumName.CONSTANT
```

For example:

```java
Day.MONDAY
```

---

## 3. Why Use Enum?

Suppose we write:

```java
String day = "Monday";
```

There is nothing preventing:

```java
day = "Mnday";
```

This creates a typo/problem.

With enum:

```java
Day day = Day.MONDAY;
```

Only valid constants belonging to `Day` can be assigned.

Therefore, enums provide:

* Type safety
* Better readability
* Fixed set of allowed values
* Easier maintenance
* Useful in `switch` statements

---

# 4. Enum with `switch`

Enums are commonly used with `switch`.

```java
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
}

public class Main {
    public static void main(String[] args) {

        Day day = Day.MONDAY;

        switch(day) {
            case MONDAY:
                System.out.println("Start of week");
                break;

            case TUESDAY:
                System.out.println("Tuesday");
                break;

            case WEDNESDAY:
                System.out.println("Wednesday");
                break;
        }
    }
}
```

**Output:**

```text
Start of week
```

---

# 5. Enum with Variables and Methods

Java enums are more powerful than simple constants. An enum can contain:

* Variables
* Constructors
* Methods
* Constant-specific behavior

Example:

```java
enum Level {
    LOW,
    MEDIUM,
    HIGH
}

public class Main {
    public static void main(String[] args) {

        Level level = Level.HIGH;

        System.out.println(level);
    }
}
```

---

# 6. Enum Methods

Java provides some useful built-in methods for enums.

### `values()`

Returns all enum constants.

```java
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
}

public class Main {
    public static void main(String[] args) {

        for(Day d : Day.values()) {
            System.out.println(d);
        }
    }
}
```

Output:

```text
MONDAY
TUESDAY
WEDNESDAY
```

---

### `valueOf()`

Converts a matching string into an enum constant.

```java
Day d = Day.valueOf("MONDAY");

System.out.println(d);
```

Output:

```text
MONDAY
```

If the string doesn't exactly match an enum constant, `valueOf()` throws `IllegalArgumentException`.

---

### `ordinal()`

Returns the **zero-based position** of an enum constant.

```java
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
}

System.out.println(Day.MONDAY.ordinal());
System.out.println(Day.TUESDAY.ordinal());
```

Output:

```text
0
1
```

⚠️ **Exam point:** Don't use `ordinal()` as a permanent business/database ID because changing the declaration order changes the ordinal values.

---

# 7. Enum with Constructor

An enum can have a constructor.

```java
enum Size {

    SMALL(10),
    MEDIUM(20),
    LARGE(30);

    private int value;

    Size(int value) {
        this.value = value;
    }

    public int getValue() {
        return value;
    }
}

public class Main {
    public static void main(String[] args) {

        System.out.println(Size.LARGE.getValue());
    }
}
```

Output:

```text
30
```

### Important Point

Enum constructors are **implicitly private**. You cannot create enum objects using:

```java
new Size();
```

---

# 8. Important Characteristics of Enum

| Feature                  | Enum                   |
| ------------------------ | ---------------------- |
| Represents               | Fixed set of constants |
| Type                     | Reference type         |
| Type-safe                | Yes                    |
| Can have methods         | Yes                    |
| Can have variables       | Yes                    |
| Can have constructors    | Yes                    |
| Can be used with switch  | Yes                    |
| Can create using `new`   | No                     |
| Can implement interfaces | Yes                    |
| Can extend another class | No                     |

### Important Java rule

All enum types implicitly extend:

```java
java.lang.Enum
```

Therefore, an enum cannot extend another class.

However, an enum **can implement interfaces**.

---

# 9. Enum vs `final` Constants

### Using constants

```java
final int RED = 1;
final int GREEN = 2;
final int BLUE = 3;
```

### Using enum

```java
enum Color {
    RED,
    GREEN,
    BLUE
}
```

Enum is generally better when you have a **fixed logical set of related values**, because it provides type safety and clearer semantics.

---

# 10. Advantages of Enumerated Types

1. **Type Safety**
   Only valid enum constants can be assigned.

2. **Readability**
   `Day.MONDAY` is clearer than `1`.

3. **Maintainability**
   Related constants are grouped together.

4. **Useful with switch**
   Enums work naturally with `switch`.

5. **Can contain behavior**
   Enums can have constructors, fields and methods.

6. **Prevents arbitrary values**
   A variable of an enum type cannot simply contain an unrelated integer or string.

---

# 11. Applications of Enum

Enums are useful for representing fixed categories such as:

```text
Days
Months
Directions
Traffic signals
Order status
User roles
Payment status
Difficulty levels
```

Example:

```java
enum OrderStatus {
    PLACED,
    SHIPPED,
    DELIVERED,
    CANCELLED
}
```

---

# ⭐ Exam-Ready 10-Mark Answer

### Enumerated Types in Java

An **enumerated type (`enum`)** is a special reference type in Java that represents a fixed set of named constants. It is useful when a variable should have only a predefined set of values.

**Syntax:**

```java
enum EnumName {
    CONSTANT1,
    CONSTANT2,
    CONSTANT3
}
```

Example:

```java
enum Direction {
    NORTH,
    SOUTH,
    EAST,
    WEST
}

public class Main {
    public static void main(String[] args) {

        Direction d = Direction.NORTH;

        System.out.println(d);
    }
}
```

Output:

```text
NORTH
```

Java provides several methods for enums, such as `values()`, `valueOf()` and `ordinal()`. Enums can also contain constructors, fields and methods. They can implement interfaces but cannot extend another class because every enum implicitly extends `java.lang.Enum`.

Enums provide **type safety, readability and maintainability** and are commonly used for fixed sets of values such as days, directions, order status and user roles.

---

## 🔥 Last-Minute Revision

Remember these 6 points:

```text
enum → fixed set of constants
Day.MONDAY → accessing constant
values() → all constants
valueOf() → String → enum constant
ordinal() → zero-based position
Enum → cannot use new
```

### Most likely exam questions

**2 marks:**

* Define enumerated type in Java.
* What is an enum?
* Give syntax of enum.

**5 marks:**

* Explain enum with example.
* Explain important enum methods.

**10 marks:**

* Explain enumerated types in Java with syntax, example, methods, advantages and applications.


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


# Arrays in Java

An **array** is one of the most important topics in Java and is frequently asked in university exams.

---

## 1. Definition of Array

An **array** is a fixed-size collection of elements of the **same data type**, stored and accessed using an index.

For example:

```java
int[] marks = {80, 75, 90, 85, 70};
```

Here:

* `marks` → array reference variable
* `int` → data type of elements
* `5` → number of elements
* Index starts from **0**
* Last index = `length - 1`

```text
Index:    0    1    2    3    4
         -------------------------
Marks:   80   75   90   85   70
```

So:

```java
marks[0]  → 80
marks[2]  → 90
marks[4]  → 70
```

---

# 2. Characteristics of Arrays

Important characteristics:

1. An array stores **multiple values** under one variable name.
2. All elements have the **same component type**.
3. Array indexing starts from **0**.
4. Array size is **fixed after creation**.
5. Arrays are **objects in Java**.
6. Arrays are dynamically allocated using `new`.
7. The length can be obtained using the `length` field.
8. Invalid index access causes `ArrayIndexOutOfBoundsException`.

---

# 3. Declaring an Array

There are two common declaration styles.

### Method 1

```java
int[] arr;
```

### Method 2

```java
int arr[];
```

The first style is generally preferred because it clearly indicates that the variable is an array of `int`.

At this point, the array has **not been created yet**.

---

# 4. Creating an Array

Use the `new` keyword.

```java
int[] arr = new int[5];
```

This creates an array capable of storing **5 integers**.

```text
Index:    0    1    2    3    4
         -------------------------
Value:    0    0    0    0    0
```

For an `int` array, elements initially have the default value `0`.

---

# 5. Declaration, Creation and Initialization

These are three related but distinct operations.

### Declaration

```java
int[] arr;
```

### Creation

```java
arr = new int[5];
```

### Initialization

```java
arr[0] = 10;
arr[1] = 20;
```

They can also be combined:

```java
int[] arr = new int[5];
```

---

# 6. Array Initialization

You can initialize an array directly.

```java
int[] marks = {80, 90, 70, 85, 95};
```

This automatically creates an array of size `5`.

Another form:

```java
int[] marks = new int[]{80, 90, 70, 85, 95};
```

Both are valid.

---

# 7. Accessing Array Elements

Array elements are accessed using their index.

```java
int[] marks = {80, 90, 70};

System.out.println(marks[0]);
System.out.println(marks[1]);
System.out.println(marks[2]);
```

Output:

```text
80
90
70
```

### Important

This is invalid:

```java
marks[3]
```

because valid indices are:

```text
0, 1, 2
```

It causes:

```text
ArrayIndexOutOfBoundsException
```

---

# 8. Modifying Array Elements

Array elements can be changed using their index.

```java
int[] marks = {80, 90, 70};

marks[1] = 95;

System.out.println(marks[1]);
```

Output:

```text
95
```

The array becomes:

```text
80  95  70
```

---

# 9. Array `length`

Java provides the `length` field to find the size of an array.

```java
int[] arr = {10, 20, 30, 40, 50};

System.out.println(arr.length);
```

Output:

```text
5
```

### Important distinction

For arrays:

```java
arr.length
```

For `String`:

```java
str.length()
```

For collections such as `ArrayList`:

```java
list.size()
```

This distinction is frequently tested.

---

# 10. Traversing an Array Using `for`

The most common way to process all elements is a `for` loop.

```java
int[] marks = {80, 90, 70, 85, 95};

for (int i = 0; i < marks.length; i++) {
    System.out.println(marks[i]);
}
```

Output:

```text
80
90
70
85
95
```

### Why `i < marks.length`?

If the array has 5 elements:

```text
length = 5
```

Valid indexes are:

```text
0 to 4
```

Therefore:

```java
i < marks.length
```

is correct.

---

# 11. Enhanced `for` Loop

Java provides a simpler way to traverse an array.

```java
int[] marks = {80, 90, 70, 85, 95};

for (int mark : marks) {
    System.out.println(mark);
}
```

Here:

```java
mark
```

takes each element one by one.

### When to use?

Use enhanced `for` when you need the **elements**, but don't need their indices.

---

# 12. Default Values of Arrays

When an array is created using `new`, its elements receive default values.

| Data Type      | Default Value |
| -------------- | ------------- |
| `byte`         | `0`           |
| `short`        | `0`           |
| `int`          | `0`           |
| `long`         | `0L`          |
| `float`        | `0.0f`        |
| `double`       | `0.0d`        |
| `char`         | `'\u0000'`    |
| `boolean`      | `false`       |
| Reference type | `null`        |

Example:

```java
int[] arr = new int[3];

System.out.println(arr[0]);
```

Output:

```text
0
```

---

# 13. Array of Objects

Arrays can also store **references to objects**.

```java
String[] names = {"Prince", "Rahul", "Aman"};
```

Here, `names` is an array whose elements are references to `String` objects.

Similarly:

```java
Student[] students = new Student[5];
```

This creates an array capable of holding references to `Student` objects. It does **not** create five `Student` objects automatically; the elements initially contain `null`.

---

# 14. Multidimensional Arrays

Java supports arrays whose elements are themselves arrays.

The most common example is a **two-dimensional array**.

```java
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};
```

It can be visualized as:

```text
        Column
        0  1  2
      ----------
Row 0 | 1  2  3
Row 1 | 4  5  6
Row 2 | 7  8  9
```

Access:

```java
System.out.println(matrix[1][2]);
```

Output:

```text
6
```

Because:

```text
matrix[1][2]
     ↑  ↑
    row column
```

---

# 15. Traversing a 2D Array

Using nested `for` loops:

```java
int[][] matrix = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

for (int i = 0; i < matrix.length; i++) {

    for (int j = 0; j < matrix[i].length; j++) {
        System.out.print(matrix[i][j] + " ");
    }

    System.out.println();
}
```

Output:

```text
1 2 3
4 5 6
7 8 9
```

### Important

For a 2D array:

```java
matrix.length
```

gives the number of rows.

```java
matrix[i].length
```

gives the number of columns in row `i`.

---

# 16. Jagged Arrays

Java's multidimensional arrays are actually **arrays of arrays**, so different rows can have different lengths.

Example:

```java
int[][] arr = {
    {1, 2},
    {3, 4, 5},
    {6}
};
```

This is called a **jagged array**.

```text
Row 0 → 1  2
Row 1 → 3  4  5
Row 2 → 6
```

Unlike a mathematical rectangular matrix, each row can have a different size.

---

# 17. Passing Arrays to Methods

Arrays can be passed as arguments to methods.

```java
public static void printArray(int[] arr) {

    for (int x : arr) {
        System.out.println(x);
    }
}

public static void main(String[] args) {

    int[] numbers = {10, 20, 30};

    printArray(numbers);
}
```

This is very important in Java programming and DSA.

---

# 18. Returning an Array from a Method

A method can also return an array.

```java
public static int[] getNumbers() {

    return new int[]{10, 20, 30};
}
```

Usage:

```java
int[] arr = getNumbers();
```

---

# 19. Array is an Object in Java

This is an important theoretical point.

Even though arrays have special syntax, **arrays are objects in Java**.

For example:

```java
int[] arr = new int[5];
```

The array object is created on the heap, and `arr` holds a reference to it.

Conceptually:

```text
arr
 |
 v
+-------------------+
| 0 | 0 | 0 | 0 | 0 |
+-------------------+
```

---

# 20. Advantages of Arrays

1. **Store multiple values** under one variable name.
2. **Fast indexed access** — accessing `arr[i]` is generally O(1).
3. Simple and efficient for fixed-size data.
4. Easy to traverse using loops.
5. Useful as the foundation for many data structures and algorithms.

---

# 21. Limitations of Arrays

1. **Fixed size** — cannot directly grow or shrink after creation.
2. Stores elements of a single component type.
3. Insertion/deletion in the middle can require shifting elements.
4. Less flexible than dynamic collections such as `ArrayList`.

---

# 22. Array vs ArrayList

| Array                        | ArrayList                                               |
| ---------------------------- | ------------------------------------------------------- |
| Fixed size                   | Dynamically resizable                                   |
| Supports primitives directly | Stores objects/reference types; primitives use wrappers |
| `arr.length`                 | `list.size()`                                           |
| Generally lower overhead     | More flexible                                           |
| Can be multidimensional      | Supports nested lists                                   |
| Example: `int[]`             | Example: `ArrayList<Integer>`                           |

For your **DSA**, both are important.

---

# ⭐ Exam-Ready 10-Mark Answer

### Array in Java

An **array is a fixed-size object that stores a collection of elements of the same component type**. Each element is identified using an integer index, starting from zero.

### Declaration

```java
int[] arr;
```

### Creation

```java
arr = new int[5];
```

### Initialization

```java
int[] marks = {80, 90, 70, 85, 95};
```

Elements are accessed using their index:

```java
System.out.println(marks[0]);
```

The size of an array is obtained using the `length` field:

```java
System.out.println(marks.length);
```

Arrays can be traversed using a normal `for` loop or enhanced `for` loop:

```java
for (int i = 0; i < marks.length; i++) {
    System.out.println(marks[i]);
}
```

Java also supports multidimensional and jagged arrays:

```java
int[][] matrix = {
    {1, 2},
    {3, 4}
};
```

Arrays provide efficient indexed access and are useful for storing fixed-size collections of data. However, their size cannot be changed after creation.

---

# 🔥 Last-Minute Revision

```text
Array
  ↓
Fixed-size collection
  ↓
Same component type
  ↓
Index starts from 0
  ↓
Last index = length - 1
  ↓
arr.length → size
```

### Must remember

**Declaration**

```java
int[] arr;
```

**Creation**

```java
arr = new int[5];
```

**Initialization**

```java
int[] arr = {10, 20, 30};
```

**Access**

```java
arr[0]
```

**Size**

```java
arr.length
```

**2D Array**

```java
int[][] matrix;
```

**Invalid index**

```java
ArrayIndexOutOfBoundsException
```

**Most important exam line:**

> **An array in Java is an object representing a fixed-size sequence of elements of the same component type, accessed using zero-based integer indices.**


# Simple Java – Stand-Alone Programs

A **stand-alone Java program** is a Java application that can run independently on a computer using the **Java Virtual Machine (JVM)**. It does not require a web browser or another application to execute.

For university exams, you should understand the **basic structure, compilation, execution, and examples** of stand-alone Java programs.

---

## 1. Definition

A **stand-alone Java program** is a Java program that contains a `main()` method and can be executed independently by the JVM.

The standard entry point is:

```java
public static void main(String[] args)
```

When the program is executed, the JVM starts execution from this method.

---

# 2. Basic Structure of a Java Stand-Alone Program

```java
class Hello {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}
```

### Output

```text
Hello World
```

### Explanation

| Part                   | Meaning                                                  |
| ---------------------- | -------------------------------------------------------- |
| `class Hello`          | Defines a class named `Hello`                            |
| `public`               | Makes the method accessible to JVM                       |
| `static`               | Allows JVM to call the method without creating an object |
| `void`                 | Method does not return a value                           |
| `main()`               | Starting point of program execution                      |
| `String[] args`        | Stores command-line arguments                            |
| `System.out.println()` | Prints output                                            |

---

# 3. Why is `main()` Important?

The JVM needs a predefined entry point from which execution can begin.

```java
public static void main(String[] args)
```

is the standard entry point for a conventional Java application.

For example:

```java
class Test {
    public static void main(String[] args) {

        System.out.println("Java Program");
    }
}
```

Execution starts from:

```java
main()
```

---

# 4. Compilation and Execution

A Java stand-alone program generally goes through these steps:

```text
Java Source Code
      |
      | javac
      ↓
Bytecode (.class)
      |
      | JVM
      ↓
Program Execution
```

Suppose the source file is:

```text
Hello.java
```

### Step 1: Write the program

```java
class Hello {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}
```

### Step 2: Compile

```bash
javac Hello.java
```

This produces:

```text
Hello.class
```

### Step 3: Run

```bash
java Hello
```

Output:

```text
Hello World
```

### Important exam point

When running the program, normally write:

```bash
java Hello
```

**not**

```bash
java Hello.class
```

The `java` launcher is given the class name, not the `.class` filename.

---

# 5. Simple Addition Program

```java
class Addition {
    public static void main(String[] args) {

        int a = 10;
        int b = 20;

        int sum = a + b;

        System.out.println("Sum = " + sum);
    }
}
```

Output:

```text
Sum = 30
```

---

# 6. Taking Input from User

A stand-alone Java program can take input using `Scanner`.

```java
import java.util.Scanner;

class InputExample {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your age: ");
        int age = sc.nextInt();

        System.out.println("Age = " + age);

        sc.close();
    }
}
```

### Important components

```java
import java.util.Scanner;
```

imports the `Scanner` class.

```java
Scanner sc = new Scanner(System.in);
```

creates a `Scanner` object.

```java
sc.nextInt();
```

reads an integer.

---

# 7. Stand-Alone Program Using Command-Line Arguments

Java programs can receive values through `String[] args`.

Example:

```java
class CommandLine {
    public static void main(String[] args) {

        System.out.println("Hello " + args[0]);
    }
}
```

Compile:

```bash
javac CommandLine.java
```

Run:

```bash
java CommandLine Prince
```

Output:

```text
Hello Prince
```

Here:

```java
args[0]
```

contains:

```text
Prince
```

### Important

Command-line arguments are initially stored as **strings**.

If you want an integer:

```java
int n = Integer.parseInt(args[0]);
```

---

# 8. Simple Decision-Making Program

```java
class CheckNumber {
    public static void main(String[] args) {

        int n = 10;

        if (n > 0) {
            System.out.println("Positive number");
        } else {
            System.out.println("Not positive");
        }
    }
}
```

Output:

```text
Positive number
```

This demonstrates that stand-alone programs can use normal Java control-flow statements.

---

# 9. Simple Loop Program

```java
class Numbers {
    public static void main(String[] args) {

        for (int i = 1; i <= 5; i++) {
            System.out.println(i);
        }
    }
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

---

# 10. Simple Array Program

```java
class ArrayExample {
    public static void main(String[] args) {

        int[] numbers = {10, 20, 30, 40, 50};

        for (int n : numbers) {
            System.out.println(n);
        }
    }
}
```

Output:

```text
10
20
30
40
50
```

---

# 11. Important Features of Stand-Alone Java Programs

### 1. Independent Execution

They can execute independently on a system with a compatible Java runtime.

### 2. Platform Independent

Java source code is compiled into **bytecode**, which can run on different platforms through their JVM implementations.

### 3. Object-Oriented

Java programs are organized around classes and objects, although simple programs can contain only a class with a `main()` method.

### 4. Secure

Java provides features such as type safety, bytecode verification and controlled memory access.

### 5. Robust

Features such as exception handling and automatic garbage collection contribute to robustness.

### 6. Portable

Java bytecode is designed to be portable across platforms with compatible JVMs.

---

# 12. Stand-Alone Program vs Applet

This comparison can be useful in exams because Java historically supported applets.

| Stand-Alone Program               | Applet                                              |
| --------------------------------- | --------------------------------------------------- |
| Runs independently                | Historically embedded in another environment        |
| Has `main()` as entry point       | Uses applet lifecycle methods                       |
| Can run from command line/IDE     | Historically run through browser/applet viewer      |
| Suitable for general applications | Used historically for web-based interactive content |
| Still relevant                    | Applets are obsolete in modern Java/web browsers    |

**Important:** Java applets are a historical technology and are not supported by modern web browsers.

---

# ⭐ Exam-Ready 10-Mark Answer

### Stand-Alone Java Programs

A **stand-alone Java program** is an independent Java application that can be executed using the JVM. A conventional stand-alone program contains the `main()` method, which serves as the starting point of execution.

Example:

```java
class Hello {
    public static void main(String[] args) {
        System.out.println("Hello World");
    }
}
```

The program is first saved with a `.java` extension. It is compiled using the Java compiler:

```bash
javac Hello.java
```

The compiler generates bytecode in the form of a `.class` file. The program is then executed using:

```bash
java Hello
```

The JVM loads and executes the bytecode.

The basic execution process is:

```text
Source Code (.java)
       ↓
Java Compiler (javac)
       ↓
Bytecode (.class)
       ↓
JVM
       ↓
Execution
```

Stand-alone Java programs can use variables, operators, arrays, control-flow statements, classes, objects, methods, input/output and exception handling. They are portable because Java bytecode can execute on different platforms having compatible JVM implementations.

---

# 🔥 Last-Minute Revision

Remember:

```text
Stand-alone Java Program
        ↓
Independent application
        ↓
main() → starting point
        ↓
javac → compilation
        ↓
.class → bytecode
        ↓
JVM → execution
```

### Most important commands

```bash
javac Hello.java
java Hello
```

### Most important statement

```java
public static void main(String[] args)
```

### Likely exam questions

**2 marks**

* What is a stand-alone Java program?
* What is the role of `main()`?

**5 marks**

* Explain the structure of a simple Java stand-alone program.
* Explain compilation and execution of a Java program.

**10 marks**

* Explain stand-alone Java programs with structure, example, compilation, execution and features.


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
