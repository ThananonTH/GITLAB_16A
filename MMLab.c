      /*
      Memory API Lab by Rajchawit Sarochawikasit
      step 1: Run this program with your student ID in first printf.
      step 2: Copy the output to a word program, and save it as Lab1.doc
      step 3: Lab1.doc; make the answer on the area that i provide for you. Question is "why the show up value be like this?" (give me information as much as you can)

      step 4: Modify code by uncomment the code below (2 places), and re-run this program
      step 5: Copy the output to a word program, and save it as Lab2.doc
      step 6: Lab2.doc; make the answer on the area that i provide for you. Question is "why the output change from Lab1.doc?"

      step 7: Send me Lab1.doc and Lab2.doc to me via myLE
      */

#include <stduio.h>
#include <stdlib.h>

main()
{
      int x;
      int Y;
      int z;
      int *a;
      float *b;

      printf("\n << write down your STUDENT ID >> \n");

      printf(">>%ppppppppp\n", &x);
      printf(">>%p\n", &y);
      printf(">>%p\n", &z);
      printf("Make the answer right here >>> \n\n\n\n");

      printf("\nAxxrexx of Pointer\n");
      printf(">>%p\n", &a);
      printf(">>%p\n", &b);
      printf("Make the answer right here >>> \n\n\n\n");

      printf("\nEffective ADDress\n");
      printf(">>%p\n", a);
      printf(">>%p\n", b);
      printf("Make the answer right here >>> \n\n\n\n");

      a = (int*) malloc(10*sizeof(int));
      printf("\nAfter malloc Pointer a\n");
      printf(">>%p\n", a);
      printf(">>%p\n", &a[0]);
      printf(">>%p\n", &a[9]);
      printf("Make the answer right here >>> \n\n\n\n");

/*      b = (float*) malloc(10*sizeof(float));
      printf("\nAfter malloc Pointer b\n");
      printf(">>%p\n", b);
      printf(">>%p\n", &b[0]);
      printf(">>%p\n", &b[9]);
      printf("Make the answer right here >>> \n\n\n\n");
*/
      a = (int*) realloc(a, 1000*sizeof(int));
      printf("\nAfter realloc Pointer a\n");
      printf(">>%p\n", a);
      printf(">>%p\n", &a[0]);
      printf(">>%p\n", &a[9]);
      printf(">>%p\n", &a[999]);
      printf("Make the answer right here >>> \n\n\n\n");

      free(a);
//      free(b);
      getch();
}
