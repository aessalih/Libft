# Introduction to LIBFT

The Libft project is a recommended assignment at my school, "1337 Coding School". It involves creating a library of functions that we will utilize in our upcoming projects.

## Assignments

	1- Declaring **global variables** is forbiden
	2- If you need helper functions to split a more complex function, define them as static functions.
	This way, their scope will be limited to the appropriate file.
	3- Place all your files at the root of your repository
	4- Turning in unused files is forbiden.
	5- Every .c files must compile with the flags **-Wall -Wextra -Werror**.
	6- You must use the command __ar__ to create your library. Using the libtool command is forbidden.
	7- Your **libft.a** has to be created at the root of your repository.
	8- Your **Makefile** must at least contain the rules **$(NAME)**, **all**, **clean**, **fclean** and **re**, and your Makefile must not *relink**.

## Mandatory part

**!!!!ALLOWED EXTERNAL FUNCTIONS**: write, malloc, free;

list of functions I need to create:

**isalpha**: checks for an alphabetic charachter;
**isdigit**: checks for a digit (0 through 9);
**isalnum**: checks for an alphanumeric character;
**isascii**: checks whether character is a 7-bit unsigned char value that fits into the ASCII
			charecter set;
**isprint**: checks for any printable character which is not a space or an alphanumeric character.
**strlen**: calculates the length of a string;
**memset**: fill memory with a constant byte;
**bzero**: erases the data in n bytes of the memory by writing zeros '\0';
**memcpy**: copies n bytes from memory area x to memory area y;
**memmove**: copies n bytes from memory area x to memory area y (memmove handles the overlap);
**strlcpy**: copies at most n - 1 character from s1 to s2;
**strlcat**: appends the NUL-terminated string s1 to the end of s2;
**toupper**: convert lowercase letters to uppercase;
**tolower**: convert uppercase letters to lowercase;
**strchr**: returns a pointer to the first occurence of a character;
**strrchr**: returns a pointer to the last occurence of a character;
**strncmp**: compare part of two strings
**memchr**: scan memory for a character;
**memcmp**: compare memory areas;
**strnstr**: locate a substring in a string;
**atoi**: convert a string to an integer;
**calloc**: allocate space in the heap, and initialize it with zero;
**strdup**: duplicate a string;
**substr**: allocates and returns a substring from the string.
**strjoin**: allocates and returns a new string, which is the result of the concatenation of s1 and s2;
**strtrim**: allocates and returns a copy of s1 with the characters specified in 'set' 
			removed from the beginning and the end of the string;
**split**: allocates and returns an array of strings obtained by splitting s using the character
			'c' as a delimiter. The array must end with a NULL pointer;
**itoa**: allocates and returns a string representing the integer received as an argument.
		Negative numbers must be handled.
**strmapi**: applies a function f to each character of the string s, passing its index as the first
			argument and the character itself as the second. A new string is created to collect the
			results from the successive applications of f.
**striteri**: applies the function f to each character of the string s, passing its index as the
			first argument. Each character is passed by adress to function to be modified if necessary.
**putchar_fd**: Outputs the character ’c’ to the given file descriptor.
**putstr_fd**: Outputs the string ’s’ to the given file descriptor.
**putendl_fd**: Outputs the string ’s’ to the given file descriptor followed by a newline.
**putnbr_fd**: Outputs the integer ’n’ to the given file descriptor.

## Bonus part

**On the bonus part we will manpulating lists: **

>
> typedef struct s_list
> {
> 	 void *content;
> 	 struct s_list *next;
> } t_list;
>

funtions to create:

**ft_lstnew**:Allocates (with malloc(3)) and returns a new node. The member variable
		’content’ is initialized with the value of the parameter ’content’. The variable
		’next’ is initialized to NULL;
**ft_lstadd_front**: Adds the node ’new’ at the beginning of the list;
**ft_lstsize**: Counts the number of nodes in a list;
**ft_lstlast**: Returns the last node of the list;
**ft_lstadd_back**: Adds the node ’new’ at the end of the list;
**ft_lstdelone**: Takes as a parameter a node and frees the memory of the node’s content
		using the function ’del’ given as a parameter and free the node. The memory of
		’next’ must not be freed;
**ft_lstclear**:Deletes and frees the given node and every successor of that node, using
		the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL;
**ft_lstiter**: Iterates the list ’lst’ and applies the function ’f’ on the content of each node;
**ft_lstmap**: Iterates the list ’lst’ and applies the function ’f’ on the content of each node.
		Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of a node if needed;
