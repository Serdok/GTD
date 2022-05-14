# fmt
add_subdirectory(fmt/)

# SFML
add_subdirectory(SFML/)

# EnTT
add_subdirectory(entt/)

# googletest
if (ENABLE_TESTING OR CMAKE_PROJECT_NAME STREQUAL "GourdTowerDefence")
  set(INSTALL_GTEST OFF)
  add_subdirectory(googletest/)
  include(GoogleTest)
endif ()

