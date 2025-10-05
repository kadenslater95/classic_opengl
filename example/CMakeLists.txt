add_executable(example
    example.cpp
)

find_package(OpenGL REQUIRED COMPONENTS OpenGL)
find_package(GLU REQUIRED)
find_package(GLUT REQUIRED)

target_link_libraries(example
    PRIVATE
        OpenGL::GL
        OpenGL::GLU
        GLUT::GLUT
)
