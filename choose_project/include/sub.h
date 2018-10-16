#ifndef  _SUB_H
typedef struct SUB
{
    char snum[10];
    char sname[10];
    int stime;
    int credit;
    int yixuanNUM;
    int max;
}sub;
void add_class(int n,sub a[10]);
void delete_class(char name[10],sub a[10],int n);
void read_class(char name[10],sub a[10],int n);
void modify_class(char name[10],sub a[10],int n);
void update_class(sub a[10],int n);


#endif
