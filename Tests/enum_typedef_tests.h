// This is a simple test of h2m functionality.
// It should compile without complaint.

enum my_stuff {onething, twothing, threething};

enum their_stuff {thingone, thingtwo = 15};

typedef enum my_stuff my_stuff_t;

typedef int* integer_pointer;

int takes_type_def (enum their_stuff an_arg, enum my_stuff another_arg);

