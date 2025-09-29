

# EXPERIMENT 16: RECURSION AND EXCEPTION HANDLING IN C++

## AIM
To understand and implement **Recursion** and **Exception Handling** in C++ by writing a program that uses a recursive function and handles invalid inputs or run-time errors gracefully.

## TOOLS USED
- **Language:** C++ (any standard compiler such as g++, clang++)
- **Editor/IDE:** VS Code / Code::Blocks / Dev C++ / Terminal

## THEORY

### Recursion
Recursion is the process where a function calls itself directly or indirectly to solve a problem.  
It breaks a large problem into smaller sub-problems until a **base condition** is reached.

- **Base Case:** Condition where recursion stops.
- **Recursive Case:** Function calls itself with a smaller input.
- **Types:**  
  - **Direct Recursion:** Function calls itself.  
  - **Indirect Recursion:** Function A calls B, which calls A.  

**Advantages:**
- Simplifies code for repetitive tasks like factorial, Fibonacci, tree traversal, etc.

**Limitations:**
- Higher memory usage (stack frames).
- Risk of stack overflow if base case is missing.

---

### Exception Handling
Exception handling deals with run-time errors gracefully instead of abruptly terminating the program.  
C++ uses **`try` – `throw` – `catch`** blocks for this:

- `try` block encloses code that may throw an exception.
- `throw` statement signals an error condition.
- `catch` block handles the thrown exception.

**Advantages:**
- Provides a structured way to handle errors.
- Separates error-handling code from regular logic.
- Improves program stability and reliability.

---

### Combining Recursion and Exception Handling
In real programs, a recursive function can validate input or detect errors and use **exception handling** to report issues (e.g., negative numbers for factorial). This shows how both concepts work together.

---

## KEY POINTS
- **Recursion** = repeated self-calling until base condition.
- **Exception Handling** = controlled error detection and recovery.
- Together, they improve program **clarity** and **robustness**.

## PRACTICAL USE
- **Recursion:** Used in algorithms like factorial, Fibonacci, file directory traversal, etc.
- **Exception Handling:** Used to handle invalid inputs, file I/O errors, or memory allocation failures.

## EXPERIMENT 16(A): FACTORIAL USING RECURSION

### ALGORITHM

1. **Start** the program.
2. **Define** a recursive function `fact(n)`:
   - If `n <= 1`, return `1` (base case).
   - Otherwise, return `n * fact(n - 1)` (recursive call).
3. **In `main()`**, call `fact(5)` (or any positive integer) and store the result.
4. **Display** the returned factorial on the screen.
5. **End** the program.

## EXPERIMENT 16(B): SUM OF NUMBERS USING RECURSION

### ALGORITHM  

1. **Start** the program.  
2. **Define** a recursive function `add(n)`:
   - If `n <= 0`, return `0` (base case).  
   - Otherwise, return `n + add(n - 1)` (recursive call).  
3. **In `main()`**, call `add(100)` (or any positive integer) and store the result.  
4. **Display** the sum on the screen.  
5. **End** the program.  

## EXPERIMENT 16(C): REVERSE STRING USING RECURSION

### ALGORITHM

1. **Start** the program.  
2. **Define** a recursive function `reverseString(str)`:
   - If the current character `*str` is `'\0'`, **return** (base case).  
   - Otherwise, call `reverseString(str + 1)` recursively.  
   - After returning from recursion, **print** `*str`.  
3. **In `main()`**, declare a string `a` and call `reverseString(a)`.  
4. **Print** a newline after reversing.  
5. **End** the program.  

## EXPERIMENT 16(D): EXCEPTION HANDLING – DIVISION BY ZERO

### ALGORITHM

1. **Start** the program.  
2. **Declare** two float variables `a` and `b` to store input numbers, and `ans` to store the result.  
3. **Input** values for `a` and `b` from the user.  
4. **Use a try-catch block**:
   - In the `try` block, check if `b == 0`:  
     - If true, **throw** `b` as an exception.  
     - Else, compute `ans = a / b` and **print** the result.  
   - In the `catch` block, **catch** the float exception `c` and **display** an error message `"ERROR: Division by "` followed by `c`.  
5. **End** the program.  

## EXPERIMENT 16(E): EXCEPTION HANDLING – VOTER AGE VERIFICATION

### ALGORITHM

1. **Start** the program.  
2. **Declare** an integer variable `age`.  
3. **Prompt** the user to enter their age.  
4. **Use a try-catch block**:
   - In the `try` block:
     - **Check** if the input is valid:
       - If `cin >> age` fails or extra characters exist, **throw** a `runtime_error("Invalid input")`.
     - **Check** if `age < 18`:
       - If true, **throw** `age` as an exception.  
       - Else, **print** `"You are eligible to vote"`.  
   - In the first `catch` block, **catch** `int a` and **print** `"You are NOT allowed to vote"`.  
   - In the second `catch` block, **catch** `runtime_error &e` and **print** the error message.  
5. **End** the program.  

## CONCLUSION

In this experiment, we implemented **recursion** to solve problems like factorial calculation, summation, and string reversal,  
and explored **exception handling** to manage runtime errors and invalid inputs.  
The experiment demonstrated how recursion can simplify iterative logic and how exceptions improve program robustness,  
ensuring safe and predictable execution even when unexpected inputs occur.
# Experiment_15
