#include <stdio.h>
#include <stdlib.h>


 int main (){

 for(int i=1; i<=100; ++i){
 if(i%15==0){
 printf("Fizz buzz\n",i);
 }

 else if(i%5==0){
 printf("Buzz\n",i);

 }
 else if(i%3==0){
 printf("Fizz\n",i);

 } else{
 printf("%d\n",i);
 }
 }
 return 0;

}
