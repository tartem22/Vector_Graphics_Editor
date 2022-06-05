cmake_minimum_required(VERSION 3.2)

set(PATCH_VERSION "1" CACHE INTERNAL "Patch version")
set(PROJECT_VERSION 0.0.${PATCH_VERSION})

project(vector_graphics_editor VERSION ${PROJECT_VERSION})

add_executable(vector_graphics_editor
                main.cpp
                vge_controller.h
                vge_model.h
                vge_view.h
                )

set_target_properties(vector_graphics_editor
                        PROPERTIES
                        CXX_STANDARD 17
                        CXX_STANDARD_REQUIRED ON)

if (MSVC)
    target_compile_options(vector_graphics_editor PRIVATE
        /W4
)
else ()
    target_compile_options(vector_graphics_editor PRIVATE
        -Wall -pedantic -Werror
    )
endif()

install(TARGETS vector_graphics_editor RUNTIME DESTINATION bin)

set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION_MAJOR "${PROJECT_VERSION_MAJOR}")
set(CPACK_PACKAGE_VERSION_MINOR "${PROJECT_VERSION_MINOR}")
set(CPACK_PACKAGE_VERSION_PATCH "${PROJECT_VERSION_PATCH}")
set(CPACK_PACKAGE_CONTACT example@example.com)
include(CPack)