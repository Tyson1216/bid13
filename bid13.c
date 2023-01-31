// Let's say each side of rectangles are integer(lengt of them). 
// If we keep cutting down them into small pieces of square, the last peice of it would be a square no matter how big or small is.
// When we make the biggest square from a rectabgle the length of each sides of the square would be the same with the smaller side of rectangle.
// After cutting off the biggest possible square from rectangles, the length of small side of rectangle will not be change but the size of bigger side would be deducted by the length of the small side.
// example of it would be , 7*5 rectangle would make 5*5 of square and the size of rectangle after will be (7-5)*5.
// If we repeat the same process of it until we cut off the last pecie of square ( meaning that each side of rectangle will be 0)

//hourly expectation - 40/hr



#include <stdio.h>
#include <stdlib.h>

struct vector{
   int val;
   struct vector* next;
};
typedef struct vector * v;

 

 

v makeContainer(int n, int m){
   struct vector *res;
   res = malloc(sizeof(v));
   struct vector *temp = res;  

  while(n != 0 && m!=0){
    int min = n>m? m:n;
    temp->val = min;   
    n-=min;m-=min;   
    if(n==0 && m!=0) n= min;
    if(m==0 && n!=0) m= min;
    temp->next = malloc(sizeof(v));
    temp = temp->next;
  }

  temp->val = 0;
  return res;

}

 

int main() {
    v res = makeContainer(6,5);

   while(res->val != 0){
  printf("%d x %d\n", res->val , res->val );
  res = res->next;
    }

 

 

    return 0;

}
