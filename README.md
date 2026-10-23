🚀 42 Exam Rank 02 — The Art of Pure Logic & Resilience by acamelo

This repository contains my personal solutions to all the C exercises practiced and mastered during my journey to overcome the 42 Exam Rank 02.

🌟 The Journey: 13 Attempts, 100/100, & Zero Shortcuts

Entering 42 Madrid with no prior coding background—after studying industrial engineering, working as a bartender, and tattooing—programming felt like learning an entirely foreign language.

Passing the Exam Rank 02 didn't happen overnight. It took me 13 attempts to finally achieve a 100/100 grade.

Why so many tries? Because I refused to memorize code blindly or rely on shortcuts. At 42, there is no AI, no internet, and no soft grading during exams—only you, a blank terminal, and the strict evaluation machine (Deepthought).

To pass, I had to completely dismantle how I approached learning. I learned that programming isn't about typing syntax; it’s about mindset, deep logical breakdown, and physical motor memory.

💡 What I Learned & The Mindset Shift

Through endless hours of debugging, pencil-and-paper tracing, and trial and error, I developed key core principles that reshaped my problem-solving skills:

Step-by-Step Logic Over Overcomplication:

I used to overthink algorithms and reach for complex memory allocations (malloc) or multi-layered loops when simple, linear low-level operations were needed.

I learned to break down problems into simple, single-pass visual operations (the "conveyor belt" model) before touching a single line of C.

Template Retrieval & Motor Memory:

In C, consistency is everything. I built mental templates for core algorithmic patterns: pointer arithmetic, single and double loops, static variable tracking, and recursive step conditions.

Writing clean code under strict time constraints became motor memory—initializing every variable explicitly (int i = 0;), enforcing edge-case checks, and handling read-only constraints (argv).

Demystifying Low-Level Mechanics:

ASCII & Math Tricks: Understanding why str[i] - '0' works by stepping into ASCII values, and accumulating numbers via res = (res * 10) + digit.

Pointers & Memory: Mastering memory addresses, standard string traversal, arrays of strings (char **argv), and handling multi-pointer references without segmentation faults.

Bit Manipulation: Learning to shift bits (>>, <<) and mask operations (& 1) to print or reverse binary representations natively.

Linked Lists: Understanding pointers pointing to custom structs, dynamic node allocation, list traversal, and memory cleanup.

Recursion: Building simple base cases to handle mathematical sequences and back-tracking logic cleanly.

📚 Repository Structure & Exam Levels

The exercises in this repository are categorized by their respective difficulty levels as structured in the 42 Exam System:

├── Level 1/   # String traversal, basic ASCII conversions, character manipulation
├── Level 2/   # Double pointer loops, string searches, math conversions, array matching
├── Level 3/   # Linked list traversal, recursive functions, memory allocation (malloc)
└── Level 4/   # Bitwise operations, complex linked list manipulation, dynamic structures


Key Topics & Exercises Covered:

Level 1: ft_putstr, ft_strlen, ft_strcpy, first_word, rot_13, repeat_alpha, ulstr, rev_print.

Level 2: ft_atoi, ft_strdup, ft_strcmp, ft_strcspn, ft_strspn, union, inter, is_power_of_2, max, snake_to_camel, camel_to_snake, alpha_mirror, do_op.

Level 3: ft_range, ft_rrange, add_prime_sum, epur_str, expand_str, hidenp, pgcd, paramsum, str_capitalizer, tab_mult, ft_list_size.

Level 4: ft_split, rev_wstr, rostring, sort_list, ft_list_remove_if, ft_itoa, print_hex, brainfuck.

🛠️ Instructions & Compilation

All exercises follow 42's Norm syntax standards and compile using cc with strict error flags:

# Example compiling a program exercise with flags
cc -Wall -Wextra -Werror main.c exercise.c -o exercise_test

# Testing an exercise (e.g., union)
./exercise_test "zpadinton" "paqefwtdjzgqer"


📖 Resources & Gratitude

42 Intra & Subject Statements: The original instructions that demanded relentless detail.

Peer Learning: Massive thanks to my campus peers at 42 Madrid for the whiteboard debugging sessions and sanity checks.

AI as a Tutor, Not a Code Generator: Used exclusively to explain underlying CS concepts, trace execution logic, and act as a virtual senior editor/coach rather than writing code for me.

🏆 Final Thought

"It doesn't matter how many times you hit a wall or get a 0 on Deepthought. What matters is taking things step-by-step, understanding the physics behind every line of C, and showing up one more time than you failed. Step by step always wins."

Created as part of the 42 curriculum by a proud 42 Madrid student.
