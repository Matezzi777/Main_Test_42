#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"

int	main(void)
{
	int		exp;
	int		act;
	int		var;
	
	printf("========== TEST %%c ==========\n");
	exp = printf("\'%c\'\n", 'A');
	act = ft_printf("\'%c\'\n", 'A');
	printf("EXP (%d) | ACT (%d)\n", exp, act);
	exp = printf("\'%c\'\n", ' ');
        act = ft_printf("\'%c\'\n", ' ');
        printf("EXP (%d) | ACT (%d)\n", exp, act);
	exp = printf("\'%c\'\n", 0);
        act = ft_printf("\'%c\'\n", 0);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
	exp = printf("\'OKI D%cK%c\'\n", 'O', 'I');
        act = ft_printf("\'OKI D%cK%c\'\n", 'O', 'I');
        printf("EXP (%d) | ACT (%d)\n", exp, act);
	
	printf("\n========== TEST %%s ==========\n");
	exp = printf("\'%s\'\n", "");
        act = ft_printf("\'%s\'\n", "");
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%s\'\n", "Hello World !");
        act = ft_printf("\'%s\'\n", "Hello World !");
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'Welcome %s\'\n", "to 42.");
        act = ft_printf("\'Welcome %s\'\n", "to 42.");
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%s\'\n", NULL);
        act = ft_printf("\'%s\'\n", NULL);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
	
	printf("\n========== TEST %%d / %%i ==========\n");
        exp = printf("\'%d\'\n", 0);
        act = ft_printf("\'%d\'\n", 0);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%d\'\n", 9);
        act = ft_printf("\'%d\'\n", 9);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%d\'\n", -9);
        act = ft_printf("\'%d\'\n", -9);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%d\'\n", 42);
        act = ft_printf("\'%d\'\n", 42);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%d\'\n", -42);
        act = ft_printf("\'%d\'\n", -42);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%d\'\n", 2147483647);
        act = ft_printf("\'%d\'\n", 2147483647);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%d\'\n", -2147483648);
        act = ft_printf("\'%d\'\n", -2147483648);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%d\'\n", 1000000000000000000000);
        act = ft_printf("\'%d\'\n", 1000000000000000000000);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
	exp = printf("\'%i\'\n", 9);
        act = ft_printf("\'%i\'\n", 9);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%i\'\n", -9);
        act = ft_printf("\'%i\'\n", -9);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%i\'\n", 42);
        act = ft_printf("\'%i\'\n", 42);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%i\'\n", -42);
        act = ft_printf("\'%i\'\n", -42);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%i\'\n", 2147483647);
        act = ft_printf("\'%i\'\n", 2147483647);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%i\'\n", -2147483648);
        act = ft_printf("\'%i\'\n", -2147483648);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%i\'\n", 1000000000000000000000);
        act = ft_printf("\'%i\'\n", 1000000000000000000000);
        printf("EXP (%d) | ACT (%d)\n", exp, act);

	printf("\n========== TEST %%p ==========\n");
	var = 4242;
	exp = printf("\'%d at %p\'\n", var, &var);
	act = ft_printf("\'%d at %p\'\n", var, &var);
	printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'Null pointer : %p\'\n", NULL);
        act = ft_printf("\'Null pointer : %p\'\n", NULL);
        printf("EXP (%d) | ACT (%d)\n", exp, act);

	printf("\n========== TEST %%u ==========\n");
	exp = printf("\'%u\'\n", 0);
        act = ft_printf("\'%u\'\n", 0);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%u\'\n", 9);
        act = ft_printf("\'%u\'\n", 9);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%u\'\n", 42);
        act = ft_printf("\'%u\'\n", 42);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%u\'\n", 2147483647);
        act = ft_printf("\'%u\'\n", 2147483647);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%u\'\n", 2147483648);
        act = ft_printf("\'%u\'\n", 2147483648);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%u\'\n", 4294967295);
        act = ft_printf("\'%u\'\n", 4294967295);
        printf("EXP (%d) | ACT (%d)\n", exp, act);
        exp = printf("\'%u\'\n", -42);
        act = ft_printf("\'%u\'\n", -42);
        printf("EXP (%d) | ACT (%d)\n", exp, act);

}
