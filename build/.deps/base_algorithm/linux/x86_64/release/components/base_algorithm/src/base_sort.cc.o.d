{
    files = {
        "components/base_algorithm/src/base_sort.cc"
    },
    depfiles_gcc = "build/.objs/base_algorithm/linux/x86_64/release/components/base_algorithm/src/base_sort.cc.o:  components/base_algorithm/src/base_sort.cc\
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
    }
}