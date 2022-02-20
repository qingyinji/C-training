target("base_algorithm")
    set_kind("static")
    add_files("src/*.cc")
    add_includedirs("inc", {public = true})