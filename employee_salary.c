#include<stdio.h>

struct employee{
    int id;
    char name[50];
    float basic_salary;
    float hra;
    float da;
    float other_allowance;
    float gross_salary;
    float pf;
    float professional_tax;
    float net_salary ;
};

 
void salary(float gross,float deductions){
    printf("net salary = %.2f",gross-deductions);
}

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
    printf(" gross salary = %.2f\n",e1.gross_salary);

    e1.pf = e1.basic_salary*0.12;

    if (e1.basic_salary > 15000){
        e1.professional_tax = 200;
    }
    else{
        e1.professional_tax = 0;
    }

    printf("PF: %.2f\n", e1.pf);
    printf("Professional Tax: %.2f\n", e1.professional_tax);

    salary(e1.gross_salary,e1.pf+e1.professional_tax);
    

    return 0;
}

