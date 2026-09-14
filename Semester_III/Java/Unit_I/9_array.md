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
