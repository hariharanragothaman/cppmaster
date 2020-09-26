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
        refresh_cpp/arrays/fill_array.cpp
        refresh_cpp/arrays/find_max_element.cpp
        refresh_cpp/arrays/itertools_accumulate.cpp
        refresh_cpp/arrays/vector_erase.cpp
        refresh_cpp/hashmaps/hash_map.cpp
        refresh_cpp/general_hacks.cpp
        refresh_cpp/learning_stringstream.cpp
        refresh_cpp/linkedlists.cpp
        refresh_cpp/lower_bound.cpp
        refresh_cpp/number_guessing_game.cpp
        refresh_cpp/arrays/removing_element_from_vector.cpp
        refresh_cpp/sets.cpp
        refresh_cpp/strings/string.cpp)

add_executable(fill_array refresh_cpp/arrays/fill_array.cpp)
add_executable(find_where_the_element refresh_cpp/arrays/find_where_the_element.cpp)
add_executable(vector_tricks refresh_cpp/arrays/vector_tricks.cpp)