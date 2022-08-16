#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int f(x, y)
{
	if (x > y)
		return x;
	else
		return y;
}
 
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a ,&b);
	int c = f(a, b);
	printf("%d", c);
	return 0;
}

#include <stdio.h>
int main()
{
    printf("    **\n");
    printf("    **\n");
    printf("************\n");
    printf("************\n");
    printf("   *  *\n");
    printf("   *  *\n");
    return 0;
}
#include <stdio.h>
int main()
{
    int x = 0;
    scanf("%d", &x);
    if (x % 5 == 0)

        printf("YES");

    else
        printf("NO");
    return 0;
}