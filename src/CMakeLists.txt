project(VidoePlayer)

add_executable(${PROJECT_NAME}
  main.cpp
  MainWindow.h
  MainWindow.cpp
  MainWindow.ui
)
# 与上面的find_package ()一一对应将对应的库链接到项目里

find_package(Qt5 COMPONENTS Gui Widgets REQUIRED)
target_link_libraries(${PROJECT_NAME}
  PRIVATE Qt5::Core Qt5::Gui Qt5::Widgets)
