add_executable(${PROJECT_NAME})
target_sources(${PROJECT_NAME} PRIVATE main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE
        fmt::fmt
        sfml-system sfml-window sfml-graphics
        EnTT::EnTT
)

target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_20)
target_compile_definitions(${PROJECT_NAME} PRIVATE
        $<$<CONFIG:DEBUG>:BTD_DEBUG>
        $<$<PLATFORM_ID:Windows>:BTD_WINDOWS>
        $<$<PLATFORM_ID:Linux>:BTD_LINUX>
        $<$<PLATFORM_ID:Darwin>:BTD_DARWIN>
)
