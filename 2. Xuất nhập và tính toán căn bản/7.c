/*Viết chương trình cho phép nhập vào chữ cái đầu tiên của tên của một sinh viên cùng với điểm cuối kỳ của các bài thi của người đó (gồm bài lý thuyết và 4 bài thực hành). Hiển thị tên người đã nhập với các kết quả thi và điểm trung bình của người đó.
Điểm trung bình được tính bằng tổng điểm lý thuyết và thực hành chia cho 5.
Các kết quả thi và điểm trung bình được hiển thị với 2 số lẻ phần thập phân.
Ví dụ:
Nhập vào:
K
9.5 8 7 4.5 9
In ra:
K 
Ly thuyet: 9.50
Thuc hanh 1: 8.00
Thuc hanh 2: 7.00
Thuc hanh 3: 4.50
Thuc hanh 4: 9.00
Trung binh: 7.60
Đầu vào:
Hàng đầu tiên chứa 1 chữ cái.
Hàng thứ 2 chứa 5 số thực, tương ứng với điểm lý thuyết và điểm của 4 bài thực hành.
Đầu ra:
Dòng đầu tiên in tên (chữ cái đầu tiên của tên)
5 dòng tiếp theo, in điểm của từng bài thi
Dòng cuối cùng in điểm trung bình
Xem mẫu đầu ra ở trên và trong phần "For example".
Chú ý:
Bạn có thể an tâm rằng dữ liệu đầu vào luôn hợp lệ
Bạn KHÔNG CẦN phải viết các lệnh printf trước scanf để giới thiệu.*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    char c;
    float l1,t1,t2,t3,t4,tb;
    scanf("%c %f %f %f %f %f",&c,&l1,&t1,&t2,&t3,&t4);
    tb=(l1+t1+t2+t3+t4)/5;
    printf("%c\n",c);
    printf("Ly thuyet: %.2f\n",l1);
    printf("Thuc hanh 1: %.2f\n",t1);
    printf("Thuc hanh 2: %.2f\n",t2);
    printf("Thuc hanh 3: %.2f\n",t3);
    printf("Thuc hanh 4: %.2f\n",t4);
    printf("Trung binh: %.2f\n",tb);
    return 0;
}