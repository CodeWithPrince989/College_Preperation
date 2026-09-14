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
