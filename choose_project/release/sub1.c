#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct SUB
{
    char snum[10];
    char sname[10];
    int stime;
    int credit;
    int yixuanNUM;
    int max;
    char yixuanliebiao[10][10];
}sub;



//--------------------------------------------------新增课程函数----------------------------------------------------



//新增课程
void add_class(int n,sub a[10])
{
    int i;
    for(i=5;i<5+n;i++)
    {
        printf("请输入新增课程编号");
        scanf("%s",a[i].snum);
        printf("请输入新增课程名称");
        scanf("%s",a[i].sname);
        printf("请输入新增课程学时");
        scanf("%d",&a[i].stime);
        printf("请输入新增课程学分");
        scanf("%d",&a[i].credit);
        printf("请输入新增课程已选人数");
        scanf("%d",&a[i].yixuanNUM);
        printf("请输入新增课程人数上限");
        scanf("%d",&a[i].max);
    
        printf("新增课程成功\n");
    }
 for(i=0;i<5+n;i++)
 {
     printf("课程编号是：   %-3s课程名称是：  %-10s课程学时是：  %-5d课程学分是:%-5d已选人数是： %-5d人数上限是%-5d\n",
    a[i].snum,a[i].sname,a[i].stime,a[i].credit,a[i].yixuanNUM,a[i].max);
 }
   }




//------------------------------------------------------删除课程函数---------------------------------------------------------



//删除课程

void delete_class(char name[10],sub a[10],int n)
{
int i,j;
sub temp;
for(i=0;i<n;i++)
{
    if(strcmp(a[i].sname,name)==0)
    {
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
       
        
                 printf("课程编号是：   %-3s课程名称是：  %-10s课程学时是：  %-5d课程学分是：  %-5d已选人数是：  %-5d人数上限是  %-5d\n",
                     a[i].snum,a[i].sname,a[i].stime,a[i].credit,a[i].yixuanNUM,a[i].max);


           }
             
    
    break;
    }
}
}


//--------------------------------------------------------------查看课程函数----------------------------------------------------------



//查看课程信息
void read_class(char name[10],sub a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i].sname,name)==0)
        {   
        printf("课程编号是：   %-3s课程名称是：  %-10s课程学时是：  %-5d课程学分是：  %-5d已选人数是：  %-5d人数上限是  %-5d\n",
    a[i].snum,a[i].sname,a[i].stime,a[i].credit,a[i].yixuanNUM,a[i].max);
        break;
        }
    }
}







//--------------------------------------------------修改课程函数-----------------------------------------------------------

//修改课程信息
//


void modify_class(char name[10],sub a[10],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(strcmp(a[i].sname,name)==0)
        {
            printf("请输入修改课程编号");
            scanf("%s",a[i].snum);
            printf("请输入修改课程名称");
            scanf("%s",a[i].sname);
            printf("请输入修改课程学时");
            scanf("%d",&a[i].stime);
            printf("请输入修改课程学分");
            scanf("%d",&a[i].credit);
            printf("请输入修改课程已选人数");
            scanf("%d",&a[i].yixuanNUM);
            printf("请输入修改课程人数上限");
            scanf("%d",&a[i].max);


             for(i=0;i<n;i++)
          {
       
        
                 printf("课程编号是：   %-3s课程名称是：  %-10s课程学时是：  %-5d课程学分是：  %-5d已选人数是：  %-5d人数上限是  %-5d\n",
                     a[i].snum,a[i].sname,a[i].stime,a[i].credit,a[i].yixuanNUM,a[i].max);


           }

            break;
        }
    }
}


//------------------------------------------------------------------------更新函数----------------------------------------------------
//
//
//
//
//
//
void update(sub a[10],int n)
{
 FILE *fp;
 int i;
 fp=fopen("subject.txt","w+");
    for(i=0;i<n-1;i++)
        {
            
            fprintf(fp,"%-3s       %-10s    %-5d     %-5d     %-5d    %-5d",a[i].snum,a[i].sname,a[i].stime,a[i].credit,a[i].yixuanNUM,a[i].max);
            fprintf(fp,"\n");
        }

fclose(fp);
}


//------------------------------------------------------------------------------------主函数---------------------------------------------------------------------------------------------------
main()
{
    int i,k,n=5,j;
    sub a[10];
    FILE *fp;
    char name[10],s,arr[10];
    fp=fopen("111","r+");//打开所要从中读取的文件

  
       for(i=0;i<3;i++)
       {
            fscanf(fp,"%s%s%d%d%d%d",a[i].snum,a[i].sname,&a[i].stime,&a[i].credit,&a[i].yixuanNUM,&a[i].max);
            for(j=0;j<a[i].yixuanNUM;j++)
            {
                fscanf(fp,"%s",a[i].yixuanliebiao[j]);
            }
       }

   for(i=0;i<3;i++)
   {
        printf("课程编号是：   %-3s课程名称是：  %-10s课程学时是：  %-5d课程学分是：  %-5d已选人数是：  %-5d人数上限是  %-5d\n",
                     a[i].snum,a[i].sname,a[i].stime,a[i].credit,a[i].yixuanNUM,a[i].max);

    
       for(j=0;j<a[i].yixuanNUM;j++)
       {
        printf("%s   ",a[i].yixuanliebiao[j]);
       }
        printf("\n");
   }

   /*
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

*/
fclose(fp);
}


