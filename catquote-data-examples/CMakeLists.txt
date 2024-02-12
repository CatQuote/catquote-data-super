project(catquote_data_examples)

add_executable(${PROJECT_NAME} example/main.cc)

target_link_libraries( ${PROJECT_NAME}
        PUBLIC
        catquote_data
)
