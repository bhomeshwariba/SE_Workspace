// 3)Write two functions: increaseFollowersByValue and increaseFollowersByReference. Each should take 
//   a followers count and add 1000 to it, but one should use pass-by-value and the other 
//   pass-by-reference. Show how the original followers count changes (or doesn't) after calling each function. 
#include <stdio.h>


increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
    printf("\nInside value function: %d", followers);
}


increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
    printf("\nInside reference function: %d", *followers);
}
main()
{
    int followers = 5000;

    printf("\nOriginal followers: %d", followers);

    
    increaseFollowersByValue(followers);
    printf("\nAfter pass by value: %d", followers);


    increaseFollowersByReference(&followers);
    printf("\nAfter pass by reference: %d", followers);


} 
