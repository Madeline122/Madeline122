// Online C compiler to run Calcualte volume of a sphere;
#include <stdio.h>
int main() 
{
float r;
float volume_sphere;
printf("Enter Radius of the sphere : ");
scanf("%d",&r);
volume_sphere = (4/3)*3.14*r*r*r;
printf("\nVolume of Sphere = %f",volume_sphere);
return 0;
}
float calculate_Volume_sphere (float radius) {
float volume;
volume = (4/3)*3.14*radius*radius*radius;
return volume;
}