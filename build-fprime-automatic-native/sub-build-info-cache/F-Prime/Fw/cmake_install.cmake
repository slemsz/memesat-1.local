# Install script for directory: /home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/fprime/Fw

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-artifacts")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Buffer/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Com/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Cmd/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Log/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Logger/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Time/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Tlm/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Prm/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Cfg/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Comp/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Obj/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Port/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Ports/SuccessCondition/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Types/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/FilePacket/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/SerializableFile/cmake_install.cmake")
  include("/home/krokko/Desktop/ssrl/MEMEdir/fprime_tutorials/memesat/build-fprime-automatic-native/sub-build-info-cache/F-Prime/Fw/Test/cmake_install.cmake")

endif()

