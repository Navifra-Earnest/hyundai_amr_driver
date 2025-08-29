# motor_driver/msg/MotorStatus.msg

std_msgs/Header header   # 타임스탬프 및 프레임 ID

float32 temperature_c    # 모터 온도 (섭씨)
float32 current_a        # 모터 전류 (암페어)
uint16 status_flags      # 상태 플래그 (비트마스크 형태)
# 예: 0x0001: Ready, 0x0002: Running, 0x0010: Warning, 0x0100: Error