#include "../GuiLite.h"

static const unsigned short raw_data[] = {
    65535, 65535, 65535, 65535, 65535, 65535, 63936, 63936, 63936, 63936, 63936, 65535, 65535, 65535, 65535, 65535, 
    65535, 65535, 65535, 65535, 63936, 63936, 63936, 63936, 63936, 63936, 64808, 65535, 65535, 65535, 65535, 65535, 
    65535, 65535, 65535, 63936, 63936, 63936, 63936, 63936, 63936, 64808, 64808, 65535, 65535, 65535, 65535, 65535, 
    65535, 65535, 65535, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 65535, 65535, 
    65535, 65535, 65535, 44000, 44000, 44000, 64808, 64808, 44000, 64808, 64808, 64808, 65535, 65535, 65535, 65535, 
    65535, 65535, 44000, 64808, 64808, 44000, 64808, 64808, 44000, 44000, 64808, 64808, 64808, 64808, 65535, 65535, 
    65535, 65535, 44000, 64808, 64808, 44000, 44000, 64808, 64808, 64808, 64808, 64808, 64808, 64808, 64808, 65535, 
    65535, 44000, 44000, 64808, 64808, 44000, 44000, 64808, 64808, 64808, 44000, 64808, 64808, 64808, 64808, 65535, 
    65535, 44000, 44000, 64808, 64808, 64808, 64808, 64808, 44000, 44000, 44000, 44000, 44000, 44000, 65535, 65535, 
    65535, 44000, 44000, 44000, 64808, 64808, 64808, 64808, 64808, 44000, 44000, 44000, 44000, 44000, 65535, 65535, 
    65535, 65535, 65535, 44000, 44000, 64808, 64808, 64808, 64808, 64808, 64808, 64808, 64808, 65535, 65535, 65535, 
    65535, 65535, 65535, 65535, 65535, 44000, 44000, 44000, 64808, 64808, 65535, 65535, 65535, 65535, 65535, 65535, 
    65535, 65535, 65535, 65535, 63936, 63936, 63936, 63936, 44000, 44000, 63936, 65535, 65535, 65535, 64808, 65535, 
    65535, 65535, 65535, 44000, 44000, 44000, 44000, 63936, 63936, 44000, 44000, 63936, 65535, 64808, 64808, 64808, 
    65535, 65535, 44000, 44000, 44000, 44000, 44000, 44000, 63936, 63936, 44000, 63936, 44000, 64808, 64808, 64808, 
    65535, 44000, 44000, 44000, 44000, 44000, 44000, 44000, 63936, 63936, 44000, 44000, 63936, 64808, 64808, 64808, 
    65535, 44000, 44000, 44000, 44000, 44000, 44000, 44000, 63936, 63936, 44000, 44000, 63936, 44000, 64808, 44000, 
    65535, 44000, 44000, 44000, 44000, 44000, 44000, 63936, 63936, 63936, 44000, 44000, 63936, 44000, 44000, 65535, 
    44000, 44000, 44000, 44000, 44000, 44000, 63936, 63936, 63936, 64808, 63936, 44000, 64808, 44000, 65535, 65535, 
    44000, 44000, 44000, 44000, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 65535, 65535, 65535, 
    64808, 64808, 64808, 64808, 64808, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 65535, 65535, 65535, 
    64808, 64808, 64808, 64808, 64808, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 65535, 65535, 44000, 
    64808, 64808, 64808, 64808, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 65535, 44000, 44000, 
    65535, 64808, 64808, 64808, 63936, 63936, 63936, 63936, 63936, 63936, 63936, 44000, 44000, 44000, 44000, 44000, 
    65535, 65535, 65535, 63936, 44000, 63936, 63936, 63936, 63936, 63936, 63936, 44000, 44000, 44000, 44000, 44000, 
    65535, 65535, 44000, 63936, 63936, 44000, 63936, 63936, 63936, 63936, 63936, 44000, 44000, 44000, 44000, 44000, 
    44000, 44000, 44000, 63936, 63936, 63936, 44000, 44000, 63936, 63936, 63936, 44000, 44000, 44000, 44000, 44000, 
    44000, 44000, 44000, 44000, 63936, 63936, 63936, 63936, 65535, 65535, 65535, 44000, 44000, 44000, 44000, 44000, 
    44000, 44000, 44000, 44000, 44000, 63936, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 
    65535, 44000, 44000, 44000, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 
    65535, 44000, 44000, 44000, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 
    65535, 65535, 44000, 44000, 44000, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 
};
extern const BITMAP_INFO step2_bmp;
const BITMAP_INFO step2_bmp ={
    16,
    32,
    16,
    raw_data
};
