/*Tính giá điện sinh hoạt của 1 hộ gia đình. Viết chương trình cho phép nhập từ bàn phím chỉ số điện sinh hoạt cũ (sc), và chỉ số điện mới (sm). Tính số kwh mà hộ đó tiêu thụ và số tiền mà hộ này phải đóng trong tháng,
Giá bán lẻ điện sinh hoạt
Bậc 1: Cho kWh từ 0-50 <=> 1.549
Bậc 2: Cho kWh từ 51 – 100 <=> 1600
Bậc 3: Cho kWh từ 101 -200 <=> 1858
Bậc 4: Cho kWh từ 201 -300 <=> 2340
Bậc 5: Cho kWh từ 301 -400 <=> 2615
Bậc 6: Cho kWh từ 401 trở lên <=> 2.701
Ví dụ
20 120 => 100 Kwh: 157450 VND
201 501 => 300 Kwh: 577250 VND
Đầu vào
2 số nguyên mô tả chỉ số cũ, chỉ số mới (giả sử chỉ số cũ luôn < chỉ số mới)
Đầu ra
In ra số Kwh sử dụng và số tiền phải trả
Chú ý:
Dữ liệu đầu vào là hợp lệ. Bạn không cần phải kiểm tra.*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    int cu,moi,kwh,giatien;
    scanf("%d %d",&cu,&moi);
    kwh=moi-cu;
    if(kwh<=50&&kwh>=0)
        giatien=kwh*1549;
    else if (kwh<=100&&kwh>50)
        giatien=(1549*50)+(1600*(kwh-50));
    else if (kwh<=200&&kwh>100)
        giatien=(1549*50)+(1600*50)+(1858*(kwh-100));
    else if (kwh<=300&&kwh>200)
        giatien=(1549*50)+(1600*50)+(1858*100)+(2340*(kwh-200));
    else if (kwh<=400&&kwh>300)
        giatien=(1549*50)+(1600*50)+(1858*100)+(2340*100)+(2615*(kwh-300));
    else if(kwh>400)
        giatien=(1549*50)+(1600*50)+(1858*100)+(2340*100)+(2615*100)+(2701*(kwh-100));
    printf("%d Kwh: %d VND\n",kwh,giatien);
    return 0;
}