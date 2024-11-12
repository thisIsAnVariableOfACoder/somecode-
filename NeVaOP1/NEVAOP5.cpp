#include <bits/stdc++.h>
using namespace std;

int main() {
    char c;
    cin >> c;

    cout << char(122 - c + 97) << endl; // 122 - c để lấy được vị trí của kí tự đó trên bảng chữ cái tiếng Anh và cộng thêm 97 để ra ascii
    cout << char((c - 97 + 25)%26 + 97) << endl; // trừ đi 97 để ra vị trí của kí tự trên bảng chữ cái tiếng Anh chạy từ kí tự đầu là 0, cộng thêm 25 để ra vị trí đối xứng và chia dư cho 26 để xử lí đối với những trường hợp kí tự nằm trước nó là kí tự ở cuối của bảng chữ cái và cộng 97 để chuyển sang ascii
    cout << char((c - 97 + 2)%26 + 97); // làm tương tự với ý 2 nhưng là cộng 2 để tìm kí tự nằm sau nó 2 vị trí
}
