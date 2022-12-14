# C - Functions, nested loops

`0-putchar.c` - A program that prints `_putchar`, followed by a new line.
- The program should return `0`

`1-alphabet.c` - A function that prints the alphabet, in lowercase, followed by a new line.
- Prototype: `void print_alphabet(void);`
- You can only use `_putchar` twice in your code

`2-print_alphabet_x10.c` - A function that prints 10 times the alphabet, in lowercase, followed by a new line.
- Prototype: `void print_alphabet_x10(void);`
- You can only use `_putchar` twice in your code

`3-islower.c` - A function that checks for lowercase character.
- Prototype: `int _islower(int c);`
- Returns `1` if `c` is lowercase
- Returns `0` otherwise
- FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

`4-isalpha.c` - A function that checks for alphabetic character.
- Prototype: `int _isalpha(int c);`
- Returns `1` if `c` is a letter, lowercase or uppercase
- Returns `0` otherwise
- FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

`5-sign.c` - A function that prints the sign of a number.
- Prototype: `int print_sign(int n);`
- Returns `1` and prints `+` if `n` is greater than zero
- Returns `0` and prints `0` if `n` is zero
- Returns `-1` and prints `-` if `n` is less than zero

`6-abs.c` - A function that computes the absolute value of an integer.
- Prototype: `int _abs(int);`
- FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

`7-print_last_digit.c` - A function that prints the last digit of a number.
- Prototype: `int print_last_digit(int);`
- Returns the value of the last digit
