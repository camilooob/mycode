#include
int main(void)
{
	int c;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			putchar(' ');
			while ((c = getchar()) != EOF && c == ' ')
				;
		}
	}
}
