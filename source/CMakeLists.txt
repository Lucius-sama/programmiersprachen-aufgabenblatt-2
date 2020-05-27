# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  vec2.cpp
  mat2.cpp
  rect.cpp
  circle.cpp
  )
# Build Program
add_executable(program
  window.cpp
  glew.c
  vec2.cpp
  mat2.cpp
  rect.cpp
  circle.cpp
)

target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  glew.c
  tests.cpp
  vec2.cpp
  mat2.cpp
  rect.cpp
  circle.cpp
  window.cpp
  )
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )
