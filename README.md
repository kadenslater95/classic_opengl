# classic_opengl
OpenGL Programming on older versions with the fixed function pipeline (pre-shader OpenGL)

### Build
Uses cmake. Broken into project subfolders, e.g. to build example you would do
```
cmake -S . -B build
cmake --build build --target example
```
Then you can run the `example` executable with (note Windows would have a .exe extension)
```
./build/example/example
```
