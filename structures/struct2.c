struct Bottle {
  char* name;
  int maxCapacity;
  int currentCapacity;
};
 
struct Bottle myBottle = {"Medium Bottle", 24, 0};
 
// Fill some of myBottle
myBottle.currentCapacity = 10;
printf("The bottle is now filled to %d", myBottle.currentCapacity);