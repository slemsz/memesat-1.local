####
# F prime CMakeLists.txt:
#
# SOURCE_FILES: combined list of source and autocoding files
# MOD_DEPS: (optional) module dependencies
#
# Note: using PROJECT_NAME as EXECUTABLE_NAME
####
set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/StaticMemory.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/StaticMemoryComponentImpl.cpp"
)

register_fprime_module()

#### UTS ###
set(UT_SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/StaticMemory.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/test/ut/StaticMemoryTester.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/test/ut/StaticMemoryMain.cpp"
)
set(UT_MOD_DEPS
  STest
)
register_fprime_ut()
