####
# F prime CMakeLists.txt:
#
# SOURCE_FILES: combined list of source and autocoding files
# MOD_DEPS: (optional) module dependencies
#
# Note: using PROJECT_NAME as EXECUTABLE_NAME
####
set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/AssertFatalAdapter.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/AssertFatalAdapterComponentImpl.cpp"

)

register_fprime_module()
# UTs ###
set(UT_SOURCE_FILES
  "${FPRIME_FRAMEWORK_PATH}/Svc/AssertFatalAdapter/AssertFatalAdapter.fpp"
  "${CMAKE_CURRENT_LIST_DIR}/test/ut/AssertFatalAdapterTester.cpp"
  "${CMAKE_CURRENT_LIST_DIR}/test/ut/main.cpp"
)
register_fprime_ut()
