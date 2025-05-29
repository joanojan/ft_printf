#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	char	*s = "foo";
	int		result;

	/* Test 1. print a string */
	printf("-- Test 1:\nft_printf: ");
	fflush(stdout);
	result = ft_printf("%s$\n", s);
	printf("result: %d\n", result);
	printf("printf: ");
	result = printf("%s$\n", s);
	printf("result: %d\n", result);
	/* Test 2. print % */
	printf("-- Test 2:\nresult = printf(\"%%$\\n\");\n");
	result = printf("%%$\n");
	printf("result = %d\n", result);
	printf("result = ft_printf(\"ft_printf %%$\\n\");\n");
	result = ft_printf("%%$\n");
	printf("result = %d\n", result);
	/* Test 3. print empty string */
	printf("-- Test 3:\nresult = printf(\"\");\n");
	result = printf("");
	printf("result = %d\n", result);
	printf("result = ft_printf(\"\");\n");
	result = ft_printf("");
	printf("result = %d\n", result);
	/* Test 4. print NULL as string */
	printf("-- Test 4:\nresult = printf(\"%%s$\\n\", NULL);\n");
	result = printf("%s$\n", NULL);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%s$\\n\", NULL);\n");
	result = ft_printf("%s$\n", NULL);
	printf("result = %d\n", result);
	/* Test 5. print char */
	printf("-- Test 5:\nresult = printf(\"%%c$\\n\", 'x');\n");
	result = printf("%c$\n", 'x');
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%c$\\n\", 'x');\n");
	result = ft_printf("%c$\n", 'x');
	printf("result = %d\n", result);
	/* Test 6. print char passing NULL */
	printf("=== Test 6:\nresult = printf(\"<%%c>\\n\", NULL);\n");
	result = printf("<%c>\n", NULL);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"<%%c>\\n\", NULL);\n");
	result = ft_printf("<%c>\n", NULL);
	printf("result = %d\n", result);
	/* Test 7. print integer values */
	printf("=== Test 7:\nresult = printf(\"%%d\\n\", INT_MIN);\n");
	result = printf("%d\n", INT_MIN);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%d\\n\", INT_MIN);\n");
	result = ft_printf("%d\n", INT_MIN);
	printf("result = %d\n", result);
	/* Test 8. print integer max + 1 */
	printf("=== Test 8:\nresult = printf(\"%%d\\n\", INT_MAX + 1);\n");
	result = printf("%d\n", INT_MAX + 1);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%d\\n\", INT_MAX + 1);\n");
	result = ft_printf("%d\n", INT_MAX + 1);
	printf("result = %d\n", result);
	/* Test 9. print unsigned integer */
	printf("=== Test 9:\nresult = printf(\"%%u\\n\", UINT_MAX);\n");
	result = printf("%u\n", UINT_MAX);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%u\\n\", UINT_MAX);\n");
	result = ft_printf("%u\n", UINT_MAX);
	printf("result = %d\n", result);
	/* Test 10. print pointers */
	printf("=== Test 10: result = printf(\"%%p\\n\", &result);\n");
	result = printf("%p\n", &result);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%p\\n\", &result);\n");
	result = ft_printf("%p\n", &result);
	printf("result = %d\n", result);
	/* Test 10 bis print null pointers */
	printf("=== Test 10 bis: result = printf(\"%%p\\n\", 0);\n");
	result = printf("%p\n", 0);
	printf("result = %d\n", result);
	printf("result = ft_printf(\"%%p\\n\", 0);\n");
	result = ft_printf("%p\n", 0);
	printf("result = %d\n", result);
	/* Test 11. print hexadecimal values */
	unsigned int x = 274348;
	printf("=== Test 11.1: int x = 274348; result = printf(\"%%x\\n\", x);\n");
	result = printf("%x\n", x);
	printf("result = ft_printf(\"%%x\\n\", x);\n");
	result = ft_printf("%x\n", x);
	printf("=== Test 11.2: result = printf(\"%%X\\n\", x);\n");
	result = printf("%X\n", x);
	printf("result = ft_printf(\"%%X\\n\", x);\n");
	result = ft_printf("%X\n", x);
	return 0;
 }
