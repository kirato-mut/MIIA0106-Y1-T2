#!/bin/bash

files=(
    "./01_introduction_to_languages.py"
    "./01_introduction.cpp"
    "./02_basic_structure.cpp"
    "./02_basic_structure.py"
    "./03_variables_and_data_types.py"
    "./03_variables_data_types.cpp"
    "./04_input_output.cpp"
    "./04_input_output.py"
    "./05_operators_and_expressions.py"
    "./05_operators_expressions.cpp"
    "./06_loops.cpp"
    "./06_loops.py"
    "./07_functions.cpp"
    "./07_functions.py"
    "./08_arrays.cpp"
    "./08_arrays.py"
    "./09_pointers.cpp"
    "./10_strings.cpp"
    "./10_strings.py"
    "./11_structs_and_classes.py"
    "./11_structs_classes.cpp"
    "./12_oop.cpp"
    "./12_oop.py"
)

for file in "${files[@]}"; do
    echo "Running $file"
    if [[ $file == *.py ]]; then
        python3 "$file"
    elif [[ $file == *.cpp ]]; then
        g++ "$file" -std=c++11 -o "${file%.cpp}.out" && "${file%.cpp}.out"
    fi
    echo ""
done
