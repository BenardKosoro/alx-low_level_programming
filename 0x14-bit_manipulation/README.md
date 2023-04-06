0x14. C - Bit manipulation

Resources
Read or watch:
	1. Google
	2. Youtube

Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

General
	Look for the right source of information without too much help
	How to manipulate bits and use bitwise operators

Copyright - Plagiarism
	You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
	You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
	You are not allowed to publish any content of this project.
	Any form of plagiarism is strictly forbidden and will result in removal from the program.

Requirements
General

	Allowed editors: vi, vim, emacs
	All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
	All your files should end with a new line
	A README.md file, at the root of the folder of the project is mandatory
	Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
	You are not allowed to use global variables
	No more than 5 functions per file
	The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
	You are allowed to use _putchar
	You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
	In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
	The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
	Don’t forget to push your header file
	All your header files should be include guarded

Files

1. 0_Write a function that converts a binary number to an unsigned int.
	Where b is pointing to a string of 0 and 1 chars

	Return: the converted number, or 0 if
	there is one or more chars in the string b that is not 0 or
	b is NULL

2. 1_Write a function that prints the binary representation of a number.
	You are not allowed to use arrays
	You are not allowed to use malloc
	You are not allowed to use the % or / operators

3. 10_Write a function that returns the value of a bit at a given index.
	Where index is the index, starting from 0 of the bit you want to get
	Returns: the value of the bit at index index or -1 if an error occured.

4. 11_Write a function that sets the value of a bit to 1 at a given index.
	Where index is the index, starting from 0 of the bit you want to set
	Returns: 1 if it worked, or -1 if an error occurred

5. 100_Write a function that sets the value of a bit to 0 at a given index.
	Where index is the index, starting from 0 of the bit you want to set
	Returns: 1 if it worked, or -1 if an error occurred

6. 101_Write a function that returns the number of bits you would need to flip to get from one number to another.
	You are not allowed to use the % or / operators

7. Endianness_Write a function that checks the endianness.
	Returns: 0 if big endian, 1 if little endian

8. Crackme3_Find the password for this program.
	Save the password in the file 101-password
	Your file should contain the exact password, no new line, no extra space

Languages
C programing

Author
Benard Osoro
email: benard.osoro@gmail.com
Github: BenardKosoro

