#include <stdio.h>
struct test
{
    /* data */
    unsigned a;
    unsigned b;
    unsigned c;
};

struct test abc;




int main(int argc, char const *argv[])
{
   abc.a = 10;
   abc.b = 20;
   abc.c = 30;

   printf("%d %d %d\n", abc.a,abc.b,abc.c);
}
