cmake_minimum_required(VERSION 3.5)

# 设置自动生成ui.h文件, AUTOUIC打开可以省去QT5_WRAP_UI命令
set(CMAKE_AUTOUIC ON)

# 设置自动生成moc文件,AUTOMOC打开可以省去QT5_WRAP_CPP命令
# 详见备注1
set(CMAKE_AUTOMOC ON)

# 相见备注2
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# 查找QT模块，其他模块选择请看备注3
find_package(Qt5 COMPONENTS Core REQUIRED)

add_subdirectory(src)

