#include <stdio.h>

int main() {
  double earthweight,planetweight;
  int planet;
  printf("Enter your earth weight");
  scanf("%1f",&earthweight);
  printf("Enter the number of the planet you want to flight");
  printf("1.Mercury 2. venus 3. Mars\n");
  printf("4.Jupiter 5. Saturn 6. Uranus\n");
  printf("7. Neptune\n");
  printf("Which planet are you visiting?");
  scanf("%d",&planet);


  switch(planet){
case 1:
    planetweight=earthweight*0.38;
    break;
case 2:
    planetweight=earthweight*0.91;
    break;
case 3:
    planetweight=earthweight*0.38;
    break;
case 4:
    planetweight=earthweight*2.34;
    break;
case 5:
    planetweight=earthweight*1.06;
    break;
 case 6:
    planetweight=earthweight*0.92;
    break;
 case 7:
    planetweight=earthweight*1.19;
    break;
default:
    printf("Invalid planet number");
    break;
  }
    printf("\nyour weight would be %.2lf on that planet",planetweight);
    return 0;

  
}
