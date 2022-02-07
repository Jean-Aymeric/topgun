cmake_minimum_required(VERSION 3.20)
project(topgun C)

set(CMAKE_C_STANDARD 99)

add_executable(topgun main.c controller/controller.c controller/controller.h model/model.c model/model.h view/view.c view/view.h)
