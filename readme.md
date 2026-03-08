# cppProjectTemplate
A modern C++ project template following best practices, designed to be a solid foundation for any application or tool.

## Setup
This project uses vcpkg for dependency management. Before building, you need to configure your local vcpkg path.

1. Copy or Rename `CMakeUserConfig.cmake.example` to `CMakeUserConfig.cmake`
2. Open `CMakeUserConfig.cmake` and set your vcpkg installation path:
```cmake
set(VCPKG_ROOT "C:/vcpkg")
```
3. Open the project in CLion or generate a solution with CMake GUI

> `CMakeUserConfig.cmake` is gitignored and will never be committed — each developer sets their own path locally.