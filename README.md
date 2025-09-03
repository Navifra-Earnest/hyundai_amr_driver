# hyundai_amr_driver
* 현대표준amr


## `cd ~/hyundai_amr_driver/ros2_ws/` 

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

## 빌드
```bash
colcon build --packages-select motor_driver
```
## Run
```bash
ros2 run motor_driver motor_driver_node
```
## configure // init , PDO mapping
```bash
ros2 lifecycle set /motor_driver_node configure 
```
## 활성화 // motor enable
```bash
ros2 lifecycle set /motor_driver_node activate 
```
## 비활성화 // motor disable
```bash
ros2 lifecycle set /motor_driver_node deactivate 
```


-----

## cross-complie (x86_64 to arm64) : ARM64 cpu용 install 파일
* 사용환경 : Ubuntu 24.04 , ROS2 Jazzy

### 1단계: 크로스 컴파일 실행

프로젝트 최상위 폴더(`~/hyundai_amr_driver/ros2_ws`)에서 다음 명령어를 실행하여 크로스 컴파일용 Docker 이미지를 빌드합니다.
### **실행 방법 (`docker buildx` 사용)**

이 `Dockerfile`을 빌드하려면 Docker의 `buildx`라는 확장 기능이 필요합니다.

1.  **(최초 1회 설정)** `buildx`를 활성화하고 설정합니다.
    ```bash
    docker buildx create --name mybuilder --use
    docker buildx inspect --bootstrap
    ```

2.  **크로스 컴파일 빌드 실행:**
    프로젝트 최상위 폴더(`~/hyundai_amr_driver/ros2_ws`)에서 아래 명령어를 실행하여 ARM64용으로 이미지를 빌드합니다.
    ```bash
    docker buildx build --platform linux/arm64 -t motor_driver_cross_compiled -f Dockerfile.cross-compile . --load
    ```
    * `--platform linux/arm64`: 빌드 결과물을 `arm64` 아키텍처용으로 만들라고 명시합니다.
    * `--load`: 빌드된 이미지를 로컬 Docker 저장소에 저장하여 다음 단계에서 사용할 수 있도록 합니다.

빌드가 성공적으로 완료되면, `motor_driver_cross_compiled`라는 Docker 이미지 안에 ARM에서 실행 가능한 `install` 폴더가 생성됩니다.

### 2단계: 결과물 추출 및 배포

이제 이미지 안에 있는 `install` 폴더를 로컬 컴퓨터로 복사한 뒤, 이 폴더를 ARM 컴퓨터로 옮기면 됩니다.

1.  **임시 컨테이너 생성:**
    ```bash
    docker create --name temp_container motor_driver_cross_compiled
    ```

2.  **컨테이너에서 `install` 폴더 복사:**
    ```bash
    docker cp temp_container:/install_arm64 ./
    ```

3.  **임시 컨테이너 삭제:**
    ```bash
    docker rm temp_container
    ```


### 3단계: ARM 컴퓨터에 배포
이제 로컬 컴퓨터의 (`~/hyundai_amr_driver/ros2_ws`) 폴더 안에 `install_arm64`라는 폴더가 생성되었을 것입니다. 이 폴더가 바로 ARM 컴퓨터용 빌드 결과물입니다.

1. **install_arm64 폴더를 tar와 같은 명령어로 압축합니다.**    

```Bash

tar -czvf install_arm64.tar.gz install_arm64
```
2. **압축된 `install_arm64.tar.gz` 파일을 scp나 USB 등을 사용하여 타겟 ARM 컴퓨터로 전송합니다.**

3. **ARM 컴퓨터에서 압축을 풉니다.**

```Bash

# ARM 컴퓨터에서 실행
tar -xzvf install_arm64.tar.gz
```
4. **ARM 컴퓨터에서 환경 설정을 하고 노드를 실행합니다.**

```Bash

# ARM 컴퓨터에서 실행
source install_arm64/setup.bash
ros2 run motor_driver motor_driver_node
```

