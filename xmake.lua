set_project("c++_training")
set_version("1.0.0", {build = "%Y%m%d%H%M"})
add_rules("mode.debug", "mode.release")

includes("components")
includes("apps")