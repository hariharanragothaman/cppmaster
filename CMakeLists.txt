cmake_minimum_required(VERSION 3.17)
project(cppmaster)

set(CMAKE_CXX_STANDARD 14)

add_executable(cppmaster
        cpp_questions/best_time_to_buy_sell_stock_1.cpp
        cpp_questions/for_loop_challene.cpp
        cpp_questions/getting_input.cpp
        cpp_questions/longest_palindromic_substring.cpp
        cpp_questions/reverse_array.cpp
        cpp_questions/string_stream_split_comma_string.cpp
        cpp_questions/two_sum.cpp
        cpp_questions/two_sum_better_style.cpp
        cpp_questions/valid_parantheses.cpp
        cpp_questions/variable_array.cpp
        refresh_cpp/vectors/fill_array.cpp
        refresh_cpp/vectors/find_max_element.cpp
        refresh_cpp/vectors/itertools_accumulate.cpp
        refresh_cpp/vectors/vector_erase.cpp
        refresh_cpp/hashmaps/hash_map.cpp
        refresh_cpp/general/general_hacks.cpp
        refresh_cpp/strings/learning_stringstream.cpp
        refresh_cpp/linkedlist/linkedlists.cpp
        refresh_cpp/general/lower_bound.cpp
        refresh_cpp/number_guessing_game.cpp
        refresh_cpp/vectors/removing_element_from_vector.cpp
        refresh_cpp/sets.cpp
        refresh_cpp/strings/string.cpp)

add_executable(fill_array refresh_cpp/vectors/fill_array.cpp)
add_executable(find_where_the_element refresh_cpp/vectors/find_where_the_element.cpp)
add_executable(about_float refresh_cpp/general/about_float.cpp)
add_executable(about_double refresh_cpp/general/about_double.cpp)
add_executable(about_declr_initial refresh_cpp/general/about_declr_initial.cpp)
add_executable(about_taking_inputs refresh_cpp/general/about_taking_inputs.cpp)
add_executable(about_taking_inputs2 refresh_cpp/general/about_taking_inputs2.cpp)
add_executable(squareroot refresh_cpp/math/squareroot.cpp)
add_executable(powers refresh_cpp/math/powers.cpp)
add_executable(trigo refresh_cpp/math/trigo.cpp)
add_executable(about_quiz1 refresh_cpp/general/about_quiz1.cpp)
add_executable(about_ternary refresh_cpp/general/about_ternary.cpp)
add_executable(about_pointers refresh_cpp/pointers/about_pointers.cpp)
add_executable(about_call_by_reference refresh_cpp/pointers/about_call_by_reference.cpp)
add_executable(about_arrays refresh_cpp/arrays/about_arrays.cpp)
add_executable(about_pointer_implementation refresh_cpp/pointers/about_pointer_implementation.cpp)
add_executable(about_referencing_variables refresh_cpp/pointers/about_referencing_variables.cpp)
add_executable(about_pointers_to_arrays refresh_cpp/pointers/about_pointers_to_arrays.cpp)
add_executable(about_pointer_to_pointer refresh_cpp/pointers/about_pointer_to_pointer.cpp)
add_executable(about_pointer_to_a_function refresh_cpp/pointers/about_pointer_to_a_function.cpp)
add_executable(fibonacci refresh_cpp/math/fibonacci.cpp)
add_executable(about_classes refresh_cpp/oops/about_classes.cpp)
add_executable(about_class_member_functions refresh_cpp/oops/about_class_member_functions.cpp)
add_executable(about_constructors refresh_cpp/oops/about_constructors.cpp)
add_executable(about_inheritance refresh_cpp/oops/about_inheritance.cpp)
add_executable(about_polymorphism_virtual_functions refresh_cpp/oops/about_polymorphism_virtual_functions.cpp)
add_executable(sizeof_class refresh_cpp/oops/sizeof_class.cpp)