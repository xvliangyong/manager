#include<stdio.h>
#include"stu.h"
main()
{

    int i,n=3,k;
    FILE *fp;
    fp=fopen("student.txt","r+");

    stu a[10];

    //从文件中读取n个数据
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
