cmake_minimum_required(VERSION 2.8)
project(accuracy_evaluation)

set(CMAKE_CXX_STANDARD 11)

add_executable(${PROJECT_NAME}-test src/accuracy_evaluation_example.cpp)

include(GNUInstallDirs)
configure_file(${PROJECT_SOURCE_DIR}/pkgconfig/pkgconfig.sample.in ${PROJECT_NAME}.pc @ONLY)
install(FILES ${PROJECT_SOURCE_DIR}/src/confusion.hpp ${PROJECT_SOURCE_DIR}/src/evaluation.hpp
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_FULL_INCLUDEDIR}/${PROJECT_NAME}/)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}.pc
        DESTINATION ${CMAKE_INSTALL_FULL_DATAROOTDIR}/pkgconfig)