#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct SUB
{
    char xuehao[10];
    char name[10];
    int yixuanNUM;
    int max;
    char yixuanliebiao[10][10];

}stu;

main()
{
   stu a[10];
   FILE *fp;
   fp=fopen("111","r+");
   int i,j;
       for(i=0;i<3;i++)
       {
            fscanf(fp,"%s%s%d%d",a[i].xuehao,a[i].name,&a[i].yixuanNUM,&a[i].max);
            for(j=0;j<a[i].yixuanNUM;j++)
            {
                fscanf(fp,"%s",a[i].yixuanliebiao[j]);
            }
       }

   for(i=0;i<3;i++)
   {
       printf("学号：%s  课程名：%s 已选人数%d  最多%d",a[i].xuehao,a[i].name,a[i].yixuanNUM,a[i].max);
    
       for(j=0;j<a[i].yixuanNUM;j++)
       {
        printf("%s   ",a[i].yixuanliebiao[j]);
       }
        printf("\n");
   }

   fclose(fp);
}
