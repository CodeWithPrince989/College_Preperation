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
