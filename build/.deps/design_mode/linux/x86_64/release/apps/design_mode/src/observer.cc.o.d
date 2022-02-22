{
    depfiles_gcc = "build/.objs/design_mode/linux/x86_64/release/apps/design_mode/src/observer.cc.o:  apps/design_mode/src/observer.cc apps/design_mode/inc/observer.h\
",
    values = {
        "/usr/bin/gcc",
        {
            "-m64",
            "-fvisibility=hidden",
            "-fvisibility-inlines-hidden",
            "-O3",
            "-Iapps/design_mode/inc",
            "-Icomponents/base_algorithm/inc",
            "-Icomponents/base_debug/inc",
            "-DAPPS",
            "-DNDEBUG"
        }
    },
    files = {
        "apps/design_mode/src/observer.cc"
    }
}