/**
 * LAB 8 - ĐỒ ÁN CAPSTONE: THIẾT KẾ & TRIỂN KHAI SỨ MỆNH VỆ TINH CUBESAT
 * 
 * Khung mã nguồn tiêu chuẩn để học viên phát triển sứ mệnh tùy biến:
 * - Nhiệm vụ 1: Giám sát môi trường & Cảnh báo sớm
 * - Nhiệm vụ 2: Thu thập dữ liệu IoT / Store-and-Forward
 * - Nhiệm vụ 3: Tìm kiếm cứu nạn & Định vị khẩn cấp (SAR)
 */

#include <Arduino.h>
#include <PTITCube.h>

PTIT_CDH cdh;

// Khởi tạo các phân hệ CubeSat
PTIT_EPS eps;
PTIT_Sensor sensor;
PTIT_GPS gps;
PTIT_COM com;
PTIT_Storage storage;

void setup() {
    cdh.begin(115200);
    while (!cdh) { delay(10); }

    cdh.println("==================================================");
    cdh.println("   PTITCUBE - LAB 8: CAPSTONE MISSION TEMPLATE    ");
    cdh.println("==================================================");

    // Khởi tạo các phân hệ cần thiết cho sứ mệnh
    eps.init();
    sensor.init();
    gps.init();
    storage.init();
    com.init();

    cdh.println("[MISSION] Toàn bộ phân hệ đã sẵn sàng!");
}

void loop() {
    // 1. Cập nhật dữ liệu viễn trắc từ các cảm biến
    eps.update();
    sensor.update();
    gps.update();

    // 2. Logic xử lý sứ mệnh của học viên (State Machine / Mission Logic)
    // TODO: Triển khai thuật toán xử lý dữ liệu và kịch bản nhiệm vụ tại đây

    delay(1000);
}
