#include<stdio.h>

struct employee{
    int id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float other_allowance;
    float gross_salary;
};

int main(){
    struct employee e1;

    printf("entre employee id :");
    scanf("%d",&e1.id);

    printf("entre employee name :");
    scanf("%49s",e1.name);

    printf("entre basic salary :");
    scanf("%f",&e1.basic_salary);
    e1.hra=e1.basic_salary * 0.20;
    e1.da=e1.basic_salary * 0.10;
    e1.other_allowance=e1.basic_salary * 0.05;

    printf(" hra = %.2f\n",e1.hra);
    printf(" da = %.2f\n",e1.da);
    printf(" other allowance = %.2f\n",e1.other_allowance);


    e1.gross_salary=e1.basic_salary+e1.da+e1.hra+e1.other_allowance;
    printf(" gross salary = %.2f",e1.gross_salary);
    return 0;
}
// task 5
