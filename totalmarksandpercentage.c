#include<stdio.h>
int main(){
    int p,m,chem,eng,hi,total_marks,percentage;

    printf("enter for p=");
    scanf("%d",&p);
    printf("enter for math=");
    scanf("%d",&m);
    printf("enter for chemistry=");
    scanf("%d",&chem);
    printf("enter for english=");
    scanf("%d",&eng);
    printf("enter for hindi=");
    scanf("%d",&hi);

    total_marks=p+m+chem+eng+hi;
     printf("total marks in subjects=%d\n",total_marks);

    percentage=total_marks*100/500;
    printf("percentage=%d",percentage);

    return 0;

}