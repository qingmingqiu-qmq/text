#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int i=0,j=0;
    char s,t;
    char a[100];
    char *p;
    scanf("%c%c ",&s,&t);
    gets(a);
    p=a;
	if(s=='-'&&t=='c')
	{
		for(;*p!='\0';p++)
		{
			
			if((*p>='a' && *p<='z')||(*p>='A' && *p<='Z')||(*p==' ')||(*p=='\n')||(*p=='\t'))
			{
				 i++;
			}
			 
			   
		}
		printf("%d",i);
	 } 
	 else
	 {
	 	for(;*p!='\0';p++)
	 	{
	 		if(*p==' '||*p==',')
	 		    i++;
		 }
		 printf("%d",i+1);
	 }
		

	return 0;
}
