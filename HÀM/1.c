/*Cho đoạn chương trình cho phép nhập vào 3 giá trị ngày, tháng, năm. Sau đó hiển thị các giá trị này theo định dạng dd/mm/yyyy
#include <stdio.h>
Hãy hoàn chỉnh chương trình trên bằng cách điền các lệnh cần thiết vào dấu ... (viết khai báo biến và thêm đoạn lệnh hiển thị) để tạo thành 1 chương trình có thể thực thi được.
Chú ý
Chỉ điền kết quả tương ứng với chỗ ..., KHÔNG VIẾT TOÀN BỘ CHƯƠNG TRÌNH
Ngăn cách các phần tương ứng với các dấu ... bằng dòng
//-END-SECTION-
Bài này có 2 chỗ ..., vì thế bạn cần chia câu trả lời thành hai phần và ngăn cách chúng bằng dòng //-END-SECTION-, ví dụ:
Lệnh khai báo biến
//-END-SECTION-
Lệnh hiển thị dữ liệu
For example:
1 2 2018 => 01/02/2018
*/
#include <stdio.h>
int main(int argc, char const *argv[]){
    //Khai báo biến
    int ngay,thang,nam;
    scanf("%d%d%d",&ngay,&thang,&nam);
    // Hiển thị theo định dạng dd/mm/yyyy
    printf("%d%d%d",ngay,thang,nam);
    return 0;
}