/*Viết chương trình cho phép nhập vào vào ngày, tháng, năm sinh của mình; sau đó
nhập thêm năm hiện tại. Tính số tuổi của mình và in ra màn hình theo mẫu.
Ban sinh ngay 12 thang 08 nam 1994. Nam nay, ban 25 tuoi.
Đầu vào:
4 số nguyên dương tương ứng ngày, tháng, năm sinh của bạn và năm hiện tại. Các số cách nhau ít nhất 1 khoảng trắng hoặc xuống dòng.
Đầu ra:
In ngày sinh và tuổi của bạn theo mẫu:
Ban sinh ngay dd thang mm nam yyyy. Nam nay, ban t tuoi.
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu.
Xem thêm mẫu bên dưới.
For example:
12 8 1994 2019 => Ban sinh ngay 12 thang 08 nam 1994. Nam nay, ban 25 tuoi.
10 12 2005 2009 => Ban sinh ngay 10 thang 12 nam 2005. Nam nay, ban 4 tuoi.
2 7 1999 2009 => Ban sinh ngay 02 thang 07 nam 1999. Nam nay, ban 10 tuoi.*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int date,month,year,now,age;
    scanf("%d %d %d %d",&date,&month,&year,&now);
    age=now-year;
    printf("Ban sinh ngay %.2d thang %.2d nam %d. Nam nay, ban %d tuoi.\n",date,month,year,age);
    return 0;
}