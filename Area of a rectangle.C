#include <stdio.h>
float calculateRectangleArea(float length, float width) {
float area = length * width;
return area;
}
int main() {
    float length, width;
 printf("Enter the length of the rectangle:");
 scanf("%f", &length);
printf("Enter the width of the rectangle: ");
scanf("%f", &width);
return 0;
}
float area_of_rectangle(float length,float width){
float area;
area=length*width;
return area;
}