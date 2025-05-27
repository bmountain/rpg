file(GLOB SRC "*.h" "*.cpp")
add_executable(rpg ${SRC})
target_link_libraries(rpg
  PRIVATE ftxui::screen
  PRIVATE ftxui::dom
  PRIVATE ftxui::component
)

add_custom_command(
  TARGET rpg
  POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy
  $<TARGET_FILE:rpg>
  ${PROJECT_SOURCE_DIR}/
)