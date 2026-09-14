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
