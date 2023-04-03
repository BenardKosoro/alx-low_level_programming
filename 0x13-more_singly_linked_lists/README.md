
0x13.C - More singly linked lists

More Linked Lists

Description

This Repo has some of my projects for a software development program. The focus of these projects is learning the C Programming Language.

General Objectives

At the end of this project, you are expected to bne able to explain to anyone without the help of google
1. How to use linked lists
2. Start to look for the right source of information without too much help.

Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.

Tasks

1. Print List
Write a function thst prints all the elements of a listint_t list
	Return: the number of nodes
	Format: see example
	You are allowed to use printf

2. List length
Write a function that returns the number of elements in a linked listint_t list.

3. Add node
Write a function that adds a new node at the beginning of a listint_t list.
	Return: the address of the new element, or NULL if it failed

4. Add node at the end
Write a function that adds a new node at the end of a listint_t list.
	Return: the address of the new element, or NULL if it failed

5. Free list
Write a function that frees a listint_t list.

6. Free
Write a function that frees a listint_t list.
	The function sets the head to NULL

7. Pop
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
	If the linked list is empty return 0

8. Get node at index
Write a function that returns the nth node of a listint_t linked list.
	Where index is the index of the node, starting at 0
	If the node does not exist, return NULL

9. Sum list
Write a function that returns the sum of all the data (n) of a listint_t linked list
	If the list is empty, return 0

10. Insert
Write a function that inserts a new node at a given position.
	Where idx is the index of the list where the new node should be added. Index starts at 0
	Returns: the address of the new node, or NULL if it failed
	If it is not possible to add the new node at index idx, do not add the new node and return NULL

11. Delete at index
Write a function that deletes the node at index index of a listint_t linked list.
	Where index is the index of the node that should be deleted. Index starts at 0
	Returns: 1 if it succeeded, -1 if it failed

12. Reverse list
Write a function that reverses a listint_t linked list.
	Returns: a pointer to the first node of the reversed list
	You are not allowed to use more than 1 loop.
	You are not allowed to use malloc, free or arrays
	You can only declare a maximum of two variables in your function

13. Print (safe version)
Write a function that prints a listint_t linked list.
	Returns: the number of nodes in the list
	This function can print lists with a loop
	You should go through the list only once
	If the function fails, exit the program with status 98
	Output format: see example

14. Free (safe version)
Write a function that frees a listint_t list.
	This function can free lists with a loop
	You should go though the list only once
	Returns: the size of the list that was free’d
	The function sets the head to NULL

15. Find the loop
Write a function that finds the loop in a linked list.
	Returns: The address of the node where the loop starts, or NULL if there is no loop
	You are not allowed to use malloc, free or arrays
	You can only declare a maximum of two variables in your function

Environment

OS: Ubuntu 14.04 LTS
Compiler: gcc 4.8.4 (C90)

Language: C

Primary Concepts Learned
	More linked lists!
	hen and why using linked lists vs arrays
	How to build and use linked lists using structs

C Functions used
	malloc, free and exit
Author
	benard Osoro, benard.osoro@gmail.com
