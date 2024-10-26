// กำหนดพินที่เชื่อมต่อกับ LED
const int ledPin = 13; // สามารถเปลี่ยนพินได้ตามที่เชื่อมต่อ

// ตั้งค่าระยะเวลาในการติดและดับ (เป็นมิลลิวินาที)
const int onTime = 1000;  // เวลาในการติด LED (1 วินาที)
const int offTime = 1000; // เวลาในการดับ LED (1 วินาที)

void setup() {
  // กำหนดพินของ LED เป็นเอาต์พุต
  pinMode(ledPin, OUTPUT);

  // เริ่มการสื่อสารผ่าน Serial
  Serial.begin(9600);
}

void loop() {
  // ทำการเปิด LED
  digitalWrite(ledPin, HIGH);
  Serial.println(1);  // ส่งค่า 1 ไปที่ Serial Plotter
  delay(onTime);      // รอเป็นเวลาที่กำหนด

  // ทำการปิด LED
  digitalWrite(ledPin, LOW);
  Serial.println(0);  // ส่งค่า 0 ไปที่ Serial Plotter
  delay(offTime);     // รอเป็นเวลาที่กำหนด
}

