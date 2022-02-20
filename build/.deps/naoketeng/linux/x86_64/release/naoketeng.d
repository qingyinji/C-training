{
    files = {
        "build/.objs/naoketeng/linux/x86_64/release/apps/naoketeng/src/main.cc.o",
        "build/linux/x86_64/release/libbase_debug.a",
        "build/linux/x86_64/release/libbase_algorithm.a"
    },
    values = {
        "/usr/bin/g++",
        {
            "-m64",
            "-Lbuild/linux/x86_64/release",
            "-s",
            "-lbase_algorithm",
            "-lbase_debug"
        }
    }
}