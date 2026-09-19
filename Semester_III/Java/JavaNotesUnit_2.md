# Unit II — Inheritance and Its Types

Your syllabus specifically includes **“Inheritance – Inheritance types”**, so this is an important Unit-II topic. 

## 1. What is Inheritance?

**Inheritance** is an important feature of Object-Oriented Programming in which a new class acquires the **properties and behaviors of an existing class**.

The existing class is called the **parent class / superclass / base class**, while the new class is called the **child class / subclass / derived class**.

In Java, inheritance between classes is achieved using the **`extends` keyword**.

### Basic syntax

```java
class Parent {
    // properties and methods
}

class Child extends Parent {
    // additional properties and methods
}
```

### Simple example

```java
class Animal {
    void eat() {
        System.out.println("Animal eats");
    }
}

class Dog extends Animal {
    void bark() {
        System.out.println("Dog barks");
    }
}
```

Here:

```text
        Animal
           |
           |
          Dog
```

`Dog` inherits the `eat()` method from `Animal`.

```java
public class Main {
    public static void main(String[] args) {

        Dog d = new Dog();

        d.eat();
        d.bark();
    }
}
```

Output:

```text
Animal eats
Dog barks
```

---

# 2. Important Terminology

| Term              | Meaning                                      |
| ----------------- | -------------------------------------------- |
| **Superclass**    | Class whose properties/methods are inherited |
| **Subclass**      | Class that inherits from another class       |
| **Parent class**  | Another name for superclass                  |
| **Child class**   | Another name for subclass                    |
| **Base class**    | Another name for superclass                  |
| **Derived class** | Another name for subclass                    |
| **`extends`**     | Keyword used for class inheritance           |

### Remember:

```text
Parent / Superclass / Base
             ↓
          inherited
             ↓
Child / Subclass / Derived
```

---

# 3. Why is Inheritance Used?

The main purpose of inheritance is **code reusability**.

Suppose `Animal` already has:

```java
void eat()
void sleep()
void breathe()
```

Instead of writing these methods again in:

```text
Dog
Cat
Horse
Cow
```

we can put common functionality in `Animal` and inherit it.

### Advantages

### 1. Code Reusability

Existing code can be reused by subclasses.

### 2. Reduces Code Duplication

Common properties and methods do not need to be written repeatedly.

### 3. Method Overriding

Inheritance allows a subclass to provide its own implementation of an inherited method.

### 4. Supports Polymorphism

Inheritance is important for implementing **runtime polymorphism** through method overriding.

### 5. Easy Maintenance

Common functionality can be maintained in the parent class.

### 6. Extensibility

A child class can add new properties and methods to the inherited functionality.

---

# 4. Types of Inheritance

The main forms you should know for the exam are:

1. **Single Inheritance**
2. **Multilevel Inheritance**
3. **Hierarchical Inheritance**
4. **Multiple Inheritance**
5. **Hybrid Inheritance**

However, there is an important Java point:

> **Java does not support multiple inheritance through classes. Multiple inheritance can be achieved using interfaces.**

---

# 5. Single Inheritance

## Definition

**Single inheritance** occurs when one subclass inherits from only one superclass.

### Diagram

```text
       Parent
          |
          ↓
        Child
```

### Example

```java
class Animal {

    void eat() {
        System.out.println("Animal eats");
    }
}

class Dog extends Animal {

    void bark() {
        System.out.println("Dog barks");
    }
}
```

Here:

```text
Animal → Parent
Dog    → Child
```

`Dog` inherits `eat()` from `Animal`.

### Use

Single inheritance is useful when one class has a clear parent-child relationship.

---

# 6. Multilevel Inheritance

## Definition

**Multilevel inheritance** occurs when a class is derived from another derived class.

### Diagram

```text
       A
       |
       ↓
       B
       |
       ↓
       C
```

### Example

```java
class Animal {

    void eat() {
        System.out.println("Eating");
    }
}

class Dog extends Animal {

    void bark() {
        System.out.println("Barking");
    }
}

class Puppy extends Dog {

    void play() {
        System.out.println("Playing");
    }
}
```

Relationship:

```text
Animal
   ↓
 Dog
   ↓
Puppy
```

Now `Puppy` can use the accessible methods inherited through the hierarchy:

```java
Puppy p = new Puppy();

p.eat();
p.bark();
p.play();
```

Output:

```text
Eating
Barking
Playing
```

### Key point

The inheritance occurs through **more than one level**.

---

# 7. Hierarchical Inheritance

## Definition

**Hierarchical inheritance** occurs when multiple subclasses inherit from the same superclass.

### Diagram

```text
             Animal
             /    \
            ↓      ↓
          Dog      Cat
```

### Example

```java
class Animal {

    void eat() {
        System.out.println("Animal eats");
    }
}

class Dog extends Animal {

    void bark() {
        System.out.println("Dog barks");
    }
}

class Cat extends Animal {

    void meow() {
        System.out.println("Cat meows");
    }
}
```

Here:

```text
          Animal
          /    \
        Dog    Cat
```

Both `Dog` and `Cat` inherit `eat()` from `Animal`.

### Advantage

Common functionality can be placed in one superclass and reused by multiple subclasses.

---

# 8. Multiple Inheritance

## Definition

**Multiple inheritance** occurs when one subclass inherits from more than one superclass.

### General concept

```text
       A       B
        \     /
         \   /
          \ /
           C
```

For example:

```text
     Father      Mother
         \       /
          \     /
           Child
```

### Important Java point

Java **does not allow multiple inheritance using classes**.

This is invalid:

```java
class C extends A, B {
}
```

Java avoids the ambiguity that can occur when two parent classes provide conflicting implementations.

### But Java provides multiple inheritance through interfaces

```java
interface A {

    void show();
}

interface B {

    void display();
}

class C implements A, B {

    public void show() {
        System.out.println("Show");
    }

    public void display() {
        System.out.println("Display");
    }
}
```

Diagram:

```text
       A       B
        \     /
         \   /
           C
```

Therefore, remember:

> **Multiple inheritance is not supported through Java classes, but a class can implement multiple interfaces.**

---

# 9. Hybrid Inheritance

## Definition

**Hybrid inheritance** is a combination of two or more types of inheritance.

For example:

```text
          A
         / \
        B   C
         \ /
          D
```

This structure combines hierarchical and multiple inheritance.

### Java

Java does not directly support arbitrary hybrid inheritance through classes because it does not support multiple inheritance between classes.

Interfaces can be used to construct more complex inheritance relationships.

---

# 10. Comparison of Inheritance Types

| Type             | Structure            | Java Classes                  |
| ---------------- | -------------------- | ----------------------------- |
| **Single**       | A → B                | Supported                     |
| **Multilevel**   | A → B → C            | Supported                     |
| **Hierarchical** | A → B and A → C      | Supported                     |
| **Multiple**     | A + B → C            | Not supported through classes |
| **Hybrid**       | Combination of types | Not directly through classes  |

---

# ⭐ Important Exam Answer

If the question is:

> **“What is inheritance? Explain its types in Java with suitable examples.”**

Write your answer in this order:

### 1. Definition

Define inheritance and mention parent/child class.

### 2. Syntax

```java
class Child extends Parent
```

### 3. Terminology

Explain superclass and subclass.

### 4. Purpose

Write:

* Code reusability
* Reduces duplication
* Method overriding
* Polymorphism
* Maintainability

### 5. Types

Explain with diagrams:

```text
1. Single

     A
     |
     B


2. Multilevel

     A
     |
     B
     |
     C


3. Hierarchical

       A
      / \
     B   C


4. Multiple

     A   B
      \ /
       C


5. Hybrid

       A
      / \
     B   C
      \ /
       D
```

### 6. Java-specific point

Clearly mention:

> Java supports single, multilevel and hierarchical inheritance through classes. Multiple inheritance is not supported through classes; multiple interfaces can be implemented by a class.

### 7. Conclusion

You can finish with:

> Thus, inheritance is an important OOP mechanism that promotes code reusability, extensibility and hierarchical organization of classes.

---

## 🧠 What you should memorize

Don't memorize the entire answer word-for-word. Remember this structure:

**Inheritance = acquiring properties + behaviors**

```text
Parent
  ↓
Child
```

**Types:**

> **Single → Multilevel → Hierarchical → Multiple → Hybrid**

And the most important Java fact:

> **Class → `extends` → one superclass**
> **Class → `implements` → multiple interfaces**

This topic alone can easily become a **5–10 mark answer** if you include the definition, terminology, syntax, diagram, all types, examples, advantages, and Java's restriction on multiple inheritance.


# `super` Keyword in Java

Your syllabus specifically includes **“super keyword” under Inheritance**, so this is an important part of Unit II. 

## 1. Definition

`super` is a **keyword in Java used to refer to the immediate parent class**.

It is mainly used when a child class wants to access something that belongs to its parent class.

### Simple idea

```text
        Parent
          ↑
        super
          ↑
        Child
```

Think of:

> **`this` → current class**
> **`super` → immediate parent class**

---

# 2. Uses of `super`

There are **three major uses** of the `super` keyword:

1. To access the **parent class variable**
2. To call the **parent class method**
3. To call the **parent class constructor**

These three points are very important for your semester answer.

---

# 3. `super` to Access Parent Class Variable

Suppose both parent and child have a variable with the same name.

```java
class Animal {

    String name = "Animal";
}

class Dog extends Animal {

    String name = "Dog";

    void display() {
        System.out.println(name);
        System.out.println(super.name);
    }
}
```

Now:

```java
public class Main {
    public static void main(String[] args) {

        Dog d = new Dog();
        d.display();
    }
}
```

### Output

```text
Dog
Animal
```

### Why?

Inside `Dog`:

```java
name
```

refers to the `Dog` class variable.

But:

```java
super.name
```

specifically refers to the variable of the **parent class `Animal`**.

### Remember

```text
name       → current/child class variable
super.name → parent class variable
```

---

# 4. `super` to Call Parent Class Method

Suppose the parent and child both have a method with the same name.

```java
class Animal {

    void sound() {
        System.out.println("Animal makes sound");
    }
}

class Dog extends Animal {

    void sound() {
        System.out.println("Dog barks");
    }

    void display() {
        sound();
        super.sound();
    }
}
```

Create object:

```java
Dog d = new Dog();
d.display();
```

### Output

```text
Dog barks
Animal makes sound
```

### Explanation

```java
sound();
```

calls the current class (`Dog`) method.

Whereas:

```java
super.sound();
```

explicitly calls the **parent class (`Animal`) method**.

### Exam point

`super.methodName()` is particularly useful when a child class **overrides** a parent method but still needs to invoke the original parent implementation.

---

# 5. `super()` to Call Parent Constructor

The third important use is:

```java
super();
```

It is used to call the **constructor of the immediate parent class**.

Example:

```java
class Animal {

    Animal() {
        System.out.println("Animal constructor");
    }
}

class Dog extends Animal {

    Dog() {
        super();
        System.out.println("Dog constructor");
    }
}
```

Now:

```java
Dog d = new Dog();
```

### Output

```text
Animal constructor
Dog constructor
```

### What happened?

When the `Dog` object was created:

```text
Dog constructor
     ↓
super()
     ↓
Animal constructor
     ↓
Dog constructor continues
```

So the parent constructor executes first.

---

# 6. Passing Arguments to Parent Constructor

`super()` can also pass arguments.

Parent:

```java
class Animal {

    String name;

    Animal(String name) {
        this.name = name;
    }
}
```

Child:

```java
class Dog extends Animal {

    Dog(String name) {
        super(name);
    }
}
```

Here:

```java
super(name);
```

calls the parameterized constructor of the parent class.

---

# 7. Important Rule of `super()`

A call to `super()` or `super(arguments)` must be the **first statement inside a constructor**.

Correct:

```java
Dog() {
    super();
    System.out.println("Dog");
}
```

Not correct:

```java
Dog() {
    System.out.println("Dog");
    super();       // Error
}
```

### Why?

Java requires the parent-class constructor to be invoked before the subclass constructor body proceeds.

---

# 8. Complete Example

This example demonstrates all three uses.

```java
class Animal {

    String name = "Animal";

    Animal() {
        System.out.println("Animal constructor");
    }

    void sound() {
        System.out.println("Animal makes sound");
    }
}

class Dog extends Animal {

    String name = "Dog";

    Dog() {
        super();
        System.out.println("Dog constructor");
    }

    void sound() {
        System.out.println("Dog barks");
    }

    void display() {

        // Parent variable
        System.out.println(super.name);

        // Parent method
        super.sound();
    }
}

public class Main {

    public static void main(String[] args) {

        Dog d = new Dog();

        d.display();
    }
}
```

Output:

```text
Animal constructor
Dog constructor
Animal
Animal makes sound
```

---

# 9. `this` vs `super`

This is a very useful comparison for the exam.

| `this`                                   | `super`                                  |
| ---------------------------------------- | ---------------------------------------- |
| Refers to the current class object       | Refers to the immediate parent class     |
| Accesses current class members           | Accesses parent class members            |
| `this.variable`                          | `super.variable`                         |
| `this.method()`                          | `super.method()`                         |
| `this()` calls current class constructor | `super()` calls parent class constructor |

### Easy trick

```text
this  → THIS class
super → SUPER/parent class
```

---

# 10. Why is `super` Needed?

Consider:

```java
class Parent {
    int x = 10;
}

class Child extends Parent {
    int x = 20;
}
```

Now there are **two `x` variables**.

```java
x
```

means the child's `x`.

```java
super.x
```

means the parent's `x`.

Therefore, `super` helps remove ambiguity and explicitly access the parent-class implementation.

---

# ⭐ Exam-Ready Answer

If the question is:

> **Explain the `super` keyword in Java with suitable examples.**

Write in this order:

### Definition

`super` is a keyword used to refer to the immediate parent class.

### Uses

**1. Access parent variable**

```java
super.variable;
```

**2. Call parent method**

```java
super.method();
```

**3. Call parent constructor**

```java
super();
```

### Then give examples

Use one example for each use.

### Important rules

* `super` refers to the **immediate parent class**.
* `super.variable` accesses a parent variable.
* `super.method()` calls a parent method.
* `super()` calls a parent constructor.
* `super()` must be the **first statement of a constructor**.
* `super` is particularly useful when members are hidden or methods are overridden.

### Conclusion

> Thus, the `super` keyword provides a mechanism for a subclass to explicitly access the members and constructor of its immediate superclass. It is particularly useful in inheritance when parent and child classes contain members with the same name or when an overridden parent method needs to be invoked.



# `final` Classes and Methods in Java

Your syllabus specifically says **“preventing inheritance: final classes and methods”**, so this is an exam-relevant part of Unit II. 

## 1. What is `final`?

`final` is a **keyword in Java used to restrict modification**.

When used with classes and methods:

* **`final class` → prevents inheritance**
* **`final method` → prevents method overriding**

So the easiest thing to remember is:

```text
final class  → Cannot be extended
final method → Cannot be overridden
```

---

# 2. Final Class

## Definition

A **final class** is a class declared using the `final` keyword that **cannot be inherited by another class**.

### Syntax

```java
final class ClassName {
    // members
}
```

### Example

```java
final class Vehicle {

    void start() {
        System.out.println("Vehicle starts");
    }
}
```

Now if we try:

```java
class Car extends Vehicle {

}
```

Java gives a **compile-time error** because `Vehicle` is a final class.

### Diagram

```text
final class Vehicle
        ✕
        |
      Car
```

The inheritance is not allowed.

---

# 3. Why Use a Final Class?

A final class is used when the programmer wants to **prevent further inheritance** of that class.

For example, if a class is designed so that its implementation should not be changed through subclassing, it can be declared `final`.

### Advantages

1. **Prevents inheritance**
2. Prevents subclasses from changing the intended class design
3. Provides stronger control over class hierarchy
4. Can be useful when a class is intended to have no subclasses

---

# 4. Final Method

## Definition

A **final method** is a method declared using the `final` keyword that **cannot be overridden by a subclass**.

### Syntax

```java
final void methodName() {
    // method body
}
```

### Example

```java
class Animal {

    final void eat() {
        System.out.println("Animal eats");
    }
}
```

Now suppose:

```java
class Dog extends Animal {

    void eat() {
        System.out.println("Dog eats");
    }
}
```

This is not allowed because `eat()` is declared as `final` in the parent class.

---

# 5. Why Use a Final Method?

A final method is used when the parent class wants to ensure that a particular method's implementation **cannot be replaced by a subclass through overriding**.

Example:

```java
class Bank {

    final void rules() {
        System.out.println("Bank rules");
    }
}
```

A subclass can inherit and use `rules()`, but it cannot override it.

---

# 6. Final Class vs Final Method

This is a **very important comparison for your semester exam**.

| Final Class                  | Final Method                         |
| ---------------------------- | ------------------------------------ |
| Declared using `final class` | Declared using `final` before method |
| Prevents inheritance         | Prevents overriding                  |
| The class cannot be extended | The method cannot be overridden      |
| Applies to the entire class  | Applies only to a particular method  |
| Example: `final class A`     | Example: `final void show()`         |

### Easy memory trick

```text
FINAL CLASS
     ↓
No child class

FINAL METHOD
     ↓
No overriding
```

---

# 7. Complete Example

```java
class Animal {

    final void eat() {
        System.out.println("Animal eats");
    }

    void sound() {
        System.out.println("Animal sound");
    }
}

class Dog extends Animal {

    // This is allowed
    void sound() {
        System.out.println("Dog barks");
    }

    // This is NOT allowed
    /*
    void eat() {
        System.out.println("Dog eats");
    }
    */
}
```

Here:

```text
Animal
  |
  ↓
Dog
```

`Dog` can inherit `eat()`, but cannot override it.

At the same time, `sound()` is not final, so `Dog` can override it.

---

# 8. Important Difference: `final` Class and `final` Method

Suppose:

```java
final class A {
    void show() {
    }
}
```

Here, **no class can extend `A`**.

But suppose:

```java
class A {
    final void show() {
    }
}
```

Here, another class **can extend `A`**, but it **cannot override `show()`**.

This distinction is very important.

---

# 9. Relation with Inheritance

Remember the normal inheritance situation:

```text
Parent
   ↓
Child
```

Normally, the child can inherit and potentially override methods.

With a final class:

```text
final Parent
     ✕
     ↓
   Child
```

Inheritance itself is prohibited.

With a final method:

```text
Parent
  ↓
Child
  ✕ override final method
```

Inheritance is allowed, but overriding that particular method is prohibited.

---

# ⭐ Exam-Ready Answer

If the question is:

> **Explain final classes and final methods in Java.**

Use this structure:

### Introduction

The `final` keyword is used to impose restrictions in Java. In the context of inheritance, it can be used with classes and methods to prevent inheritance and method overriding.

### Final Class

A final class is a class declared using the `final` keyword. It cannot be inherited by another class.

```java
final class Vehicle {
    void start() {
        System.out.println("Vehicle starts");
    }
}
```

Attempting:

```java
class Car extends Vehicle {
}
```

produces a compilation error.

### Final Method

A final method is a method declared with the `final` keyword. A subclass can inherit the method but cannot override it.

```java
class Vehicle {

    final void start() {
        System.out.println("Vehicle starts");
    }
}
```

A subclass cannot redefine `start()`.

### Difference

```text
final class
     ↓
prevents inheritance

final method
     ↓
prevents overriding
```

### Conclusion

> Thus, the `final` keyword provides control over inheritance and method overriding. A final class cannot be extended, whereas a final method cannot be overridden by its subclasses.

---

## 🧠 30-second revision

Before the exam, remember just this:

```text
             final
               |
       ┌───────┴───────┐
       ↓               ↓
   final class     final method
       ↓               ↓
No inheritance    No overriding
```

**Question trick:** If they ask **“How can inheritance be prevented in Java?”**, answer:

> **By declaring the parent class as `final`.**

If they ask **“How can method overriding be prevented?”**, answer:

> **By declaring the method as `final`.**
