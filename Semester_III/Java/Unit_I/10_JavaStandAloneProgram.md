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
