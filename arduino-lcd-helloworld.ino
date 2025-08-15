 
void setup() {
      Serial.begin(115200);
// ส่วนที่ 3.1
Serial.println("\n--- ทดสอบชนิดข้อมูล float และ double (ESP32) ---");
float myFloat = 3.14159265; // ค่า Pi
Serial.print("ค่า myFloat (float): ");
Serial.println(myFloat, 8); // แสดงผลทศนิยม 8 ตำแหน่ง

// ส่วนที่ 3.2
double myDouble = 3.141592653589793; // ค่า Pi ที่แม่นยำกว่า
Serial.print("ค่า myDouble (double): ");
Serial.println(myDouble, 15); // แสดงผลทศนิยม 15 ตำแหน่ง
}

void loop() {
 
}
