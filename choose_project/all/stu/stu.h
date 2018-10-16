#ifndef _STU_H

typedef struct STU
{
    char  num[10];
    char name[10];
    char readychoose[10];
    int  sum;
}stu;
void read_stu(char name[10],stu a[10],int n);
void stu_add(int n,stu a[10]);
void modify(char name[10],stu a[10],int n);
void delete(char name[10],stu a[10],int n);
void update(stu a[10],int n);


#endif

