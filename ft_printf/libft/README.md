*This project has been created as part of the 42 curriculum by Munoguer*

# Description
This project is the essential library that will be used along the rest of the course it includes 43 functions such as:
* **ft_atoi**: Converts a string to an integer.
* **ft_bzero**: Fills a memory block with zeroes.
* **ft_calloc**: Allocates memory and sets all bytes to zero.
* **ft_isalnum**: Checks if a character is alphanumeric.
* **ft_isalpha**: Checks if a character is alphabetic.
* **ft_isascii**: Checks if a character belongs to the ASCII set.
* **ft_isdigit**: Checks if a character is a digit.
* **ft_isprint**: Checks if a character is printable.
* **ft_itoa**: Converts an integer into a string.
* **ft_lstadd_back**: Adds a new element to the end of a linked list.
* **ft_lstadd_front**: Adds a new element to the beginning of a linked list.
* **ft_lstclear**: Deletes and frees a linked list and all its contents.
* **ft_lstdelone**: Frees a single element of a linked list.
* **ft_lstiter**: Iterates through a linked list and applies a function to each element.
* **ft_lstlast**: Finds and returns the last element of a linked list.
* **ft_lstmap**: Iterates through a linked list, applies a function, and creates a new list.
* **ft_lstnew**: Creates a new linked list element.
* **ft_lstsize**: Counts the number of elements in a linked list.
* **ft_memchr**: Locates a specific byte in a memory block.
* **ft_memcmp**: Compares two memory blocks.
* **ft_memcpy**: Copies a memory area to another.
* **ft_memmove**: Copies memory safely even if the source and destination regions overlap.
* **ft_memset**: Fills a memory area with a specific byte value.
* **ft_putchar_fd**: Writes a character to a given file descriptor.
* **ft_putendl_fd**: Writes a string followed by a newline to a given file descriptor.
* **ft_putnbr_fd**: Writes an integer to a given file descriptor.
* **ft_putstr_fd**: Writes a string to a given file descriptor.
* **ft_split**: Splits a string into an array of strings using a delimiter character.
* **ft_strchr**: Locates the first occurrence of a character in a string.
* **ft_strdup**: Duplicates a string by allocating new memory.
* **ft_striteri**: Applies a function to each character of a string, passing its index.
* **ft_strjoin**: Concatenates two strings into a newly allocated string.
* **ft_strlcat**: Safely concatenates a string with a size limit.
* **ft_strlcpy**: Safely copies a string with a size limit.
* **ft_strlen**: Calculates the length of a string.
* **ft_strmapi**: Applies a function to each character of a string, returning a new string.
* **ft_strncmp**: Compares two strings up to a specific number of characters.
* **ft_strnstr**: Locates a substring inside a string up to a maximum length.
* **ft_strrchr**: Locates the last occurrence of a character in a string.
* **ft_strtrim**: Trims specified characters from the beginning and end of a string.
* **ft_substr**: Extracts a substring from a string.
* **ft_tolower**: Converts an uppercase letter to lowercase.
* **ft_toupper**: Converts a lowercase letter to uppercase.
Along with the Header file and the Makefile with clean fclean and re instructions.

# Instructions
This library is compiled using the objects and the ar command with the rcs flags, the objects are compiled using cc and -Wall -Werror -Wextra flags as well as -c. All is done in the makefile and for later usage you need only to have both libft .h and .a in the file and compile with libft.a
## Make
Using make compiles all .c's into objects and compiles all .o's into the libft.a
Is the same thing as using Make all.

## Make clean
Removes all .o's

## Make fclean
Removes all .o's and the libft.a

## Make re
Executes fclean and all

# Resources

For general doubts about concepts I used geeksforgeeks.
For logic problems I relied on my peers.
and for debbuging, when I was really tired I used duck debbuger A.I. which doesen't tell me the problem but helps me notice it myself.