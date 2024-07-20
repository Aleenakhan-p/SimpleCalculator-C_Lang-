# Simple Calculator
## Overview
This project is a simple calculator implemented in C. It provides functionality to perform basic arithmetic operations: addition, subtraction, multiplication, and division. Users can input up to 10 operands for each operation, and the program will compute and display the result. The calculator also allows users to perform multiple calculations in one session.

## Features
- **Addition:** Computes the sum of up to 10 operands.
- **Subtraction:** Computes the difference of up to 10 operands.
- **Multiplication:** Computes the product of up to 10 operands.
- **Division:** Computes the quotient of up to 10 operands.
- **User Interaction:** Prompts the user to continue with more calculations or exit.
- **Input Validation:** Checks for valid input and handles incorrect choices gracefully.

## Compilation and Execution
1. **Compile the Program:** Use a C compiler like `gcc` to compile the code. Open your terminal and navigate to the directory containing `calculator.c`:
```console
gcc -o calculator 400LinesOfCode.c
```
2. **Run the Program:** Execute the compiled program:
```console
./calculator
```

## Usage
1. **Starting the Calculator:**
When you start the program, you'll be prompted to select an arithmetic operation:
```console
Which operation do you want to perform 
Select from these: { + for Addition, - for Subtraction, * for Multiplication, / for Division }
```
2. **Input Operands:**
Based on your choice, the program will ask you to enter the number of operands (up to 10). Enter the values separated by spaces.

3. **View Result:**
After performing the calculation, the result will be displayed with two decimal places.

4. **Continue or Exit:**
You will be asked if you want to perform more calculations. Enter 'Y' or 'y' to continue or 'N' or 'n' to exit the program.

## Example
Here’s an example session:

```console
Which operation do you want to perform 
Select from these: { + for Addition, - for Subtraction, * for Multiplication, / for Division }
+

Enter number of operands(maximum 10) you want to perform addition of: 3

Enter values for 3 operands :1 2 3

Required answer is:6.00
Are you interested in performing more calculations?
Choose ('Y'/'y' for yes
'N'/'n' for no) y

Now, Which operation do you want to perform
Select from these: { + for Addition, - for Subtraction, * for Multiplication, / for Division }
*

Enter number of operands(maximum 10) you want to perform product of: 2

Enter values for 2 operands :4 5

Required answer is:20.00
Are you interested in performing more calculations?
Choose ('Y'/'y' for yes
'N'/'n' for no) n

Okay so you are not interested in performing more calculations
So bye! :)
Happy Coding ...bye
Hopefully, you liked using this simple calculator

        ~MADE BY @ALEENA KHAN
        ---------------------
```

## Error Handling
- **Invalid Operand Count:** If the number of operands is less than 2 or more than 10, the program will prompt you to enter a valid number.
- **Invalid Operation:** If an invalid operation character is entered, the program will request a valid input.
## Limitations
- **Division by Zero:** The program does not handle division by zero explicitly. Input values should be carefully chosen to avoid this error.
- **Single Operand Operations:** The program requires at least two operands for addition, subtraction, multiplication, and division.
