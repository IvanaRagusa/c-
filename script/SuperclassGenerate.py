def generate_hpp_file(class_name):
    content = f"""
#ifndef {class_name.upper()}_HPP
#define {class_name.upper()}_HPP

#include <string>

class {class_name} {{
protected:
    std::string _type;

public:
    {class_name}();
    {class_name}(const {class_name}& {class_name});
    ~{class_name}();
    {class_name}(std::string name);
    {class_name}& operator=(const {class_name}& {class_name});

}};

#endif
"""
    with open(f"{class_name}.hpp", "w") as hpp_file:
        hpp_file.write(content)

def generate_cpp_file(class_name):
    content = f"""
#include "{class_name}.hpp"

{class_name}::{class_name}() {{
    // Implementazione del costruttore di default
}}

{class_name}::{class_name}(const {class_name}& other) {{
    *this = other;
}}

{class_name}& {class_name}::operator=(const {class_name}& {class_name}) {{
    if (this != &{class_name}) {{
        this->_type = {class_name}._type;
    }}
    return *this;
}}

{class_name}::~{class_name}() {{
    // Implementazione del distruttore
}}
"""
    with open(f"{class_name}.cpp", "w") as cpp_file:
        cpp_file.write(content)

class_name = input("Insert your class name: ")
generate_hpp_file(class_name)
generate_cpp_file(class_name)


