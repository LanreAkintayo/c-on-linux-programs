#include <stdio.h>

int main() {
   int noOfStudents = 10;

   char students[noOfStudents][100];

   for (int i = 0; i < noOfStudents; i++){
    int studentNo = i + 1;
        printf("(Student %d) Enter your name: ",studentNo);
        // scanf("%s", students[i]);
        gets(students[i]);

   }

    printf("\nList of Names........\n");
    for (int i = 0; i < noOfStudents; i++){
    int studentNo = i + 1;

        printf("(Student %d): %s\n", studentNo, students[i]);
   }
   return 0;
}
