#include <stdio.h>

int main() {
    // 1. Khai bao cac bien luu tru thong tin
    int maPhim, tuoi, loaiGhe, doiTuong;
    long gia_co_ban = 80000;
    long phu_thu = 0;
    float ti_le_giam = 0.0;
    
    // 2. Nhap du lieu tu ban phim
    printf("=== HE THONG BAN VE PHIM CGV / LOTTE ===\n");
    printf("Nhap ma loai phim (1: Phim P, 2: Phim C18): ");
    scanf("%d", &maPhim);
    
    printf("Nhap tuoi cua khan gia: ");
    scanf("%d", &tuoi);
    
    printf("Nhap loai ghe (1: Ghe Thuong, 2: Ghe VIP): ");
    scanf("%d", &loaiGhe);
    
    printf("Nhap doi tuong (1: Khach thong thuong, 2: HSSV): ");
    scanf("%d", &doiTuong);
    
    printf("\n"); // In xuong dong cho de nhin

    // 3. Kiem duyet do tuoi (Guard Clause)
    if (maPhim == 2 && tuoi < 18) {
        printf("[THONG BAO] Tu choi ban ve: Khan gia chua du 18 tuoi de xem phim mac C18!\n");
        return 0; // Dung chuong trinh
    }

    // 4. Tinh phu thu dich vu loai ghe (switch-case)
    switch(loaiGhe) {
        case 1:
            phu_thu = 0;
            break;
        case 2:
            phu_thu = 15000;
            break;
        default:
            printf("[LOI] Ma loai ghe khong hop le! Vui long chon 1 (Thuong) hoac 2 (VIP).\n");
            return 1; // Dung chuong trinh voi ma loi
    }

    // 5. Tinh chiet khau theo doi tuong (if-else)
    if (doiTuong == 2) {
        ti_le_giam = 0.20; // Giam 20%
    } else {
        ti_le_giam = 0.0;  // Khong giam
    }

    // 6. Tinh toan tong chi phi
    long tong_truoc_giam = gia_co_ban + phu_thu;
    long tien_giam = tong_truoc_giam * ti_le_giam;
    long tong_tien_thanh_toan = tong_truoc_giam - tien_giam;

    // 7. In Hoa don thanh toan
    printf("=== HOA DON THANH TOAN VE PHIM ===\n");
    printf("Gia ve chuan: %ld VND\n", gia_co_ban);
    
    if (phu_thu > 0) {
        printf("Phu thu ghe VIP: %ld VND\n", phu_thu);
    }
    
    printf("Tong phi dich vu: %ld VND\n", tong_truoc_giam);
    
    if (doiTuong == 2) {
        printf("Giam gia HSSV (20%%): %ld VND\n", tien_giam);
    }
    
    printf("-----------------------------------\n");
    printf("TONG TIEN PHAI THANH TOAN: %ld VND\n", tong_tien_thanh_toan);

    return 0;
}