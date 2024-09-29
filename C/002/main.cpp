#include<stdio.h>
#include<math.h>
int main()
{
	float y, x, z;

	printf("That day\n");
	printf("The first time I met you\n");
	printf("Can't forget\n");
	printf("Your appearance\n");
	printf("Like a light cloud covering the moon, like a flowing wind blowing back the snow\n");
	printf("\n\n\n");
	printf("In fact\n");
	printf("There is a sentence\n");
	printf("I've always wanted to tell you:\n");

	for (double y = 2.5; y >= -1.6; y = y - 0.2)
	{
		for (double x = -3; x <= 4.8; x = x + 0.1)
		{
			(pow((x * x + y * y - 1), 3) <= 3.6 * x * x * y * y * y
				|| (x > -2.4 && x < -2.1 && y<1.5 && y>-1)
				|| (((x < 2.5 && x>2.2) || (x > 3.4 && x < 3.7)) && y > -1 && y < 1.5)
				|| (y > -1 && y < -0.6 && x < 3.7 && x>2.2)) ? printf("*") : printf(" ");
		}

		printf("\n");
	}

	getchar();
}
