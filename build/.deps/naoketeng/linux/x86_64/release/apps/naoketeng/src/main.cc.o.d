{
    files = {
        "apps/naoketeng/src/main.cc"
    },
    depfiles_gcc = "build/.objs/naoketeng/linux/x86_64/release/apps/naoketeng/src/main.cc.o:  apps/naoketeng/src/main.cc components/base_debug/inc/base_debug.h\
",
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
    }
}