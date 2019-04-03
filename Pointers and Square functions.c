/* LAB #1 - Example #4 */

#include <stdio.h>

int sqaure_no_pointers(int a , int b);
void sqaure_pointers(int *pa, int *pb);

int main(void)
{
    int a; int b; int *pa; int *pb;

    printf("give me an a \n");
    scanf("%d", &a);
    printf("Square of an integer with using pointers \n");
    square_pointers(&a,&b);

    printf("Square of an integer without using pointers \n");
    b = sqaure_no_pointers(a,b);
    printf("b = %d \n", b);

}

void square_pointers(int *pa, int *pb)
{
    *pb = (*pa) * (*pa);

    printf("The square is: *pb = %d \n", *pb);
}

int sqaure_no_pointers(int a , int b)
{
    b = a*a;

    return b;
}
