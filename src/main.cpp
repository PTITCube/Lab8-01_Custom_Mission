/**
 * LAB 8 - ĐỒ ÁN CAPSTONE: THIẾT KẾ & TRIỂN KHAI SỨ MỆNH VỆ TINH CUBESAT
 */
#include <Arduino.h>
#include <PTITCube.h>

PTIT_CDH cdh;

PTIT_EPS eps;
PTIT_Sensor sensor;
PTIT_GPS gps;
PTIT_COM com;
PTIT_Storage storage;

void setup() {
    cdh.begin();

    eps.init();
    sensor.init();
    gps.init(12, 14);
    storage.init();
    com.init();

}

void loop() {
    eps.update();
    sensor.update();
    gps.update();

    // TODO: Triển khai kịch bản sứ mệnh tùy biến của học viên

    delay(1000);
}
