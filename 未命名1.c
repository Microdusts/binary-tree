#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
fun(char *s)
{
	int a,b,c;
	char temp;
	b=strlen(s);
	if(b%2==0)
	{
		c=b/2;
		for(a=0;a<c;a++)
		{
			temp=s[a];
			s[a]=s[b-1];
			s[b-1]=temp;
			b--;
		}
	}
	else
	{
		c=(b+1)/2;
		for(a=0;a<c;a++)
		{
			temp=s[a];
			s[a]=s[b-1];
			s[b-1]=temp;
			b--;
		}
	}
	return s;
}
int main()
{
	char a[]={"abcdefg"};
	printf("%s",fun(a));
}