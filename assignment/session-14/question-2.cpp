// 2) Rewrite the following code to improve its indentation and add comments explaining
//    each step, so that a beginner can understand what it does:<br><br>function isEven(num)
//    {if(num%2==0){return true;}else{return false;}}

#include <stdio.h>


isEven(int num)
{

    if (num % 2 == 0)
    {
        return 1;   // 1 means true
    }
    else
    {
        return 0;   // 0 means false
    }
}

main()
{
    int num = 10;

    
    if (isEven(num))
    {
        printf("%d is Even", num);
    }
    else
    {
        printf("%d is Odd", num);
    }

}
