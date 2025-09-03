# 시스템 이름 설정 (Linux)
set(CMAKE_SYSTEM_NAME Linux)
# 타겟 프로세서 아키텍처 설정 (1단계에서 확인한 값)
set(CMAKE_SYSTEM_PROCESSOR aarch64)

# 크로스 컴파일러 경로 설정
set(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)

# 타겟 환경의 루트 경로 설정 (기본 시스템 경로 사용)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PACKAGE ONLY)
