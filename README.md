# **PUSH_SWAP - 42 Network**  
<div align="center">
<img src="push_swap.png"/>
</div>
A sorting algorithm visualizer and instruction generator written in C, built under strict constraints using only stack operations.

---

## 🎯 Objective

Sort a list of integers using the **fewest possible operations**, given access to only two stacks (`a` and `b`) and a limited instruction set.

---

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
- `libft` library in the `Libft` directory.

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

- `push_swap.h`: header for mandatory part.
- `functions_*.c`: source files for push_swap (e.g., main.c, sort.c, push.c).
- `Makefile`: compilation automation.
- `Libft/`: directory for the libft library.
