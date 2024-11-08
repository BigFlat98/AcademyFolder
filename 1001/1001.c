#include <stdio.h>
typedef struct Student
{
    int primary;
    char name[30];
    int score;
    char grade;

    
}Student;

void main(){
    Student A = {1,"HDJ",80,'A'};
    Student member[5] ={{2,"AAA",70,'B'},{3,"BBB",60,'B'},{4,"CCC",50,'C'},{5,"DDD",40,'D'},{6,"EEE",30,'F'}};

    printf("%s \n",member[3].name);
    
}