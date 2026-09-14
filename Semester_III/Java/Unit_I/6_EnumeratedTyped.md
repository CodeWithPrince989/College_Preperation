
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
