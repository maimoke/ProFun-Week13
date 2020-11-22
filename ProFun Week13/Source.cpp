#include<stdio.h>

int charcheck(char charinput)
{
	if (charinput >= 65 && charinput <= 90)
		return charinput - 64;
	else if (charinput >= 97 && charinput <= 122)
		return charinput - 96;
	return 0;
}


int main()
{
	int counter[30] = { 0 };
	char inputword[1000] ;
	scanf_s("%s",&inputword,1000);
	for (int i = 0; *(inputword+i) != '\0'; i++)
	{
		counter[charcheck(*(inputword+i))]++;
	}


	for (int i = 1; i <= 26; i++)
	{
		if (*(counter+i)>0)
		printf("%c: ", i+64);
		for (int j = 0; j < *(counter+i); j++)
		{
			printf("#");
		}
		if (*(counter+i) > 0)
		printf("\n");
	}
	return 0;
}