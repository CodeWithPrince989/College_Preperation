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
