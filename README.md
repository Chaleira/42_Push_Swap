# 42 Push_Swap

Welcome to the 42 Push_Swap project repository! This project is part of the 42 school curriculum and focuses on sorting a stack of integers using two stacks and a limited set of instructions.

## Introduction

The 42 Push_Swap project involves sorting a stack of integers in ascending order using two stacks (A and B) and a specific set of instructions. The goal is to write a program, called `push_swap`, that takes an unsorted list of integers as input and outputs a series of instructions that, when executed, will result in the integers being sorted in ascending order.

## Features

- Implementation of the push_swap sorting algorithm
- Use of two stacks and a limited set of instructions (see below)
- Sorting optimization to minimize the number of instructions

## Instructions

The `push_swap` program is allowed to use the following set of instructions:

- `sa`: Swap the first two elements at the top of stack A.
- `sb`: Swap the first two elements at the top of stack B.
- `ss`: `sa` and `sb` combined.
- `pa`: Push the top element from stack A onto stack B.
- `pb`: Push the top element from stack B onto stack A.
- `ra`: Rotate stack A (shift all elements up by one).
- `rb`: Rotate stack B (shift all elements up by one).
- `rr`: `ra` and `rb` combined.
- `rra`: Reverse rotate stack A (shift all elements down by one).
- `rrb`: Reverse rotate stack B (shift all elements down by one).
- `rrr`: `rra` and `rrb` combined.
