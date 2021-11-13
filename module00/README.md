# CPP Module 00

This first module of C++ is designed to understand the specifities of the language when compared to C.

## ex 00

Write a program that has the following behaviour:
```
$>./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$>./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
$>
```

## ex01

Write a program that behaves like a `phonebook software`. When the program starts, the user is prompted for input: you
should accept the `ADD` command, the `SEARCH` command or the `EXIT` command. Any other
input is discarded.

The program starts empty (no contacts), doesn’t use any dynamic allocation, and
can’t store more than 8 contacts. If a ninth contact is added, replace the oldest contact. 
A contact is defined by the following fields: first name, last name, nickname,
phone number,darkest secret.