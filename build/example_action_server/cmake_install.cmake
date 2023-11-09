# Install script for directory: /home/doughnut/code/ros1_project/learn_ros1_ws/src/example_action_server

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/doughnut/code/ros1_project/learn_ros1_ws/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_action_server/action" TYPE FILE FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/src/example_action_server/action/demo.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_action_server/msg" TYPE FILE FILES
    "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/example_action_server/msg/demoAction.msg"
    "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/example_action_server/msg/demoActionGoal.msg"
    "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/example_action_server/msg/demoActionResult.msg"
    "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/example_action_server/msg/demoActionFeedback.msg"
    "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/example_action_server/msg/demoGoal.msg"
    "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/example_action_server/msg/demoResult.msg"
    "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/example_action_server/msg/demoFeedback.msg"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_action_server/cmake" TYPE FILE FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/build/example_action_server/catkin_generated/installspace/example_action_server-msg-paths.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/include/example_action_server")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/roseus/ros/example_action_server")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/common-lisp/ros/example_action_server")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/share/gennodejs/ros/example_action_server")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/lib/python3/dist-packages/example_action_server")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/devel/lib/python3/dist-packages/example_action_server")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/build/example_action_server/catkin_generated/installspace/example_action_server.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_action_server/cmake" TYPE FILE FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/build/example_action_server/catkin_generated/installspace/example_action_server-msg-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_action_server/cmake" TYPE FILE FILES
    "/home/doughnut/code/ros1_project/learn_ros1_ws/build/example_action_server/catkin_generated/installspace/example_action_serverConfig.cmake"
    "/home/doughnut/code/ros1_project/learn_ros1_ws/build/example_action_server/catkin_generated/installspace/example_action_serverConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/example_action_server" TYPE FILE FILES "/home/doughnut/code/ros1_project/learn_ros1_ws/src/example_action_server/package.xml")
endif()

