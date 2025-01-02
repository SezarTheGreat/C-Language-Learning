#include <stdio.h>
#include <string.h>

typedef struct StudentsInformation{
    char name[100];
    int attendence;
    float sem1,sem2,sem3;
}stu;

typedef struct ProfessorsInformation{
    char name[100];
    int attendence;
}prof;

void cgpaCalc(stu s1,stu s2, stu s3, prof p1, prof p2, prof p3);

int main(){
    stu s1 = {"Jyotishman", 100, 8.0, 9.7, 7.9};
    stu s2 = {"Dev", 150, 9.0, 8.0, 7.0};
    stu s3 = {"Eashaan", 50, 9.0, 7.0, 8.9};

    prof p1 = {"osife",100};
    prof p2 = {"werpof",100};
    prof p3 = {"weroijmno",200};

    cgpaCalc(s1, s2, s3,p1,p2,p3);

    return 0;
}

void cgpaCalc(stu s1,stu s2, stu s3, prof p1, prof p2, prof p3){
    // Calculate CGPA for each student
    float cgpa1 = (s1.sem1 + s1.sem2 + s1.sem3) / 3;
    float cgpa2 = (s2.sem1 + s2.sem2 + s2.sem3) / 3;
    float cgpa3 = (s3.sem1 + s3.sem2 + s3.sem3) / 3;

    // // Display each student's name and CGPA
    // printf("CGPA of %s: %.2f\n", s1.name, cgpa1);
    // printf("CGPA of %s: %.2f\n", s2.name, cgpa2);
    // printf("CGPA of %s: %.2f\n", s3.name, cgpa3);

    printf("Student name: %s  Students Attendence: %d  Students CGPA: %.2f\n",s1.name, s1.attendence, cgpa1);
    printf("Student name: %s  Students Attendence: %d  Students CGPA: %.2f\n",s2.name, s2.attendence, cgpa2);
    printf("Student name: %s  Students Attendence: %d  Students CGPA: %.2f\n",s3.name, s3.attendence, cgpa3); 

    printf("Proferror name: %s\tProfessors attendence: %d\n",p1.name, p1.attendence);
    printf("Proferror name: %s\tProfessors attendence: %d\n",p2.name, p2.attendence);
    printf("Proferror name: %s\tProfessors attendence: %d\n",p3.name, p3.attendence);
}