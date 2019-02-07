#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void main()
{
	int key,temp,i;
	char ch,text[100],cipher[100];
	printf("a-z -> %d - %d, A-Z -> %d-%d \n",(int)'a',(int)'z',(int)'A',(int)'Z');
	printf("\n Enter the plain text : ");
	gets(text);
	//fgets(text,20,stdin);
	//scanf("%s",text);
	printf("\n Enter the key : ");
	scanf("%d",&key);
	printf("%d",strlen(text));
	for(i = 0; i < strlen(text); i++)
	{
		temp = (int)text[i];
		if( temp >= 97 && temp <= 122)
		{		
			temp = ((temp + key - 97) % 26);
			//printf("temp -> %d plain -> %c \n",temp,text[i]);
			cipher[i] = (char)(temp + 97);
			//printf("cipher -> %c \n",cipher[i]);
		}
		else if( temp >= 65 && temp <= 90)
		{
			temp = ((temp + key -65) % 26);
			cipher[i] = (char)(temp + 65);
		} 
		else
		{
			cipher[i] = text[i];
		}
	}
	cipher[i] = '\0';
	printf("Cipher text : ");
	puts(cipher);
}
