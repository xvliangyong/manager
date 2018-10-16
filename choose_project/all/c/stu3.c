#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
        char number[11];
            char name[10];
                char credit[10];
                    char list[10][10];
}stu[10];

void init()
{
        int i;
            FILE *fp;
                fp=fopen("student.txt","r+");
                    for(i=0;i<10;i++)
                            {
                                    fscanf(fp,"%s%s%s",stu[i].number,stu[i].name,stu[i].credit);

                                        }
}

int main()
{
        int i;
            init();
                for(i=0;i<10;i++)
                        {
                                printf("%-10s %-9s %-5s\n",stu[i].number,stu[i].name,stu[i].credit);

                                    }
                    return 0;
}
