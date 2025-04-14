cmake_minimum_required(VERSION 4.0)
project(Labors)

enable_testing()
find_package(check CONFIG REQUIRED)

function(add_source SOURCE_FILE)
    get_filename_component(BASENAME "${SOURCE_FILE}" NAME_WE)
    
    add_executable("${BASENAME}" "${SOURCE_FILE}")

    set(TEST_TARGET "${BASENAME}_test")
    add_executable("${TEST_TARGET}" "${SOURCE_FILE}")
    target_compile_definitions("${TEST_TARGET}" PRIVATE TEST)
    target_link_libraries("${TEST_TARGET}" PRIVATE $<IF:$<TARGET_EXISTS:Check::check>,Check::check,Check::checkShared>)
    add_test(NAME "${TEST_TARGET}" COMMAND "${TEST_TARGET}")
endfunction(add_source)

add_subdirectory(Labor02)
add_subdirectory(Labor03)
