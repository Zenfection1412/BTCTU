/*Viết chương trình nhập vào số thực về xuất số đó là âm hay dương hay số 0
Notes:
Input is always valid.
You MUST NOT use printf before scanf.
See examples for more details in input/output.
1992 => You entered a positive number.
0 => You entered 0.
-3451 => You entered a negative number.
*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int n;
    scanf("%d",&n);
    if(n==0)
        printf("You entered 0.\n");
    else if(n>0)
        printf("You entered a positive number.\n");
    else
        printf("You entered a negative number.\n");
    return 0;
}