#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>
#include <unistd.h>
#include "libft.h"

// Helper Functions for Tests
static char	sample_mapi(unsigned int i, char c)
{
	(void)i;
	return ((char)ft_toupper(c));
}

static void	sample_iteri(unsigned int i, char *c)
{
	(void)i;
	c[i] = (char)ft_tolower(c[i]);
}

static void	del_content(void *content)
{
	free(content);
}

static void	iter_print(void *content)
{
	printf("%s ", (char *)content);
}

static void	*map_uppercase(void *content)
{
	char *str = strdup((char *)content);
	if (!str)
		return (NULL);
	for (int i = 0; str[i]; i++)
		str[i] = (char)ft_toupper(str[i]);
	return (str);
}

/* --- Main Function --- */

int	main(int argc, char **argv)
{
	printf("--- Command Line Input ---\n");
	printf("argc: %d\n", argc);
	for (int i = 0; i < argc; i++)
		printf("argv[%d]: %s\n", i, argv[i]);
	printf("\n");

	/* 1. Character checks */
	printf("--- 1. Is Family ---\n");
	printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
	printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
	printf("ft_isalnum('a'): %d\n", ft_isalnum('a'));
	printf("ft_isascii(127): %d\n", ft_isascii(127));
	printf("ft_isprint(' '): %d\n", ft_isprint(' '));

	/* 2. String & Memory Basics */
	printf("\n--- 2. String & Memory Basics ---\n");
	char str1[50] = "Hello 42!";
	printf("ft_strlen(\"%s\"): %i\n", str1, ft_strlen(str1));

	char bzero_buf[10] = "abcdefghi";
	ft_bzero(bzero_buf, 4);
	printf("ft_bzero: buf[0]=%d, buf[3]=%d, buf[4]=%c\n", bzero_buf[0], bzero_buf[3], bzero_buf[4]);

	char set_buf[10];
	ft_memset(set_buf, 'B', 5);
	set_buf[5] = '\0';
	printf("ft_memset: %s\n", set_buf);

	char cpy_buf[20];
	ft_memcpy(cpy_buf, "Copy test", 10);
	printf("ft_memcpy: %s\n", cpy_buf);

	char move_buf[20] = "123456789";
	ft_memmove(move_buf + 2, move_buf, 5);
	printf("ft_memmove: %s\n", move_buf);

	char dst[20] = "Hello ";
	printf("ft_strlcpy ret: %zu\n", ft_strlcpy(dst, "World", sizeof(dst)));
	printf("ft_strlcat ret: %zu, dst: %s\n", ft_strlcat(dst, "!!!", sizeof(dst)), dst);

	/* 3. Conversions & Searching */
	printf("\n--- 3. Conversions & Searching ---\n");
	printf("ft_toupper('a'): %c\n", ft_toupper('a'));
	printf("ft_tolower('Z'): %c\n", ft_tolower('Z'));
	printf("ft_strchr(\"42 School\", 'S'): %s\n", ft_strchr("42 School", 'S'));
	printf("ft_strrchr(\"42 School 42\", '4'): %s\n", ft_strrchr("42 School 42", '4'));
	printf("ft_strncmp(\"abc\", \"abd\", 2): %d\n", ft_strncmp("abc", "abd", 2));
	printf("ft_memchr(\"abcdef\", 'd', 6): %s\n", (char *)ft_memchr("abcdef", 'd', 6));
	printf("ft_memcmp(\"abc\", \"abc\", 3): %d\n", ft_memcmp("abc", "abc", 3));
	printf("ft_strnstr(\"Foo Bar Baz\", \"Bar\", 10): %s\n", ft_strnstr("Foo Bar Baz", "Bar", 10));

	const char *num_str = (argc > 1) ? argv[1] : "-2147483648";
	printf("ft_atoi(\"%s\"): %d\n", num_str, ft_atoi(num_str));

	char *calloc_ptr = (char *)ft_calloc(5, sizeof(char));
	printf("ft_calloc allocated successfully: %s\n", (calloc_ptr != NULL) ? "YES" : "NO");
	free(calloc_ptr);

	char *dup = ft_strdup("Duplicate me");
	printf("ft_strdup: %s\n", dup);
	free(dup);

	/* 4. String Manipulation Functions */
	printf("\n--- 4. String Manipulations ---\n");

	char *sub = ft_substr("Hello World", 6, 5);
	printf("ft_substr: %s\n", sub);
	free(sub);

	char *join = ft_strjoin("42 ", "Lisbon");
	printf("ft_strjoin: %s\n", join);
	free(join);

	char *trim = ft_strtrim("  \t Hello 42 \t ", " \t");
	printf("ft_strtrim: %s\n", trim);
	free(trim);

	printf("ft_split(\"read,write,execute\", ','):\n");
	char **split = ft_split("read,write,execute", ',');
	if (split)
	{
		for (int i = 0; split[i] != NULL; i++)
		{
			printf("  [%d]: %s\n", i, split[i]);
			free(split[i]);
		}
		free(split);
	}

	char *itoa_res = ft_itoa(-12345);
	printf("ft_itoa(-12345): %s\n", itoa_res);
	free(itoa_res);

	char *mapi_res = ft_strmapi("make me upper", sample_mapi);
	printf("ft_strmapi: %s\n", mapi_res);
	free(mapi_res);

	char iteri_str[] = "MAKE ME LOWER";
	ft_striteri(iteri_str, sample_iteri);
	printf("ft_striteri: %s\n", iteri_str);

	/* 5. File Descriptor Output Functions */
	printf("\n--- 5. Put FD Functions (Outputting to STDOUT) ---\n");
	printf("ft_putchar_fd: ");
	fflush(stdout);
	ft_putchar_fd('X', 1);
	printf("\n");

	printf("ft_putstr_fd: ");
	fflush(stdout);
	ft_putstr_fd("Testing putstr", 1);
	printf("\n");

	printf("ft_putendl_fd: ");
	fflush(stdout);
	ft_putendl_fd("Testing putendl", 1);

	printf("ft_putnbr_fd: ");
	fflush(stdout);
	ft_putnbr_fd(-2147483648, 1);
	printf("\n");

	/* 6. Linked List (Bonus) Functions */
	printf("\n--- 6. Linked List (Bonus) Functions ---\n");
	t_list *head = ft_lstnew(strdup("Node 2"));
	t_list *node1 = ft_lstnew(strdup("Node 1"));
	t_list *node3 = ft_lstnew(strdup("Node 3"));

	ft_lstadd_front(&head, node1);
	ft_lstadd_back(&head, node3);

	printf("ft_lstsize: %d\n", ft_lstsize(head));
	printf("ft_lstlast: %s\n", (char *)(ft_lstlast(head)->content));

	printf("ft_lstiter contents: ");
	ft_lstiter(head, iter_print);
	printf("\n");

	t_list *mapped_list = ft_lstmap(head, map_uppercase, del_content);
	printf("ft_lstmap (uppercase) contents: ");
	ft_lstiter(mapped_list, iter_print);
	printf("\n");

	ft_lstclear(&mapped_list, del_content);

	// Test ft_lstdelone on extra node
	t_list *temp_node = ft_lstnew(strdup("Single Node"));
	ft_lstdelone(temp_node, del_content);
	printf("ft_lstdelone: Successfully executed\n");

	ft_lstclear(&head, del_content);
	printf("ft_lstclear: Successfully cleared main list\n");

	return (0);
}