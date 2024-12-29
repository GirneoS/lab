file(GLOB_RECURSE sources CONFIGURE_DEPENDS
    src/*.c
    src/*.h
    include/*.h
)

add_executable(image-transform ${sources}
        include/bmp.h
        include/image.h
        include/io.h
        src/bmp.c
        src/io.c
        src/utils.c
        include/read_status.h
        include/write_status.h
        include/utils.h
        src/transformations.c)
target_include_directories(image-transform PRIVATE src include)
