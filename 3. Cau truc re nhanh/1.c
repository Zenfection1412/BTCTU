/*
Viết chương trình cho phép nhập vào một năm và cho biết năm đó là năm nhuận hay năm thường.
Đầu vào
Một sộ nguyên n - năm đang xét.
Đầu ra
Nếu năm n là năm nhuận in ra n la nam nhuan.
Ngược lại, in ra n la nam thuong.
Chú ý:
Dữ liệu đầu vào luôn hợp lệ.
Bạn KHÔNG ĐƯỢC sử dụng printf trước scanf.
Xem thêm các ví dụ bên dưới.
For example:
1992 => 1992 la nam nhuan.
2000 => 2000 la nam nhuan.
2018 => 2018 la nam thuong.*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int n;
    scanf("%d",&n);
    if((n%4==0&&n%100!=0)||(n%400==0)){
        printf("%d la nam nhuan.\n",n);
    }
    else{
        printf("%d la nam thuong.\n",n);
    }
    return 0;
}