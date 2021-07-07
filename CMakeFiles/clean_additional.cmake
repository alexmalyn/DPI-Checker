# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\MouseTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\MouseTest_autogen.dir\\ParseCache.txt"
  "MouseTest_autogen"
  )
endif()
