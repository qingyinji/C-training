target("sort_test")
	set_kind("binary")
	add_files("src/*.cc")
	add_deps("base_debug","base_algorithm")