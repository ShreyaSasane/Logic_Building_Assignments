README - Divide a Number by 5 Using Function 'check' with If-Else Statements

Objective:
-----------
To create a program that divides a given number by 5 using a function named 'check', and incorporates if-else statements in the main function for proper handling of the division process.

Description:
-------------
The program defines a function called 'check' which takes a number as input and divides it by 5. 
The main function contains if-else statements to handle specific cases (e.g., if the number is zero or negative) and calls the 'check' function accordingly.

Instructions:
--------------
1. Define a function named check:
   - The 'check' function will accept one input, a number, and divide it by 5.
   - The function will return or display the result of the division.

2. Implement if-else statements in the main function:
   - The main function will use an if-else structure to:
     a. Check if the number is valid (non-zero).
     b. If the number is valid (not zero), call the 'check' function to perform the division.
     c. If the number is zero, display an appropriate message (such as "Cannot divide by zero").
     d. Optionally, check if the number is negative and handle it accordingly (the division should work fine for negative numbers, but a message might be displayed for clarification).

3. Inside the check function:
   - Divide the number by 5.
   - Display or return the result of the division.

4. After defining the functions:
   - In the main function, accept or define a sample number.
   - Call the check function through the if-else structure to perform the operation.

Example Scenarios:
-------------------
- Input: 25
  - The main function checks if the number is non-zero, then calls check, and outputs: 25 divided by 5 = 5.

- Input: 0
  - The main function checks if the number is zero, and instead of calling check, it outputs: "Cannot divide by zero".

- Input: -15
  - The main function checks if the number is negative, calls check, and outputs: -15 divided by 5 = -3.

Expected Output:
-----------------
- If input is 25:
  Output: 5

- If input is 0:
  Output: Cannot divide by zero

- If input is -15:
  Output: -3

Expected Behavior:
-------------------
- The program should correctly handle valid inputs by dividing by 5.
- If the input is zero, the program should display a warning message.
- The division should work for both positive and negative numbers.

Notes:
-------
- The program handles division by 5 using a simple mathematical operation.
- The if-else statements help ensure that edge cases (like dividing by zero) are appropriately managed.
- This approach makes the program flexible for different scenarios and inputs.
