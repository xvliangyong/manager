#include<stdio.h>
#include"sub.h"
main()
{
    int i,k,n=5;
    sub a[10];
    FILE *fp;
    char name[10],s,arr[10];
    fp=fopen("subject.txt","r+");//打开所要从中读取的文件



//从你所打开的文件中读取前n行
   for(i=0;i<n;i++)
   {
    fscanf(fp,"%s%s%d%d%d%d",a[i].snum,a[i].sname,&a[i].stime,&a[i].credit,&a[i].yixuanNUM,&a[i].max);
   }


   //将读取出来的东西打印出来
   for(i=0;i<n;i++)
   {
   printf("课程编号是：   %-3s课程名称是：  %-10s课程学时是：  %-5d课程学分是：  %-5d已选人数是：  %-5d人数上限是  %-5d\n",
    a[i].snum,a[i].sname,a[i].stime,a[i].credit,a[i].yixuanNUM,a[i].max);

   }

while(1)
 {

   printf("欢迎来到课程管理系统\n");

   printf("请输入需要完成的事项a(添加）d(删除) r(查看) m(修改)\n");

    scanf("%s",&s);//输入你所要进行的选项

    //添加课程
    if(s=='a')
    {
        printf("请输入需要添加的课程数数目");
        scanf("%d",&k);
add_class(k,a);
        for(i=n;i<n+k;i++)
             {
        fprintf(fp,"\n");
        fprintf(fp,"%-3s       %-10s    %-5d     %-5d     %-5d    %-5d",a[i].snum,a[i].sname,a[i].stime,a[i].credit,a[i].yixuanNUM,a[i].max);
             }

    }


    //删除课程
    
     else if(s=='d')
    {
        printf("请输入要删除的课程名称：");
        scanf("%s",name);
        delete_class(name,a,n);

        update(a,n);

            }


     //查看课程
    else if(s=='r')
    {
        while(1)
        {
            printf("请输入你要查看的课程名称");
            scanf("%s",name);
            read_class(name,a,n);
            printf("do you want to break (yes/no)");
            scanf("%s",arr);
            if(strcmp(arr,"yes")==0)
            {
            break;
            }
            else
                continue;
        }
    }


//修改课程
    else if(s=='m')
    {
        while(1)
        {
            printf("请输入你要修改的课程名称");
            scanf("%s",name);
            modify_class(name,a,n);
            printf("您是否修改完毕（yes/no）");
            scanf("%s",arr);
            if(strcmp(arr,"yes")==0)
            {
                break;
            }
            else continue;
        }
    }

printf("你是否想退出选课系统（yes/no）");
scanf("%s",arr);
    if(strcmp(arr,"yes")==0)
    {
    
    break;
    }
   else continue;
 }


fclose(fp);
}
