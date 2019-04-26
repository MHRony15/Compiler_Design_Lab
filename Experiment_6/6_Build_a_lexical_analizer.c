#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10000];
    gets(ch);

    int b=0,c=0,d=0,e=0;
    int n=strlen(ch);
    for(int i=0;i<strlen(ch);i++)
    {

        if(ch[0]=='c' || ch[1]=='h' || ch[2]=='_' || (ch[3]>='a' && ch[3]<='z') || (ch[3]>='A' && ch[3]<='Z') || (i>3 && ((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z' ) || (ch[i]>='0' || ch[i]<='9')))) c++;
        if(ch[0]=='b' || ch[1]=='n' || ch[2]=='_' || (ch[3]>='a' && ch[3]<='z') || (ch[3]>='A' && ch[3]<='Z') || (i>3 && ((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z' ) || (ch[i]>='0' || ch[i]<='9')))) b++;

        if((ch[0]=='0') || (i>0 && (ch[i]>='0' &&  ch[i]<='1'))) d++;
    }
    if(c==n) printf("Character Variable\n");
    if(b==n) printf("Binary Variable\n");
    if(d==n ) printf("Binary Number\n");

    if(c!=n && d!=n && b!=n) printf("Invalid Input or Undefined\n");
}


