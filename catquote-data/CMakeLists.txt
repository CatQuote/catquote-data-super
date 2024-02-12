project(catquote_data)

file(GLOB_RECURSE HEADERS CONFIGURE_DEPENDS include/*.h)
file(GLOB_RECURSE SOURCES CONFIGURE_DEPENDS src/*.cc)

add_library(catquote_data STATIC
        ${HEADERS}
        ${SOURCES}
)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        ../thirdparty/rapidjson/include
)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        include
)
