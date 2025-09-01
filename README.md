# hyundai_amr_driver
현대표준플랫폼


### cd ~/hyundai_amr_driver/ros2_ws/ 에서 작업
```bash
source ~/hyundai_amr_driver/ros2_ws/install/setup.zsh
```
---

빌드
```bash
colcon build --packages-select motor_driver
```
Run
```bash
ros2 run motor_driver motor_driver_node
```
configure // init , PDO mapping
```bash
ros2 lifecycle set /motor_driver_node configure 
```
활성화 // motor enable
```bash
ros2 lifecycle set /motor_driver_node activate 
```
비활성화 // motor disable
```bash
ros2 lifecycle set /motor_driver_node deactivate 
```
