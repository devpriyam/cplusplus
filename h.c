#include<stdio.h>
#include<string.h>
int main()
{ char s1[10],s2[10];
printf("enter first string");
gets(s1);
printf("enter second string");
gets(s2);
strcat(s1,s2);
puts(s1);
return 0;
}
