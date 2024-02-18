#最低版本支持，保证兼容性*
cmake_minimum_required(VERSION 3.0.0)

#项目名称和版本*
project(demo VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

# 添加可执行文件
add_executable(demo main.cpp)

# 添加安装规则
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

#用来转换中文字符编码，解决中文乱码问题*
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -fexec-charset=GBK")
