# 베이스 이미지로 ROS 2 Humble을 사용합니다.
FROM ros:humble-ros-base

# 필요한 시스템 패키지 설치: can-utils, git, 그리고 Boost 라이브러리 추가
RUN apt-get update && apt-get install -y \
    can-utils \
    git \
    vim \
    libboost-all-dev \
    && rm -rf /var/lib/apt/lists/*

# ROS 2 작업 공간을 생성합니다.
WORKDIR /ros2_ws

# 소스 코드를 Docker 이미지 안으로 복사합니다.
# (.dockerignore 파일에 의해 build/, install/, log/ 폴더는 제외됩니다)
COPY . /ros2_ws/

# ROS 2 의존성을 설치하고 소스 코드를 빌드합니다.
# ros:humble-ros-base 이미지는 rosdep이 이미 초기화되어 있으므로 init은 생략합니다.
RUN . /opt/ros/humble/setup.sh && \
    apt-get update && \
    rosdep update && \
    rosdep install -i --from-path src --rosdistro humble -y --skip-keys "motor_driver" && \
    colcon build --symlink-install

# 컨테이너가 시작될 때 실행할 스크립트를 생성합니다.
RUN echo "source /ros2_ws/install/setup.bash" >> ~/.bashrc
RUN echo "echo 'Motor driver container is ready.'" >> ~/.bashrc
RUN echo "export ROS_DOMAIN_ID=30" >> ~/.bashrc

# 컨테이너가 시작될 때 Bash 셸을 실행합니다.
CMD ["/bin/bash"]

