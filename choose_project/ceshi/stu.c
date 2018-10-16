#include<stdio.h>
#include<string.h>
#include"stu.h"
/*
typedef struct STU
{
    char  num[10];//学号
    char name[10];//姓名
    char readychoose[10];//已选课程
    int  sum;//课程总分
}stu;

*/

//读取学生信息
void read_stu(char name[10],stu a[10],int n)
{
    int i,j=0;
        for(i=0;i<n;i++)
        {
            if(strcmp(a[i].name,name) == 0)
            {
              
printf("学号是：%s姓名是：  %s已选课程是：  %s学分是：  %d",
                        a[i].num,a[i].name,a[i].readychoose,a[i].sum);

           }
        }
}
//录入学生信息
void stu_add(int n,stu a[10])
{   
    int i,j;
    char tjkc[10];
    for(i=3;i<3+n;i++)
    {
     printf("请输入添加的学生的学号");
        scanf("%s",a[i].num);
        printf("请输入添加的学生的姓名");
        scanf("%s",a[i].name);
        printf("请输入添加的学生的已选课程");
        scanf("%s",a[i].readychoose);
           subject(a[i].readychoose,1);
        printf("请输入添加的学生所选课程学分");
        scanf("%d",&a[i].sum);
   
    }
    
    for(i=0;i<3+n;i++)
    {
    printf("学号是：%s姓名是：  %s已选课程是：  %s学分是：  %d\n",
                        a[i].num,a[i].name,a[i].readychoose,a[i].sum);
    }
     
}
  //修改学生信息  
 void modify(char name[10],stu a[10],int n) //用名字来匹配  
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i].name,name)==0)
        {
        printf("请输入修改的学生的学号");
        scanf("%s",a[i].num);
        printf("请输入修改的学生的姓名");
        scanf("%s",a[i].name);
        subject(a[i].readychoose,2);
        printf("请输入修改的学生的已选课程");
        scanf("%s",a[i].readychoose);
        subject(a[i].readychoose,1);
        printf("请输入修改的学生所选课程学分");
        scanf("%d",&a[i].sum);
         for(i=0;i<n;i++)
        {
        printf("学号是：%s姓名是：  %s已选课程是：  %s学分是：  %d\n",
                        a[i].num,a[i].name,a[i].readychoose,a[i].sum);

        }
        break;

        }
    }

}

//更新删除
void update(stu a[10],int n)
{
     FILE *fp;
      int i;
       fp=fopen("student.txt","w+");
           for(i=0;i<n-1;i++)
                       {
                       fprintf(fp,"%-8s%-10s%-5s%-5d\n",a[i].num,a[i].name,a[i].readychoose,a[i].sum);
                       fprintf(fp,"\n");
                       }

           fclose(fp);
}




//删除学生信息
void delete(char name[10],stu a[10],int n)//依然用名字匹配
{
    int i,j;
    stu temp;
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i].name,name)==0)
        {
            subject(a[i].readychoose,2);
            if(i==n-1)
            {
                a[i]=temp;
            }
          for(j=i+1;j<n;j++)
           {
                a[j-1]=a[j];
           }
          
            for(i=0;i<n-1;i++)
        {
        printf("学号是：%s姓名是：  %s已选课程是：  %s学分是：  %d\n",
                        a[i].num,a[i].name,a[i].readychoose,a[i].sum);

        }

        break;
        }
        
 
    }
}

/*
main()
{
    int i,n=3,k;
    FILE *fp;
    fp=fopen("student.txt","r+");
    stu a[10];
    for(i=0;i<n;i++)
    {
     fscanf(fp,"%s%s%s%d",a[i].num,a[i].name,a[i].readychoose,&a[i].sum);
     
        
    }
    for(i=0;i<n;i++)
    {
 printf("%-8s%-10s%-5s%-5d\n",a[i].num,a[i].name,a[i].readychoose,a[i].sum);
    }
    char s,name[10];
    printf("欢迎进入学生选课界面\n");
    printf("请输入您想要进行的选项 r(查看)，a(添)，m(修改)，d(删除)\n");
    scanf("%s",&s);
    printf("...");
    if(s=='a')
    {
        printf("请输入添加的学生数量k：");
        scanf("%d",&k);
        stu_add(k,a);

        for(i=n;i<n+k;i++)
        {
            fprintf(fp,"\n");
            fprintf(fp,"%-8s%-10s%-5s%-5d\n",a[i].num,a[i].name,a[i].readychoose,a[i].sum);

        }
    }
    else if(s=='m')
    {
        printf("请输入要修改的学生的姓名");
        scanf("%s",name);
        modify(name,a,n);
    }
    else if(s=='d')
    {
        printf("请输入要删除学生的姓名");
        scanf("%s",name);
        delete(name,a,n);
        update(a,n);
    }
    else if(s=='r')
    {
        printf("请输入要查看学生的姓名");
        scanf("%s",name);
        read_stu(name,a,n);
    }
fclose(fp);
}
*/


