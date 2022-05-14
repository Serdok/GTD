cmake_minimum_required(VERSION 3.22)
project(
        GourdTowerDefence
        DESCRIPTION "A Tower defense game about stopping Gourds?"
        VERSION 0.0.1
        LANGUAGES CXX
        HOMEPAGE_URL "https://www.github.com/Serdok/GTD"
)

# Includes


# Include third-party projects
add_subdirectory(vendor/)

# Create executable, link sources
add_subdirectory(src/)

# Enable testing if requested or current project is the top-level project
if (ENABLE_TESTING OR CMAKE_PROJECT_NAME STREQUAL "GourdTowerDefence")
  add_subdirectory(tests/)
endif ()
