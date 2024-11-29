#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,y1,y2,distance;
    printf("enter the value of x coordinate of the first point");
    scanf("%f",&x1);
    printf("enter the value of y coordinate of the first point");
    scanf("%f",&y1);
    ptintf("enter the value of x coordinate of the second point");
    scanf("%f",&x2);
    printf("enter the value of y of the second pont");
    scanf("%f",&y2);

    distance =sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("the eculidean distance is:%.2\n",distance);
    return 0;
}