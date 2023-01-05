#include<stdio.h>
int main()
{
  char s[20];
  int i,v=0,space=0,spclchar=0,c=0;
  printf("enter the string");
  gets(s);
  for(i=0;s[i]!='\0';i++)
  {
    if(s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='o'||s[i]=='O')
    {
      v++;
    }
    else if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
    {
      c++;
    }
    else if(s[i]==' ')
    {
      space++;
    }
    else
    {
      spclchar++;
    }
  }
  printf("vowels=%d\n",v);
  printf("consonants=%d",c);
  printf("space=%d",space);
  printf("spclchar=%d",spclchar);
}
