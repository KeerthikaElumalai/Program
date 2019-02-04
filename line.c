int main(void)
{
char paragraph[1000];
int nbChar, nbSentences;
gets(paragraph);
nbChar = strlen(paragraph);
nbSentences = 0;
for ( int i=0; i<nbChar ; i++)
{
if (paragraph[i]=='.')
{
nbSentences++;
}
}
printf("\n\n%d", nbSentences);
return 0;
}
