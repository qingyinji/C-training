{
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-Icomponents/base_algorithm/inc",
            "-Icomponents/base_debug/inc",
            "-DAPPS",
            "-DNDEBUG"
        }
    },
    files = {
        "apps/sort_test/src/main.cc"
    },
    depfiles_gcc = "build/.objs/sort_test/linux/x86_64/release/apps/sort_test/src/main.cc.o:  apps/sort_test/src/main.cc  components/base_algorithm/inc/base_algorithm.h\
"
}