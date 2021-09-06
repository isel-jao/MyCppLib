# INHERITANCE

**syntax:** class derived-class: access-specifier base-class

Where access-specifier is one of public, protected, or private, and base-class is the name of a previously defined class. If the access-specifier is not used, then it is private by default.

the different access types according to - who can access them.

| Access          | public | protected | private |
| --------------- | ------ | --------- | ------- |
| Same class      | yes    | yes       | yes     |
| Derived classes | yes    | yes       | no      |
| utside          | yes    | no        | no      |

A derived class inherits all base class methods with the following exceptions:

- Constructors, destructors and copy constructors of the base class.
- Overloaded operators of the base class.
- The friend functions of the base class.

## Type of Inheritance

class's **private** members are never accessible directly from a derived class, but can be accessed through calls to the **public** and **protected** members of the base class.

### Public Inheritance

**public** members of the base class become **public** members of the derived class and **protected** members of the base class become **protected** members of the derived class.

### Protected Inheritance

**public** and **protected** members of the base class become **protected** members of the derived class.

### Private Inheritance:

class, **public** and **protected** members of the become private members of the derived class.

# Multiple Inheritance

**syntax:** class derived-class: access baseA, access baseB....