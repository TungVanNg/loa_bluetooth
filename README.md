# 🔊 Loa Bluetooth ESP32 + MAX98357A

Dự án tạo **loa Bluetooth không dây** đơn giản sử dụng **ESP32** và **mạch giải mã I2S MAX98357A**. Bạn có thể kết nối điện thoại và phát nhạc trực tiếp qua Bluetooth.

---

## 📸 Hình ảnh minh họa
![ESP32 Bluetooth Speaker](https://raw.githubusercontent.com/yourusername/yourrepo/main/images/demo.jpg)

---

## 🧰 Phần cứng sử dụng

| Thiết bị             | Ghi chú                             |
|----------------------|--------------------------------------|
| ESP32 DevKit V1       | Vi điều khiển chính                  |
| MAX98357A             | Mạch giải mã I2S và khuếch đại âm thanh |
| Loa 8Ω 1W             | Thiết bị phát âm thanh               |
| Nguồn 5V USB          | Cấp nguồn cho ESP32 và MAX98357A    |

---

## ⚡️ Sơ đồ kết nối

| MAX98357A | ESP32 (GPIO) |
|-----------|--------------|
| VIN       | 3V3 hoặc 5V   |
| GND       | GND          |
| LRC       | GPIO25       |
| BCLK      | GPIO26       |
| DIN       | GPIO22       |

---

## 📦 Thư viện cần cài

Cài thư viện sau trong Arduino IDE:
- [ESP32-A2DP](https://github.com/pschatzmann/ESP32-A2DP)

---

## 🧠 Cách hoạt động

1. ESP32 hoạt động như một thiết bị **Bluetooth Audio Sink (A2DP)**.
2. MAX98357A nhận tín hiệu âm thanh I2S từ ESP32 và khuếch đại cho loa.
3. Điện thoại kết nối đến ESP32 và phát nhạc.

---

## 🧪 Hướng dẫn sử dụng

1. Mở file `LOA_BLUETOOTH.ino` bằng Arduino IDE
2. Chọn đúng board **ESP32 Dev Module**
3. Cắm ESP32 vào máy tính và nạp code
4. Sau khi ESP32 khởi động, vào phần Bluetooth trên điện thoại, tìm tên thiết bị:
5. Kết nối và mở nhạc để phát qua loa

---

## 📂 File chính

- `LOA_BLUETOOTH.ino`: mã nguồn chính điều khiển kết nối Bluetooth và phát âm thanh

---

## 🚀 Gợi ý mở rộng

- Thêm nút điều khiển âm lượng
- Tích hợp pin sạc để làm loa di động
- Hiển thị trạng thái kết nối trên màn hình OLED
- Gắn thêm đèn RGB theo nhịp nhạc

---

## ❤️ Credits

- Tác giả: [Tên bạn]
- Dựa trên thư viện ESP32-A2DP của [pschatzmann](https://github.com/pschatzmann/ESP32-A2DP)

---

## 📜 Giấy phép

MIT License. Bạn có thể tự do sử dụng và chia sẻ.
