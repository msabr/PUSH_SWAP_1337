# **Libft - 42 Network**  

## **Overview**  
This project is the first step in my journey at **42 Network**. The goal of **Libft** is to rebuild essential functions from the C standard library, along with additional utility functions that will be useful throughout the entire curriculum. By implementing these functions, I gain a deeper understanding of low-level programming, memory management, and algorithmic problem-solving.  

## **Project Scope**  
Libft consists of multiple categories of functions, including:  

- **Libc Functions**: Rewriting standard library functions such as `strlen`, `strcpy`, `strcmp`, `memset`, `bzero`, and more.  
- **Memory Management**: Implementing functions like `malloc`, `free`, and `realloc` to handle dynamic memory allocation.  
- **String Manipulation**: Functions for handling and modifying strings efficiently.  
- **Linked Lists**: Implementing basic linked list structures and operations.  
- **Custom Utility Functions**: Additional helper functions that facilitate various tasks in future projects.  

### Key Features

- Sorts a stack using these operations:
  - `sa`: swap the top two elements of stack A.
  - `sb`: swap the top two elements of stack B.
  - `ss`: perform `sa` and `sb` simultaneously.
  - `pa`: push the top element of stack B to stack A.
  - `pb`: push the top element of stack A to stack B.
  - `ra`: rotate stack A upward (top element goes to bottom).
  - `rb`: rotate stack B upward.
  - `rr`: perform `ra` and `rb` simultaneously.
  - `rra`: reverse rotate stack A (bottom element goes to top).
  - `rrb`: reverse rotate stack B.
  - `rrr`: perform `rra` and `rrb` simultaneously.
- Optimizes for minimal instructions (e.g., ≤ 12 moves for 5 numbers, ≤ 700 for 100).
- Handles invalid inputs with an "Error" message.
- Bonus: validates sorting with a separate checker tool that processes custom instruction sequences.

### Restrictions

- Written in C, compliant with the 42 Norm.
- No unexpected crashes (e.g., segmentation faults).
- No memory leaks from heap allocations.
- Compiled with `-Wall -Wextra -Werror`.
- Limited to specified stack operations; no direct array sorting allowed.

## Getting Started

### Prerequisites

- C compiler (e.g., `clang`).
- `make` utility.
- `libft` library in the `lib/libft` directory.

### How to Build and Run

1. Clone the repository:

   ```bash
   git clone https://github.com/msabr/PUSH_SWAP_1337
   cd PUSH_SWAP_1337

2. Build the mandatory part:

   ```bash
   make

3. Run `push_swap` with a list of integers:

   ```bash
   ./push_swap <numbers>

#### Additional commands

- `make clean`: remove object files.
- `make fclean`: remove the program and object files.
- `make re`: rebuild everything.

## Project Structure

- `include/push_swap.h`: header for mandatory part.
- `src/*.c`: source files for push_swap (e.g., main.c, sort.c, push.c).
- `bonus/include/checker_bonus.h`: header for bonus part.
- `bonus/src/*.c`: source files for checker (e.g., main_bonus.c, instructions.c).
- `Makefile`: compilation automation.
- `lib/libft/`: directory for the libft library.
