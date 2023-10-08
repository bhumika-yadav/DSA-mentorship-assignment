#include<stdio.h>
int main() {
    int marks;

    printf("enter the marks (1-100) : ");
    scanf("%d", &marks);

    if (marks> 90){
        printf(" excellent ");
    }
    else if(marks>80 && marks<=90 )
       { printf(" good ");
       }
    else if(marks>70 && marks<=80 )
       { printf(" fair ");
       }
    else if(marks>60 && marks<=70 )
       { printf(" meet expectations ");
       }
    else if(marks<=60 )
       {printf(" below par ");
       }
       
    return 0 ;
}
