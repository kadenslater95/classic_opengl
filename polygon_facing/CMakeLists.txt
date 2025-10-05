add_executable(polygon_facing
    polygon_facing.cpp
)

find_package(OpenGL REQUIRED COMPONENTS OpenGL)
find_package(GLU REQUIRED)
find_package(GLUT REQUIRED)

target_link_libraries(polygon_facing
    PRIVATE
        OpenGL::GL
        OpenGL::GLU
        GLUT::GLUT
)
