# CMAKE generated file: DO NOT EDIT!
# Generated by CMake Version 3.27
cmake_policy(SET CMP0009 NEW)

# test_directories at CMakeLists.txt:10 (file)
file(GLOB NEW_GLOB LIST_DIRECTORIES true "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/*")
set(OLD_GLOB
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/.gitignore"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/1"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/2"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/3"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/4"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/5"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/6"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/7"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/8"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/tests/9"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/out/build/ubsan/CMakeFiles/cmake.verify_globs")
endif()

# sources at CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB FOLLOW_SYMLINKS LIST_DIRECTORIES false "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/include/*.h")
set(OLD_GLOB
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/include/bmp.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/include/cmp.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/include/common.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/include/dimensions.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/include/file_cmp.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/include/image.h"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/include/io.h"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/out/build/ubsan/CMakeFiles/cmake.verify_globs")
endif()

# sources at CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB FOLLOW_SYMLINKS LIST_DIRECTORIES false "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/src/*.c")
set(OLD_GLOB
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/src/bmp.c"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/src/file_cmp.c"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/src/main.c"
  "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/src/util.c"
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/out/build/ubsan/CMakeFiles/cmake.verify_globs")
endif()

# sources at CMakeLists.txt:1 (file)
file(GLOB_RECURSE NEW_GLOB FOLLOW_SYMLINKS LIST_DIRECTORIES false "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/src/*.h")
set(OLD_GLOB
  )
if(NOT "${NEW_GLOB}" STREQUAL "${OLD_GLOB}")
  message("-- GLOB mismatch!")
  file(TOUCH_NOCREATE "/Users/mak/CLionProjects/assignment-3-image-transform-ilyin/tester/out/build/ubsan/CMakeFiles/cmake.verify_globs")
endif()
