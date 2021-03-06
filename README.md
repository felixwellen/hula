# hula
A new and tiki code generator for tango-controls device servers. The mission statement is this:

- Use standard C++ to implement your device servers, leave marshalling data and exceptions from and to tango to hula.
- Physical separation of the generated code from the user written code. Hula generates an abstract base class that you
  implement for each device type. Implement it and supply a factory and you're good to go!
- Simple TOML definition file that is easily readable and editable by humans, and works well with version control systems.
- Insulation from Tango and CORBA. Only the glue code generated by hula uses the tango headers, they do not need to be
  included in your implementation files, not even transitively.
- Easily integrated into a CMake-based build environment to automatically update the generated code whenever you edit
  the definition file.
