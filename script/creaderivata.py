def create_cpp_file(class_name):
    cpp_code = f"""#include "{class_name}.hpp"

{class_name}::{class_name}() {{
    // Constructor implementation
}}

{class_name}::~{class_name}() {{
    // Destructor implementation
}}

// Other member function implementations

"""

    with open(f"{class_name}.cpp", "w") as cpp_file:
        cpp_file.write(cpp_code)

def create_hpp_file(superclass, class_name):
    hpp_code = f"""#ifndef {class_name.upper()}_HPP
#define {class_name.upper()}_HPP

#include "{superclass}.hpp"

class {class_name} : public {superclass} {{
public:
    {class_name}();
    ~{class_name}();

    // Declare other member functions here
}};

#endif
"""

    with open(f"{class_name}.hpp", "w") as hpp_file:
        hpp_file.write(hpp_code)

def create_files(superclass, class_name):
    create_cpp_file(class_name)
    create_hpp_file(superclass, class_name)

superclass = input("Inserisci il nome della superclasse: ")
class_name = input("Inserisci il nome della classe derivata: ")

create_files(superclass, class_name)

