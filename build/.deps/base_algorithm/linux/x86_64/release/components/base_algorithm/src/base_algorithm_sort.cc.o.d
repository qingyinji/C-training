{
    depfiles_gcc = "build/.objs/base_algorithm/linux/x86_64/release/components/base_algorithm/src/base_algorithm_sort.cc.o:  components/base_algorithm/src/base_algorithm_sort.cc  components/base_algorithm/src/../inc/base_algorithm.h\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-Icomponents/base_algorithm/inc",
            "-DNDEBUG"
        }
    },
    files = {
        "components/base_algorithm/src/base_algorithm_sort.cc"
    }
}