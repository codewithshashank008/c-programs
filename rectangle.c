#include <stdio.h>
int main()
    {
        int lenth,width;
        int area, perimeter;

        printf("enter the lenth and width");
        scanf("%d %d",&lenth,&width);
        area=lenth*width;
        perimeter=2*(lenth+width);

        printf("area=%d\n",area);
        printf("perimeter=%d\n",perimeter);

        return 0;
    }