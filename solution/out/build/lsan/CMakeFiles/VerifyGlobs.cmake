# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.27
cmake_policy(SET CMP0009 NEW)

# sources at CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB FOLLOW_SYMLINKS LIST_DIRECTORIES false "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/include/*.h")
set(OLD_GLOB
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/include/bmp.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/include/image.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/include/io.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/include/read_status.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/include/utils.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/include/write_status.h"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/out/build/lsan/CMakeFiles/cmake.verify_globs")
endif()

# sources at CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB FOLLOW_SYMLINKS LIST_DIRECTORIES false "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/src/*.c")
set(OLD_GLOB
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/src/bmp.c"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/src/io.c"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/src/main.c"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/src/transformations.c"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/src/utils.c"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/out/build/lsan/CMakeFiles/cmake.verify_globs")
endif()

# sources at CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB FOLLOW_SYMLINKS LIST_DIRECTORIES false "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/src/*.h")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/solution/out/build/lsan/CMakeFiles/cmake.verify_globs")
endif()
