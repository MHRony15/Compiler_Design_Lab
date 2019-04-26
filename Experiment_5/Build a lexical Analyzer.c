#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    gets(ch);
puts(ch);
    int c=0,d=0,e=0;
    int n=strlen(ch);
    for(int i=0;i<strlen(ch);i++)
    {
        if(((ch[0]>='a' && ch[0]<='h' )|| (ch[0]>='A' && ch[0]<='H')) || (ch[0]>='o' && ch[0]<='z' ) || (ch[0]>='O' && ch[0]<='Z' ) || (i>0 && ((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z' ) || (ch[i]>='0' || ch[i]<='9')))) c++;
        if((ch[0]>='1' && ch[0]<='9') || (i>0 && (ch[i]>='0' &&  ch[i]<='9'))) d++;
    }
    if(c==n) printf("Integer Variable\n");
    if(d==n )
    {
        if(d<=4)
        printf("ShortInt Number\n");
        else
        printf("LongInt Number\n");
    }
    if(c!=n && d!=n) printf("Invalid Input or Undefined\n");
}


