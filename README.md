
# README – Matrix Calculator in C

## Overview

This project is a **Matrix Calculator** written in C that performs basic matrix operations:

* Matrix Addition
* Matrix Subtraction
* Matrix Multiplication
* Exit Program

The program takes matrix sizes and elements from the user and performs operations using a menu-driven interface.

---

## Features

* Supports matrices up to **10 × 10**
* Menu-driven program
* Performs:

  * Addition (if matrices have same order)
  * Subtraction (if matrices have same order)
  * Multiplication (if columns of A = rows of B)
* Displays result matrix
* Runs until user selects Exit

---

## Program Logic

1. User enters rows and columns for Matrix A and Matrix B.
2. User inputs elements of both matrices.
3. Program shows menu:

   * Addition
   * Subtraction
   * Multiplication
   * Exit
4. Based on choice, operation is performed.
5. Program continues until Exit is selected.

---

## Conditions for Operations

| Operation      | Condition           |
| -------------- | ------------------- |
| Addition       | r1 = r2 and c1 = c2 |
| Subtraction    | r1 = r2 and c1 = c2 |
| Multiplication | c1 = r2             |

---

## Example

```
Enter rows and columns of Matrix A: 2 2
Enter rows and columns of Matrix B: 2 2

Enter elements of Matrix A:
1 2
3 4

Enter elements of Matrix B:
5 6
7 8

--- MATRIX CALCULATOR ---
1. Addition
2. Subtraction
3. Multiplication
4. Exit
Enter your choice: 1

Result of Addition:
6 8
10 12
```

---

## Improvements Suggested (Code Review)

* Add matrix transpose feature
* Add determinant calculation
* Use functions for each operation instead of writing everything in `main()`
* Add input validation
* Allow matrices larger than 10×10 using dynamic memory

---

## Conclusion

This project demonstrates:

* Use of **2D arrays**
* **Loops**
* **Switch case**
* **Matrix operations**
* **Menu-driven programming**

It is a good beginner-level C programming project for understanding matrix manipulation and control structures.


# Student Management Program (C++)

## Overview

This is a simple C++ program that demonstrates Object-Oriented Programming using a `Student` class.
The program allows the user to enter details of multiple students and then displays the stored information.

---

## Features

* Uses C++ class and objects
* Accepts student details:

  * Roll Number
  * Name
  * Marks
* Stores multiple student records
* Displays all student information
* Uses dynamic memory allocation
* Supports names with spaces

---

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* Dynamic Memory Allocation
* Standard Input/Output

---

## Program Structure

The program contains:

### Class: Student

**Data Members**

* `roll` → Student roll number
* `name` → Student name
* `marks` → Student marks

**Member Functions**

* `input()` → Takes student details from user
* `display()` → Displays student details

### Main Function

* Takes number of students
* Creates dynamic array of Student objects
* Calls input() for each student
* Calls display() to print student data
* Frees allocated memory

---

## How to Compile and Run

### Compile

```
g++ main.cpp -o main
```

### Run

```
./main
```

---

## Sample Input

```
Enter number of students: 2
Enter Roll Number: 1
Enter Name: John Smith
Enter Marks: 85
Enter Roll Number: 2
Enter Name: Alice
Enter Marks: 90
```

## Sample Output

```
--- Student Information ---

Student 1
Roll Number: 1
Name: John Smith
Marks: 85

Student 2
Roll Number: 2
Name: Alice
Marks: 90
```

---

## Concepts Demonstrated

* Classes and Objects
* Encapsulation
* Arrays of Objects
* Dynamic Memory (`new` and `delete`)
* Input using `getline()`
* Loops

---

## Author

Student Management System – C++ OOP Example
