#include <stdio.h>
#include <stdbool.h>

struct Student{
   char name[50];
   int age;
   float gpa;
   bool isFullTime;   
};

int main() {
   setbuf(stdout, NULL);

   // struct = A custom container that holds multiple
   //          pieces of related information.
   //          Similar to Objects in other languages

   struct Student student1 = {"Spongeboob", 30, 2.5, true};

   printf("%s\n", student1.name);  
   printf("%d\n", student1.age);  
   printf("%.2f\n", student1.gpa);  
   printf("%s\n", (student1.isFullTime) ? "Yes" : "No");  

   return 0;
}