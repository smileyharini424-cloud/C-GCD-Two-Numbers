# C GCD of Two Numbers

## Explanation

This program calculates the Greatest Common Divisor (GCD) of two integers.

The GCD is the largest positive integer that divides both numbers without leaving a remainder.

The program uses the Euclidean algorithm.

## Problem Statement

Write a C program to find the GCD of two integers using the Euclidean algorithm.

## Features

- Accepts two integers
- Calculates GCD
- Uses the Euclidean algorithm
- Uses a while loop
- Handles negative numbers
- Handles the special case of both numbers being zero

## How It Works

The program accepts two numbers.

The Euclidean algorithm repeatedly calculates the remainder of the first number divided by the second number.

The second number becomes the first number.

The remainder becomes the second number.

This continues until the second number becomes zero.

At that point the first number is the GCD.

## Technologies Used

- C
- GCC Compiler
- Code Editor

## Data Structure Used

No data structure is used.

## Methods Used

- main()
- printf()
- scanf()

## Algorithm Used

Euclidean Algorithm

## Control Structure Used

- while loop
- if statement

## Operators Used

- %
- =
- !=
- ==

## Program Flow

Start
↓
Read first number
↓
Read second number
↓
Convert negative values if necessary
↓
Check special case
↓
Calculate remainder
↓
Update the two numbers
↓
Repeat until second number becomes zero
↓
Display GCD
↓
End

## Sample Input

Enter first number: 48

Enter second number: 18

## Sample Output

GCD = 6

## Time Complexity

O(log(min(a, b)))

where a and b are the two input numbers.

## Space Complexity

O(1)

## Key Learning

This program teaches the Euclidean algorithm and demonstrates how repeated remainder operations can efficiently find the GCD.

## File Location

gcd.c

## Repository Structure

C-GCD-Two-Numbers/
├── README.md
└── gcd.c

## Author

V.Harini
