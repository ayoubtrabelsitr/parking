# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\parking_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\parking_1_autogen.dir\\ParseCache.txt"
  "parking_1_autogen"
  )
endif()
