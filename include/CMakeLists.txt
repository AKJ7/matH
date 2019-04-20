add_library(matH mat.h)
target_link_libraries(matH m)
set_target_properties(matH PROPERTIES LINKER_LANGUAGE C)
