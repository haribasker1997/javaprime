#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
#define low 1
#define high 0
void main() {
   int nob, now, nod, nov, nos, pos = high;
   char *str;
   nob = now = nod = nov = nos = 0;
   clrscr();
 
   printf("Enter any string : ");
   gets(str);
 
   while (*str != '\0') {
 
      if (*str == ' ') {
         pos = high;
         ++nob;
      } else if (pos == high) {
         pos = low;
         ++now;
      }
 
      if (isdigit(*str))
         ++nod;
      if (isalpha(*str))
         switch (*str) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
               ++nov;
               break;
         }
      if (!isdigit(*str) && !isalpha(*str))
         ++nos;
      str++;
   }
   printf("\nNumber of words  %d", now);
   printf("\nNumber of spaces %d", nob);
   printf("\nNumber of vowels %d", nov);
   printf("\nNumber of digits %d", nod);
   printf("\nNumber of special characters %d", nos);
   getch();
}