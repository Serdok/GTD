add_executable(${PROJECT_NAME}_test)
target_sources(${PROJECT_NAME}_test PRIVATE hello.cpp)

target_link_libraries(${PROJECT_NAME}_test PRIVATE
        fmt::fmt
        sfml-system sfml-window sfml-graphics
        EnTT::EnTT
        gmock gmock_main
)

target_compile_features(${PROJECT_NAME}_test PRIVATE cxx_std_20)
target_compile_definitions(${PROJECT_NAME}_test PRIVATE
        $<$<CONFIG:DEBUG>:BTD_DEBUG>
        $<$<PLATFORM_ID:Windows>:BTD_WINDOWS>
        $<$<PLATFORM_ID:Linux>:BTD_LINUX>
        $<$<PLATFORM_ID:Darwin>:BTD_DARWIN>
)

add_test(${PROJECT_NAME} ${PROJECT_NAME}_test)
