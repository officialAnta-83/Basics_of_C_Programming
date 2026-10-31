#include <stdio.h>
#include <string.h>
int main()
{
char text[200],word[20],temp[20];
int i,j,gap, found=0;
printf("\n\n Enter any Sentence \n\n");
fgets(text,sizeof(text),stdin);
text[strcspn(text, "\n")] = '\0';
printf("\n\n Enter any word to search \n\n");
fgets(word,sizeof(word),stdin);
word[strcspn(word, "\n")] = '\0';
i=0;
while(word[i] !='\0')
i++;
gap=i;
for(i=0;text[i]!='\0';i++)
{
for(j=i;j<i+gap;j++)
temp[j-i]=text[j];
temp[j-i]='\0';
if(strcmp(temp,word)==0){
found++;}
}
printf("\n The number of occurence of the word = %d\n",found);
return 0;
}
