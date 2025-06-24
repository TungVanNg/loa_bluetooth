#include "BluetoothA2DPSink.h"
#include "Audio.h"

// Chân I2S
#define I2S_BCLK  26
#define I2S_LRC   25
#define I2S_DOUT  27

// Khởi tạo đối tượng Audio và Bluetooth
Audio audio;
BluetoothA2DPSink a2dp_sink;

// Hàm thiết lập I2S và âm lượng
void setupI2S() {
  audio.setPinout(I2S_BCLK, I2S_LRC, I2S_DOUT);  // Cấu hình chân I2S
  audio.setVolume(90);  // Âm lượng (0 đến 100)
}

// Hàm đọc dữ liệu stream từ Bluetooth
void stream_reader(const uint8_t *data, uint32_t len) {
  audio.loop();  // Xử lý dữ liệu và phát ra I2S
}

void setup() {
  Serial.begin(115200);

  setupI2S();  // Khởi tạo I2S và âm lượng

  // Bật Bluetooth A2DP
  a2dp_sink.set_auto_reconnect(true);
  a2dp_sink.set_stream_reader(stream_reader);  // Gắn callback
  a2dp_sink.start("ESP32_BT_Loudspeaker");     // Tên Bluetooth hiển thị

  Serial.println("✅ ESP32 đã sẵn sàng làm loa Bluetooth!");
}

void loop() {
  // Không cần xử lý gì ở đây, Bluetooth tự làm
}
