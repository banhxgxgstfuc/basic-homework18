#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int i,num[256]={0};
    printf("��J�@�r��:");
    scanf("%s",str);
    
	for(i=0;i<strlen(str);i++)
        num[(int)str[i]]++;
    
	for(i=0;i<256;i++)
        if(num[i]!=0)
            printf("�r��%c�X%d��\n",(char)i,num[i]);
}
 
