#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int iskeyword(char buffer[])
 {
  int i,flag=0;
   char keyword[32][20]={"if","else","do","while","int","main","float","switch","case",
                       "auto","static","void"};
  for(i=0;i<32;++i)
   {
    if(strcmp(keyword[i],buffer)==0)
     {
      flag=1;
      break;
     }
   return flag;
   }
 }
int ispunc(char ch)
  {
   int  i,flag=0;
   char pun[10]=",{}|';().";
        for(i=0;i<7;i++)
         {
          if(ch==pun[i])
          flag=1;
         break;
         }
      return flag;
   }
int main()
{
int i,j=0;
char ch,keyword[32][20],buffer[20],operators[]="+,-,*,/,%,=";
FILE *fp;
fp=fopen("lex.txt","r");
if(fp==NULL)
  {
   printf("\nError while opening the file\n"); 
   exit(0);
  }
while(ch=fgetc(fp)!=EOF)
  {
   for(i=0;i<50;++i) 
     {
      if(ch==operators[i])
         {
           buffer[j++]=ch;
           printf("\n %c is operator",ch);
          }
      else
       { 
              if(ispunc(ch))
               {
                buffer[j++]=ch;
                printf("\n %c is punctuation mark",ch);
                 }
                else if((ch==' '||ch=='\n')&&(j!=0))
                  {
                   buffer[j]='\0';
                   j=0;
                  }
                   else if(strcmp(keyword[i],buffer)==1)
                 printf("\n %s is keyword",buffer);
                     else
                    printf("\n %s is identifier",buffer);
               
       }
     }
   }            
fclose(fp);
return(0);
}










 





