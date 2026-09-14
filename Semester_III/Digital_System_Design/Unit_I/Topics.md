Yes. This is a **Digital Logic / Digital Electronics** unit, completely separate from Java. I’ll treat this as **Unit 1 exam preparation** and make the notes at a **9+ SGPA level**: concept → formulas → truth tables → methods → solved examples → exam points.

From your syllabus image, Unit 1 contains:

1. Logic Simplification

   * Boolean Algebra
   * Realization using Gates
   * K-Maps up to 6 variables
   * Quine–McCluskey Method
   * VEM technique
   * Signed Number Representation
   * Binary Arithmetic
   * Code Conversion
2. Combinational Logic Design

   * Comparators
   * Multiplexers / Demultiplexers
   * Encoder / Decoder
   * Parallel Adders
   * Carry Look-Ahead Adder
   * BCD Arithmetic
   * BCD Adder

---

# UNIT 1 — DIGITAL LOGIC DESIGN

## Complete 9+ SGPA Notes

---

# PART A — LOGIC SIMPLIFICATION

# 1. Boolean Algebra

## 1.1 What is Boolean Algebra?

**Boolean algebra** is a mathematical system used to represent and simplify **binary logic**.

Unlike ordinary algebra, Boolean variables can have only two values:

$$
0 \quad \text{or} \quad 1
$$

These represent:

* `0` → LOW / FALSE / OFF
* `1` → HIGH / TRUE / ON

The basic Boolean operations are:

| Operation | Symbol     | Equivalent     |
| --------- | ---------- | -------------- |
| AND       | `·`        | Multiplication |
| OR        | `+`        | Addition       |
| NOT       | `'` or bar | Complement     |

Examples:

$$
A\cdot B
$$

means AND.

$$
A+B
$$

means OR.

$$
A'
$$

means NOT A.

---

# 2. Basic Boolean Operations

## 2.1 AND Operation

Output is 1 only when **all inputs are 1**.

$$
Y=A\cdot B
$$

Truth table:

| A | B | Y=A·B |
| - | - | ----- |
| 0 | 0 | 0     |
| 0 | 1 | 0     |
| 1 | 0 | 0     |
| 1 | 1 | **1** |

---

## 2.2 OR Operation

Output is 1 when **at least one input is 1**.

$$
Y=A+B
$$

| A | B | Y     |
| - | - | ----- |
| 0 | 0 | **0** |
| 0 | 1 | 1     |
| 1 | 0 | 1     |
| 1 | 1 | 1     |

---

## 2.3 NOT Operation

NOT reverses the input.

$$
Y=A'
$$

| A | Y |
| - | - |
| 0 | 1 |
| 1 | 0 |

---

# 3. Important Boolean Laws

These are **extremely important for exams**.

## 3.1 Identity Laws

$$
A+0=A
$$

$$
A\cdot1=A
$$

---

## 3.2 Null / Dominance Laws

$$
A+1=1
$$

$$
A\cdot0=0
$$

---

## 3.3 Idempotent Laws

$$
A+A=A
$$

$$
A\cdot A=A
$$

---

## 3.4 Complement Laws

$$
A+A'=1
$$

$$
A\cdot A'=0
$$

---

## 3.5 Involution Law

$$
(A')'=A
$$

---

## 3.6 Commutative Laws

$$
A+B=B+A
$$

$$
AB=BA
$$

---

## 3.7 Associative Laws

$$
A+(B+C)=(A+B)+C
$$

$$
A(BC)=(AB)C
$$

---

## 3.8 Distributive Laws

Two important forms:

$$
A(B+C)=AB+AC
$$

and

$$
A+BC=(A+B)(A+C)
$$

The second one is especially important because it differs from ordinary algebra.

---

# 4. Absorption Laws

Very important for simplification.

$$
A+AB=A
$$

Proof:

$$
A+AB=A(1+B)
$$

Since:

$$
1+B=1
$$

therefore:

$$
A
$$

Similarly:

$$
A(A+B)=A
$$

---

# 5. De Morgan's Theorems

Extremely important.

### First theorem

$$
(A+B)'=A'B'
$$

Meaning:

> Complement of OR = AND of complements.

### Second theorem

$$
(AB)'=A'+B'
$$

Meaning:

> Complement of AND = OR of complements.

### Memory trick

```text
Break the bracket
Change the operator
Complement everything
```

For example:

$$
(A+B+C)'=A'B'C'
$$

and:

$$
(ABC)'=A'+B'+C'
$$

---

# 6. Principle of Duality

The **principle of duality** says that a valid Boolean expression remains valid if:

* `+` is replaced by `·`
* `0` is replaced by `1`
* `1` is replaced by `0`

Example:

$$
A+0=A
$$

Dual:

$$
A\cdot1=A
$$

---

# 7. SOP and POS

These are fundamental for K-map questions.

## SOP — Sum of Products

OR of AND terms.

Example:

$$
F=AB+A'C+BC
$$

Here:

* `AB`
* `A'C`
* `BC`

are product terms.

They are ORed together.

---

## POS — Product of Sums

AND of OR terms.

Example:

$$
F=(A+B)(A'+C)(B+C)
$$

Each bracket is a sum term and the terms are multiplied.

---

# 8. Minterms

A **minterm** is a product term containing every variable exactly once, either complemented or uncomplemented.

For variables \(A,B,C\):

Example:

$$
A'BC
$$

is a minterm.

### Rule

For a minterm:

* Binary `0` → complemented variable
* Binary `1` → uncomplemented variable

Example:

Binary:

$$
101
$$

corresponds to:

$$
AB'C
$$

Therefore:

$$
m_5=AB'C
$$

because binary `101` = decimal 5.

---

# 9. Maxterms

A **maxterm** is a sum term containing every variable exactly once.

For maxterms:

* Binary `0` → uncomplemented variable
* Binary `1` → complemented variable

Example:

For:

$$
101
$$

the maxterm is:

$$
(A'+B+C')
$$

This is:

$$
M_5
$$

---

# 10. Canonical Representation

A Boolean function can be represented using minterms:

$$
F(A,B,C)=\Sigma m(1,3,5,7)
$$

This means:

> Function is 1 for minterms 1, 3, 5 and 7.

Similarly:

$$
F(A,B,C)=\Pi M(0,2,4,6)
$$

means the function is 0 for maxterms 0, 2, 4 and 6.

---

# PART B — REALIZATION USING LOGIC GATES

# 11. Logic Gates

Basic gates:

1. AND
2. OR
3. NOT

Universal gates:

4. NAND
5. NOR

Other important gates:

6. XOR
7. XNOR

---

# 12. NAND as Universal Gate

A NAND gate can be used to construct all basic gates.

### NOT using NAND

Connect both inputs together:

$$
Y=(AA)'=A'
$$

### AND using NAND

First NAND:

$$
X=(AB)'
$$

Then NAND as inverter:

$$
Y=X'=AB
$$

### OR using NAND

Using De Morgan:

$$
A+B=(A'B')'
$$

So first generate \(A'\) and \(B'\) using NAND gates and then NAND them.

---

# 13. NOR as Universal Gate

NOR can also implement all basic gates.

### NOT

$$
A \ NOR \ A=A'
$$

### OR

First:

$$
X=A+B
$$

using NOR:

$$
X=(A+B)'
$$

then invert using another NOR.

### AND

Using:

$$
AB=(A'+B')'
$$

NOR can implement this.

### Exam point

> **NAND and NOR are universal gates because any Boolean function can be implemented using only NAND gates or only NOR gates.**

---

# PART C — KARNAUGH MAP

# 14. What is K-Map?

A **Karnaugh Map (K-map)** is a graphical technique used to simplify Boolean expressions.

It is particularly useful for reducing:

* Number of terms
* Number of literals
* Number of gates
* Circuit complexity

K-maps are commonly used for functions up to **6 variables** in your syllabus.

---

# 15. K-Map Cell Arrangement

The cells are arranged according to **Gray code**, not normal binary order.

For 2 variables:

```text
       B
       0   1
A=0   0   1
A=1   2   3
```

For 3 variables:

Columns follow:

```text
00  01  11  10
```

not:

```text
00  01  10  11
```

because adjacent cells must differ in only **one variable**.

---

# 16. K-Map Sizes

| Variables | Cells |
| --------: | ----: |
|         2 |     4 |
|         3 |     8 |
|         4 |    16 |
|         5 |    32 |
|         6 |    64 |

General formula:

$$
\text{Cells}=2^n
$$

where \(n\) = number of variables.

---

# 17. K-Map Grouping Rules

For SOP simplification, group **1s**.

For POS simplification, group **0s**.

Groups must contain:

$$
1,2,4,8,16,32,64
$$

cells.

In general:

$$
2^n
$$

cells.

### Important rules

1. Groups must contain powers of 2.
2. Make groups as large as possible.
3. Every required 1 must be covered.
4. Overlapping groups are allowed.
5. Diagonal grouping is not allowed.
6. Groups can wrap around edges.
7. Corners can be adjacent through wrap-around.
8. Don't-care conditions can be used if they help simplification.

---

# 18. Why Gray Code?

Consider:

```text
00 → 01 → 11 → 10
```

Each neighboring code differs by only one bit.

This allows adjacent K-map cells to eliminate one variable during grouping.

---

# 19. Example of 3-Variable K-Map

Suppose:

$$
F(A,B,C)=\Sigma m(1,3,5,7)
$$

These minterms correspond to:

```text
001
011
101
111
```

Notice that in all these cases:

$$
C=1
$$

Therefore:

$$
\boxed{F=C}
$$

This is exactly what K-map grouping reveals.

---

# 20. Prime Implicants

A **prime implicant** is a product term obtained from a valid K-map group that cannot be combined into a larger group.

### Essential Prime Implicant

A prime implicant that covers at least one minterm not covered by any other prime implicant.

It **must be included** in the final expression.

---

# 21. Don't-Care Conditions

Don't-care conditions are represented by:

$$
X
$$

or:

$$
d
$$

They can be treated as either 0 or 1.

Use them **only if they help create larger groups**.

Example:

$$
F=\Sigma m(1,3,7)+d(5)
$$

If including don't-care 5 creates a larger group, use it.

If it doesn't help, ignore it.

---

# 22. 5- and 6-Variable K-Maps

For higher variables, K-map becomes difficult to draw and group manually.

Typical cell counts:

### 5 variables

$$
2^5=32
$$

### 6 variables

$$
2^6=64
$$

For 6 variables, the map can be viewed as multiple 4-variable maps arranged in layers.

The same principles remain:

* Gray-code arrangement
* Adjacent cells
* Power-of-two groups
* Wrap-around
* Overlapping
* Don't-cares

---

# PART D — QUINE–McCLUSKEY METHOD

# 23. What is Quine–McCluskey Method?

The **Quine–McCluskey method** is a systematic, tabular method for Boolean function minimization.

It is especially useful when:

* Number of variables is large
* K-map becomes cumbersome
* A systematic procedure is required

It is also called the **tabulation method**.

---

# 24. Basic Steps

Suppose:

$$
F=\Sigma m(0,1,2,5,6,7)
$$

The general process is:

### Step 1

Convert minterms to binary.

### Step 2

Group them according to the number of 1s.

### Step 3

Compare adjacent groups.

### Step 4

Combine terms differing in exactly one bit.

Replace that differing bit with `-`.

### Step 5

Repeat the process.

### Step 6

Identify **prime implicants**.

### Step 7

Construct the **prime implicant chart**.

### Step 8

Identify essential prime implicants.

### Step 9

Obtain minimum expression.

---

# 25. Example of Combining

Suppose:

```text
0010
0011
```

They differ in only one position:

```text
0010
0011
   ↑
```

So combine:

```text
001-
```

The `-` means that variable can be either 0 or 1 and therefore is eliminated.

---

# 26. Quine-McCluskey Important Terms

### Implicant

A product term that covers one or more minterms where the function is 1.

### Prime Implicant

An implicant that cannot be combined further.

### Essential Prime Implicant

A prime implicant that uniquely covers at least one required minterm.

---

# 27. K-Map vs Quine-McCluskey

| K-Map                                      | Quine-McCluskey                      |
| ------------------------------------------ | ------------------------------------ |
| Graphical                                  | Tabular                              |
| Easy for small variable count              | Systematic for larger functions      |
| Visual                                     | Algorithmic                          |
| Manual grouping                            | Formal combining procedure           |
| Up to 4 variables is especially convenient | Useful when variable count increases |
| More intuitive                             | More mechanical                      |

---

# PART E — VEM TECHNIQUE

## 28. Variable Entered Map (VEM)

In this syllabus, **VEM** generally refers to a **Variable-Entered Map** technique.

Instead of placing only 0s and 1s in K-map cells, a variable or its complement can be **entered into the cells**.

VEM is useful when simplifying functions where one variable can be treated separately from the variables forming the map.

---

## 29. Basic Idea

Suppose:

$$
F(A,B,C)=A'B+AC
$$

Instead of making a complete 3-variable K-map, we can use two variables for the map and enter the remaining variable in the cells.

For example, choose \(B,C\) as map variables and treat \(A\) as the entered variable.

Each cell can contain:

```text
0
1
A
A'
```

or sometimes a corresponding Boolean expression.

---

## 30. Why VEM is Useful

VEM can:

* Reduce map complexity
* Handle functions with more variables
* Provide a compact representation
* Be useful in multi-variable logic minimization

### Exam point

> In a Variable-Entered Map, some variables are represented by the map axes while another variable or expression is entered inside the map cells.

---

# PART F — SIGNED NUMBER REPRESENTATION

Digital systems need to represent both:

$$
+ \text{numbers}
$$

and:

$$
- \text{numbers}
$$

The major representations are:

1. Sign-Magnitude
2. 1's Complement
3. 2's Complement

---

# 31. Sign-Magnitude Representation

The MSB represents the sign:

```text
0 → positive
1 → negative
```

Remaining bits represent magnitude.

For 8-bit representation:

```text
0 0000101
↑
sign
```

represents:

$$
+5
$$

and:

```text
1 0000101
```

represents:

$$
-5
$$

### Problem

It has two representations of zero:

```text
00000000 → +0
10000000 → -0
```

---

# 32. 1's Complement

Negative number is obtained by **complementing every bit** of the positive number.

Example:

$$
+5=00000101
$$

1's complement:

```text
11111010
```

Therefore:

$$
-5=11111010
$$

Again, there are two zeros:

```text
00000000 → +0
11111111 → -0
```

---

# 33. 2's Complement

To obtain the negative representation:

### Step 1

Find 1's complement.

### Step 2

Add 1.

Example:

$$
+5=00000101
$$

1's complement:

```text
11111010
```

Add 1:

```text
11111011
```

Therefore:

$$
-5=11111011
$$

2's complement is the most commonly used signed integer representation in modern digital computers.

---

# 34. Comparison of Signed Representations

| Feature                | Sign-Magnitude   | 1's Complement   | 2's Complement  |
| ---------------------- | ---------------- | ---------------- | --------------- |
| Negative number        | Sign + magnitude | Invert bits      | Invert + 1      |
| Two zeros              | Yes              | Yes              | No              |
| Arithmetic             | More complicated | End-around carry | Simplest/common |
| Modern integer systems | Rare             | Rare             | Standard        |

---

# 35. Range of 2's Complement

For \(n\) bits:

$$
-2^{n-1}
$$

to:

$$
2^{n-1}-1
$$

For 8 bits:

$$
-128 \text{ to } +127
$$

---

# PART G — BINARY ARITHMETIC

# 36. Binary Addition

Basic rules:

| A | B | Sum | Carry |
| - | - | --- | ----- |
| 0 | 0 | 0   | 0     |
| 0 | 1 | 1   | 0     |
| 1 | 0 | 1   | 0     |
| 1 | 1 | 0   | 1     |

Because:

$$
1+1=10_2
$$

---

## Example

```text
   1011
 + 0110
 -------
  10001
```

Therefore:

$$
1011_2+0110_2=10001_2
$$

---

# 37. Binary Subtraction

Rules:

| A | B | Difference | Borrow |
| - | - | ---------- | ------ |
| 0 | 0 | 0          | 0      |
| 1 | 0 | 1          | 0      |
| 1 | 1 | 0          | 0      |
| 0 | 1 | 1          | 1      |

---

# 38. Subtraction Using 2's Complement

To calculate:

$$
A-B
$$

perform:

$$
A+(\text{2's complement of }B)
$$

Example:

$$
7-3
$$

4-bit:

```text
7 = 0111
3 = 0011
```

2's complement of 3:

```text
0011
↓ invert
1100
↓ +1
1101
```

Now:

```text
  0111
+ 1101
------
1 0100
```

Discard carry:

```text
0100
```

which is:

$$
4
$$

---

# PART H — CODE CONVERSION

# 39. What is a Code?

A **code** is a systematic representation of information using binary patterns.

Common digital codes:

* Binary
* BCD
* Gray
* Excess-3
* ASCII

---

# 40. Binary to Gray Code

### Rules

MSB remains unchanged.

Each next Gray bit is obtained by XORing adjacent binary bits.

For binary:

```text
B3 B2 B1 B0
```

Gray:

```text
G3 = B3
G2 = B3 ⊕ B2
G1 = B2 ⊕ B1
G0 = B1 ⊕ B0
```

### Example

Binary:

```text
1011
```

Gray:

```text
1
1⊕0 = 1
0⊕1 = 1
1⊕1 = 0
```

Therefore:

```text
1011 → 1110
```

---

# 41. Gray to Binary

Rules:

```text
B3 = G3
B2 = B3 ⊕ G2
B1 = B2 ⊕ G1
B0 = B1 ⊕ G0
```

Example:

```text
Gray = 1110
```

Then:

```text
B3 = 1
B2 = 1⊕1 = 0
B1 = 0⊕1 = 1
B0 = 1⊕0 = 1
```

Therefore:

```text
1110 Gray = 1011 Binary
```

---

# 42. BCD

BCD = **Binary Coded Decimal**.

Each decimal digit is independently represented using 4 bits.

Example:

Decimal:

$$
59
$$

BCD:

```text
5 → 0101
9 → 1001
```

Therefore:

```text
59 → 0101 1001
```

### Important

BCD is **not the same as pure binary**.

For example:

$$
12_{10}
$$

Binary:

```text
1100
```

BCD:

```text
0001 0010
```

---

# 43. Excess-3 Code

Excess-3 is obtained by:

> Add 3 to each decimal digit and represent the result in 4-bit binary.

Example:

Decimal 5:

$$
5+3=8
$$

$$
8=1000
$$

Therefore:

```text
5 → 1000
```

For decimal 29:

```text
2+3 = 5 → 0101
9+3 = 12 → 1100
```

Therefore:

```text
29 → 0101 1100
```

---

# PART I — COMBINATIONAL LOGIC

# 44. What is Combinational Logic?

A **combinational circuit** is a digital circuit whose output depends only on the **present input values**.

$$
Output=f(Current\ Inputs)
$$

It has no memory element.

Examples:

* Adders
* Subtractors
* Multiplexers
* Demultiplexers
* Encoders
* Decoders
* Comparators

---

# 45. Combinational vs Sequential Circuit

| Combinational                       | Sequential                             |
| ----------------------------------- | -------------------------------------- |
| Output depends on present input     | Output depends on present + past state |
| No memory                           | Has memory                             |
| Usually no feedback storage element | Feedback/state elements are used       |
| Examples: MUX, decoder, adder       | Examples: counter, register, flip-flop |

---

# PART J — COMPARATORS

# 46. Comparator

A **digital comparator** compares two binary numbers and determines whether:

$$
A>B
$$

$$
A=B
$$

or:

$$
A<B
$$

---

# 47. 1-Bit Comparator

Inputs:

$$
A,B
$$

Outputs:

* \(A>B\)
* \(A=B\)
* \(A<B\)

### Truth table

| A | B | A>B | A=B | A<B |
| - | - | --- | --- | --- |
| 0 | 0 | 0   | 1   | 0   |
| 0 | 1 | 0   | 0   | 1   |
| 1 | 0 | 1   | 0   | 0   |
| 1 | 1 | 0   | 1   | 0   |

Boolean expressions:

$$
A>B=AB'
$$

$$
A<B=A'B
$$

$$
A=B=AB+A'B'
$$

The equality expression can also be written:

$$
A\odot B
$$

where \(\odot\) denotes XNOR.

---

# 48. Multi-Bit Comparator

For multi-bit numbers, comparison starts from the **most significant bit (MSB)**.

Example:

```text
A = 1010
B = 1001
```

Compare from left:

```text
1 = 1
0 = 0
1 > 0
```

Therefore:

$$
A>B
$$

---

# PART K — MULTIPLEXER

# 49. Multiplexer

A **Multiplexer (MUX)** is a combinational circuit that selects **one of many input signals** and sends the selected input to a single output.

It is also called a:

> **Data selector**

---

# 50. 2:1 MUX

A 2:1 MUX has:

* 2 inputs
* 1 select line
* 1 output

Inputs:

$$
I_0,I_1
$$

Select:

$$
S
$$

Output:

$$
Y
$$

Truth table:

| S | Y       |
| - | ------- |
| 0 | \(I_0\) |
| 1 | \(I_1\) |

Boolean equation:

$$
\boxed{Y=S'I_0+SI_1}
$$

---

# 51. 4:1 MUX

A 4:1 MUX has:

* 4 inputs
* 2 select lines
* 1 output

Inputs:

$$
I_0,I_1,I_2,I_3
$$

Select lines:

$$
S_1,S_0
$$

Selection:

| S1 | S0 | Output |
| -- | -- | ------ |
| 0  | 0  | I0     |
| 0  | 1  | I1     |
| 1  | 0  | I2     |
| 1  | 1  | I3     |

Equation:

$$
Y=S_1'S_0'I_0+
S_1'S_0I_1+
S_1S_0'I_2+
S_1S_0I_3
$$

---

# 52. Applications of MUX

MUX is used for:

* Data selection
* Communication systems
* CPU datapaths
* Function generation
* Routing signals
* Parallel-to-serial selection

---

# PART L — DEMULTIPLEXER

# 53. Demultiplexer

A **Demultiplexer (DEMUX)** performs the opposite function of a MUX.

It takes:

> **One input → selects one of many outputs**

Therefore:

```text
MUX:
Many → One

DEMUX:
One → Many
```

---

# 54. 1:4 DEMUX

Inputs:

* Data \(D\)
* Select \(S_1,S_0\)
* Outputs \(Y_0,Y_1,Y_2,Y_3\)

Selection:

| S1 | S0 | Active output |
| -- | -- | ------------- |
| 0  | 0  | Y0            |
| 0  | 1  | Y1            |
| 1  | 0  | Y2            |
| 1  | 1  | Y3            |

Equations:

$$
Y_0=DS_1'S_0'
$$

$$
Y_1=DS_1'S_0
$$

$$
Y_2=DS_1S_0'
$$

$$
Y_3=DS_1S_0
$$

---

# PART M — ENCODER

# 55. Encoder

An **encoder** converts:

$$
2^n \text{ input lines}
$$

into:

$$
n \text{ output lines}
$$

So:

```text
Many inputs → fewer outputs
```

---

# 56. 4-to-2 Encoder

Four inputs:

$$
D_0,D_1,D_2,D_3
$$

Two outputs:

$$
Y_1,Y_0
$$

Assuming only one input is active at a time:

| Active Input | Y1 | Y0 |
| ------------ | -: | -: |
| D0           |  0 |  0 |
| D1           |  0 |  1 |
| D2           |  1 |  0 |
| D3           |  1 |  1 |

Equations:

$$
Y_1=D_2+D_3
$$

$$
Y_0=D_1+D_3
$$

---

# 57. Priority Encoder

Normal encoder assumes only one input is active.

A **priority encoder** handles multiple active inputs by assigning priority.

If multiple inputs are 1, the highest-priority input determines the output.

This is important in interrupt systems.

---

# PART N — DECODER

# 58. Decoder

A decoder converts:

$$
n \text{ input lines}
$$

into:

$$
2^n \text{ output lines}
$$

Therefore:

```text
Fewer inputs → More outputs
```

---

# 59. 2-to-4 Decoder

Inputs:

$$
A,B
$$

Outputs:

$$
Y_0,Y_1,Y_2,Y_3
$$

Truth table:

| A | B | Active output |
| - | - | ------------- |
| 0 | 0 | Y0            |
| 0 | 1 | Y1            |
| 1 | 0 | Y2            |
| 1 | 1 | Y3            |

Equations:

$$
Y_0=A'B'
$$

$$
Y_1=A'B
$$

$$
Y_2=AB'
$$

$$
Y_3=AB
$$

A decoder essentially generates **minterms**.

---

# 60. Encoder vs Decoder

| Encoder              | Decoder             |
| -------------------- | ------------------- |
| \(2^n\) inputs       | \(n\) inputs        |
| \(n\) outputs        | \(2^n\) outputs     |
| Many → Few           | Few → Many          |
| Produces binary code | Decodes binary code |

---

# PART O — PARALLEL ADDERS

# 61. Half Adder

A **half adder** adds two 1-bit binary numbers.

Inputs:

$$
A,B
$$

Outputs:

* Sum \(S\)
* Carry \(C\)

Truth table:

| A | B | S | C |
| - | - | - | - |
| 0 | 0 | 0 | 0 |
| 0 | 1 | 1 | 0 |
| 1 | 0 | 1 | 0 |
| 1 | 1 | 0 | 1 |

Equations:

$$
\boxed{S=A\oplus B}
$$

$$
\boxed{C=AB}
$$

---

# 62. Full Adder

A full adder adds:

* A
* B
* Carry-in \(C_{in}\)

Outputs:

* Sum \(S\)
* Carry-out \(C_{out}\)

Equation:

$$
\boxed{S=A\oplus B\oplus C_{in}}
$$

Carry:

$$
\boxed{C_{out}=AB+AC_{in}+BC_{in}}
$$

Equivalent useful form:

$$
C_{out}=AB+C_{in}(A\oplus B)
$$

---

# 63. Ripple Carry Adder

Multiple full adders can be connected to add multi-bit numbers.

For a 4-bit adder:

```text
A0 B0 → FA0 → C1
A1 B1 → FA1 → C2
A2 B2 → FA2 → C3
A3 B3 → FA3 → C4
```

The carry ripples from one stage to the next.

### Problem

It is relatively slow because each stage must wait for the previous carry.

This delay is called:

> **Propagation delay**

---

# PART P — CARRY LOOK-AHEAD ADDER

# 64. Carry Look-Ahead Adder

A **Carry Look-Ahead Adder (CLA)** is designed to reduce the carry propagation delay of a ripple carry adder.

Instead of waiting for carry to ripple through each full adder, CLA calculates carries **in parallel** using generate and propagate signals.

---

# 65. Generate and Propagate

For bit \(i\):

### Generate

$$
G_i=A_iB_i
$$

A carry is generated when both inputs are 1.

### Propagate

A common definition is:

$$
P_i=A_i\oplus B_i
$$

The carry equation becomes:

$$
C_{i+1}=G_i+P_iC_i
$$

---

# 66. Expanding Carry Equations

For a 4-bit CLA:

$$
C_1=G_0+P_0C_0
$$

$$
C_2=G_1+P_1G_0+P_1P_0C_0
$$

$$
C_3=G_2+P_2G_1+P_2P_1G_0+P_2P_1P_0C_0
$$

$$
C_4=G_3+P_3G_2+P_3P_2G_1+
P_3P_2P_1G_0+
P_3P_2P_1P_0C_0
$$

This is the key derivation you should know for exams.

---

# 67. Ripple Carry vs CLA

| Ripple Carry Adder            | Carry Look-Ahead Adder         |
| ----------------------------- | ------------------------------ |
| Carry propagates sequentially | Carries calculated in parallel |
| Slower                        | Faster                         |
| Simple circuit                | More complex                   |
| Less hardware                 | More hardware                  |
| More propagation delay        | Lower carry delay              |

### Core idea

> **CLA trades additional hardware for higher speed.**

---

# PART Q — BCD ARITHMETIC

# 68. BCD Arithmetic

BCD represents each decimal digit separately using 4 bits.

Valid BCD codes:

```text
0000 → 0
0001 → 1
0010 → 2
0011 → 3
0100 → 4
0101 → 5
0110 → 6
0111 → 7
1000 → 8
1001 → 9
```

Invalid BCD combinations:

```text
1010 → 10
1011 → 11
1100 → 12
1101 → 13
1110 → 14
1111 → 15
```

---

# 69. BCD Addition

First perform ordinary binary addition of the BCD digits.

After addition, check whether the result is an invalid BCD digit.

Correction is required if:

1. The 4-bit sum is greater than `1001` (decimal 9), **or**
2. There is a carry out of the 4-bit digit.

Then add:

$$
0110
$$

(decimal 6).

---

# 70. Why Add 6?

BCD has only 10 valid combinations:

```text
0000 to 1001
```

The binary combinations:

```text
1010 to 1111
```

are invalid.

Adding:

$$
0110
$$

corrects the result and produces a valid BCD digit plus carry when required.

---

# 71. Example: BCD Addition

Calculate:

$$
5+7
$$

BCD:

```text
5 = 0101
7 = 0111
```

Binary addition:

```text
  0101
+ 0111
------
  1100
```

`1100` = 12, which is invalid BCD.

Therefore add:

```text
0110
```

```text
  1100
+ 0110
------
1 0010
```

So:

```text
12 decimal
```

in BCD is:

```text
0001 0010
```

Therefore:

$$
5+7=12
$$

---

# 72. BCD Adder

A BCD adder generally consists of:

1. A 4-bit binary adder
2. Correction logic
3. Another 4-bit adder for adding `0110` when correction is required

Conceptually:

```text
       A BCD digit
            +
       B BCD digit
            |
            ↓
      4-bit binary
         adder
            |
            ↓
       Preliminary
          sum
            |
       Is correction
        required?
          /    \
        No      Yes
        |        |
        |      +0110
        |        |
        └────┬───┘
             ↓
        Valid BCD
          result
```

---

# 73. BCD Correction Logic

Let the binary sum be:

$$
S_3S_2S_1S_0
$$

and \(C_4\) be the carry from the first 4-bit adder.

Correction is required when:

$$
C_4=1
$$

or the sum is greater than 9.

A commonly used correction condition is:

$$
\boxed{K=C_4+S_3S_2+S_3S_1}
$$

When:

$$
K=1
$$

add:

$$
0110
$$

---

# 74. Important BCD Example

Calculate:

$$
8+7
$$

BCD:

```text
8 = 1000
7 = 0111
```

Add:

```text
  1000
+ 0111
------
  1111
```

`1111 = 15`, invalid BCD.

Add `0110`:

```text
  1111
+ 0110
------
1 0101
```

Therefore:

```text
0001 0101
```

which represents:

$$
15
$$

---

# ⭐ COMPLETE UNIT 1 CONNECTION MAP

You should mentally connect the entire unit like this:

```text
                    DIGITAL LOGIC
                         │
              ┌──────────┴──────────┐
              │                     │
       LOGIC SIMPLIFICATION    COMBINATIONAL LOGIC
              │                     │
       ┌──────┼───────┐       ┌─────┼─────────────┐
       │      │       │       │     │             │
 Boolean   K-Map    Q-M     MUX   Decoder      Adder
 Algebra           Method    │       │            │
       │              │      │    Encoder        │
       │             VEM     │                  CLA
       │                     │
       └── Gates ────────────┘
       
Other fundamentals:
       │
       ├── Signed numbers
       ├── Binary arithmetic
       └── Code conversion
```

---

# 🔥 HIGH-PRIORITY TOPICS FOR YOUR EXAM

If your goal is **9+ SGPA**, don't give every topic exactly the same amount of practice.

### Tier 1 — Must Master

These are the topics where **problem-solving practice** is essential:

1. **Boolean algebra simplification**
2. **K-map up to 4 variables**
3. **5/6-variable K-map**
4. **Quine–McCluskey**
5. **Signed number representation**
6. **Binary arithmetic**
7. **Code conversion**
8. **MUX/DEMUX**
9. **Encoder/Decoder**
10. **Half/Full Adder**
11. **Ripple Carry Adder**
12. **Carry Look-Ahead Adder**
13. **BCD addition / BCD adder**

### Tier 2 — Understand + Practice

* VEM
* Comparators
* Universal gate realization
* Combinational vs sequential logic

---

# 📝 FORMULAS YOU MUST MEMORIZE

## Boolean

$$
A+A'=1
$$

$$
AA'=0
$$

$$
A+AB=A
$$

$$
A(A+B)=A
$$

$$
(A+B)'=A'B'
$$

$$
(AB)'=A'+B'
$$

---

## Half Adder

$$
S=A\oplus B
$$

$$
C=AB
$$

---

## Full Adder

$$
S=A\oplus B\oplus C_{in}
$$

$$
C_{out}=AB+AC_{in}+BC_{in}
$$

---

## 2:1 MUX

$$
Y=S'I_0+SI_1
$$

---

## 1-bit Comparator

$$
A>B=AB'
$$

$$
A<B=A'B
$$

$$
A=B=AB+A'B'
$$

---

## CLA

$$
G_i=A_iB_i
$$

$$
P_i=A_i\oplus B_i
$$

$$
C_{i+1}=G_i+P_iC_i
$$

---

## BCD Correction

$$
\boxed{K=C_4+S_3S_2+S_3S_1}
$$

If \(K=1\), add:

$$
\boxed{0110}
$$

---

# 🎯 HOW TO PREPARE THIS UNIT FOR 9+ SGPA

Don't just read these notes once. Use this sequence:

### Step 1 — Theory

Understand:

* Boolean laws
* Gates
* Signed representation
* Combinational circuits
* MUX/DEMUX
* Encoder/Decoder
* Adders

### Step 2 — Learn standard truth tables

You should be able to reproduce without looking:

* Basic gates
* Half adder
* Full adder
* 1-bit comparator
* 2:1 MUX
* 4:1 MUX
* 2:4 decoder
* 4:2 encoder

### Step 3 — Solve numerical problems

Especially:

```text
Boolean simplification
       ↓
K-map
       ↓
Quine-McCluskey
       ↓
Binary arithmetic
       ↓
Code conversion
       ↓
BCD addition
```

### Step 4 — Practice circuit realization

Be able to convert:

$$
Boolean\ Expression
\rightarrow
Logic\ Circuit
$$

and:

$$
Truth\ Table
\rightarrow
Boolean\ Expression
\rightarrow
Circuit
$$

### Step 5 — Practice diagrams

For 9+ SGPA, **diagrams matter** in Digital Logic. Practice drawing:

* K-map layouts
* NAND/NOR realization
* MUX
* DEMUX
* Encoder
* Decoder
* Half adder
* Full adder
* Ripple carry adder
* CLA
* BCD adder

---

## 🚨 One important point

This entire Unit 1 is too large to master by simply memorizing notes. **K-map, Quine–McCluskey, VEM, binary arithmetic, code conversion, MUX realization, CLA and BCD addition are problem-solving topics.**

So for your 9+ preparation, I recommend we treat this as a **complete unit**, but study it **one topic at a time with solved questions**. The notes above give you the theory framework; then each topic should be practiced until you can solve an exam question without seeing the solution.
