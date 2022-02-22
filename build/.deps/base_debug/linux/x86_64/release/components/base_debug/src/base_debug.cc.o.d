{
    depfiles_gcc = "build/.objs/base_debug/linux/x86_64/release/components/base_debug/src/base_debug.cc.o:  components/base_debug/src/base_debug.cc  components/base_debug/inc/base_debug.h\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-Icomponents/base_debug/inc",
            "-DNDEBUG"
        }
    },
    files = {
        "components/base_debug/src/base_debug.cc"
    }
}