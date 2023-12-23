# Install script for directory: /Users/heron/Desktop/memedir/memesat-1.local/Ref

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-artifacts")
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

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/bin" TYPE EXECUTABLE FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/bin/Darwin/Ref")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/bin/Ref" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/bin/Ref")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/strip" -u -r "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/bin/Ref")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libconfig.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libconfig.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libconfig.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libconfig.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Cfg.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Cfg.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Cfg.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Cfg.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Types.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Types.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Types.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Types.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Logger.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Logger.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Logger.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Logger.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Obj.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Obj.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Obj.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Obj.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Port.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Port.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Port.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Port.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Time.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Time.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Time.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Time.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Comp.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Comp.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Comp.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Comp.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Time.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Time.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Time.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Time.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_LinuxTime.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_LinuxTime.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_LinuxTime.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_LinuxTime.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Com.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Com.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Com.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Com.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Tlm.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Tlm.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Tlm.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Tlm.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Log.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Log.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Log.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Log.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Cmd.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Cmd.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Cmd.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Cmd.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Prm.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Prm.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Prm.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Prm.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Buffer.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Buffer.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Buffer.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Buffer.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libUtils_Hash.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libUtils_Hash.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libUtils_Hash.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libUtils_Hash.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libOs.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libOs.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libOs.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libOs.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libDrv_ByteStreamDriverModel.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_ByteStreamDriverModel.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_ByteStreamDriverModel.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_ByteStreamDriverModel.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libDrv_Ip.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_Ip.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_Ip.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_Ip.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libDrv_Udp.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_Udp.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_Udp.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_Udp.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libDrv_TcpClient.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_TcpClient.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_TcpClient.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_TcpClient.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libDrv_DataTypes.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_DataTypes.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_DataTypes.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_DataTypes.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Cycle.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Cycle.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Cycle.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Cycle.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Ping.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Ping.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Ping.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Ping.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Sched.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Sched.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Sched.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Sched.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_CompQueued.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_CompQueued.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_CompQueued.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_CompQueued.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libDrv_BlockDriver.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_BlockDriver.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_BlockDriver.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libDrv_BlockDriver.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libRef_PingReceiver.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_PingReceiver.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_PingReceiver.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_PingReceiver.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libRef_RecvBuffApp.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_RecvBuffApp.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_RecvBuffApp.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_RecvBuffApp.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libRef_SendBuffApp.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_SendBuffApp.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_SendBuffApp.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_SendBuffApp.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libRef_SignalGen.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_SignalGen.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_SignalGen.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_SignalGen.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Fatal.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Fatal.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Fatal.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Fatal.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_ActiveLogger.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_ActiveLogger.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_ActiveLogger.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_ActiveLogger.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_ActiveRateGroup.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_ActiveRateGroup.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_ActiveRateGroup.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_ActiveRateGroup.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_AssertFatalAdapter.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_AssertFatalAdapter.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_AssertFatalAdapter.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_AssertFatalAdapter.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_BufferManager.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_BufferManager.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_BufferManager.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_BufferManager.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_CmdDispatcher.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_CmdDispatcher.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_CmdDispatcher.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_CmdDispatcher.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Seq.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Seq.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Seq.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Seq.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_CmdSequencer.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_CmdSequencer.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_CmdSequencer.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_CmdSequencer.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libUtils_Types.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libUtils_Types.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libUtils_Types.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libUtils_Types.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_FramingProtocol.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FramingProtocol.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FramingProtocol.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FramingProtocol.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Deframer.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Deframer.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Deframer.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Deframer.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_FatalHandler.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FatalHandler.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FatalHandler.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FatalHandler.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libCFDP_Checksum.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libCFDP_Checksum.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libCFDP_Checksum.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libCFDP_Checksum.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_FilePacket.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_FilePacket.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_FilePacket.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_FilePacket.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_FileDownlinkPorts.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileDownlinkPorts.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileDownlinkPorts.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileDownlinkPorts.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_FileDownlink.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileDownlink.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileDownlink.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileDownlink.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_FileManager.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileManager.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileManager.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileManager.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_FileUplink.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileUplink.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileUplink.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_FileUplink.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libFw_Ports_SuccessCondition.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Ports_SuccessCondition.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Ports_SuccessCondition.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libFw_Ports_SuccessCondition.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Framer.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Framer.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Framer.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Framer.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_WatchDog.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_WatchDog.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_WatchDog.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_WatchDog.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_Health.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Health.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Health.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_Health.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_PassiveConsoleTextLogger.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_PassiveConsoleTextLogger.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_PassiveConsoleTextLogger.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_PassiveConsoleTextLogger.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_PrmDb.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_PrmDb.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_PrmDb.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_PrmDb.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_RateGroupDriver.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_RateGroupDriver.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_RateGroupDriver.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_RateGroupDriver.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_StaticMemory.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_StaticMemory.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_StaticMemory.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_StaticMemory.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_SystemResources.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_SystemResources.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_SystemResources.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_SystemResources.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libSvc_TlmChan.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_TlmChan.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_TlmChan.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libSvc_TlmChan.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static" TYPE STATIC_LIBRARY FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/lib/Darwin/libRef_Top.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_Top.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_Top.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/Darwin/Ref/lib/static/libRef_Top.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Ref" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/Darwin/Ref/dict" TYPE FILE FILES "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/Top/RefTopologyAppDictionary.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Autocoders/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/config/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Fw/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Svc/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Os/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Drv/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/CFDP/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/F-Prime/Utils/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SensorTypes/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/PingReceiver/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/RecvBuffApp/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SendBuffApp/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SignalGen/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/SchedulerPorts/cmake_install.cmake")
  include("/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/Ref/Top/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/Users/heron/Desktop/memedir/memesat-1.local/Ref/build-fprime-automatic-native/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
