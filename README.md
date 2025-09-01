# hyundai_amr_driver
* 현대표준amr


## cd ~/hyundai_amr_driver/ros2_ws/ 

### Local 에서 작업시 (ros2)
```bash
source ~/hyundai_amr_driver/ros2_ws/install/setup.zsh
```

### docker에서 작업시 (ros2 humble)
```bash
 docker compose up
```
```bash
docker exec -it navifra bash
```
```bash
source install/setup.bash
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
