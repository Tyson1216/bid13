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