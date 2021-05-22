This file contains, how you need to proceed to the files present in this folder
1. why_virtual_destructor.cpp
2. virtual_dctor.cpp
3. E_no_v_dtor.cpp
4. resolved_E_no_v_dtor.cpp

Rule:
1. whenever 'new' is used in constructor, 'delete' that in destructor
2. whenever 'new' is used in constructor, make the destructor virtual also
The above rules will keep everything sorted and fine.
