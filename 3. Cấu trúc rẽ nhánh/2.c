/*Write a C program to check an integer even or odd.
Chú ý;
Dữ liệu đầu vào luôn hợp lệ
Bạn không cần phải printf giớ thiệu trước scanf
For example:
6 => 6 is even.
*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int n;
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is even.\n",n);
    }
    else{
        printf("%d is odd.\n",n);
    }
    return 0;
}