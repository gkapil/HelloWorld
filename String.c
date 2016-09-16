#include <stdio.h>
<<<<<<< HEAD
char *my_strcpy(char *t, char *s)
+
{
   char *p = t;
     while (*t++ = *s++)
    ; 
   return p;
}
size_t my_strlen(char *s)
Added function
for strlen


=======

size_t my_wstrlen(const char *s)
>>>>>>> 218fa6ffba14e4b434ae7af3c46166a66fc624b1
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *s[] = 
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));

   return 0;
}
