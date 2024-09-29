This C program checks whether a given input string represents a valid comment in C or C++ and then displays the total length of the string. The program works with both single-line and multi-line comments.

Key Features:
Input Handling: The program reads the comment as input from the user using gets() (which is unsafe and can be replaced with fgets() for better security).

Comment Type Detection:

Single-line comments: Recognized by // at the start of the string.
Multi-line comments: Identified by /* at the start and */ at the end.
String Length Calculation: It uses strlen() to calculate the length of the entered string (number of characters).

Potential Issues:
Security: The function gets() can cause buffer overflows as it does not perform bounds checking. It is recommended to use fgets() to prevent such issues.
Example Output:
Input: // This is a comment

Output: It is a Comment. Total number of characters: 19
Input: /* This is a comment */

Output: It is a Comment. Total number of characters: 23
Input: This is not a comment

Output: It is not a Comment. Total number of characters: 21
