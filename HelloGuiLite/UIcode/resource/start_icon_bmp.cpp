#include "../GuiLite.h"

static const unsigned short raw_data[] = {
    65, 2146, 66, 2146, 65, 66, 2146, 66, 2146, 65, 66, 66, 2146, 2146, 66, 65, 2146, 65, 66, 2146, 66, 66, 65, 2146, 66, 2146, 2146, 2146, 2146, 65, 2146, 66, 66, 66, 66, 65, 2146, 66, 66, 66, 66, 2146, 65, 2146, 2146, 2146, 65, 
    2146, 2146, 2146, 66, 66, 2146, 2146, 66, 66, 66, 2146, 2146, 66, 2146, 2146, 66, 66, 2146, 65, 65, 2146, 65, 65, 2146, 66, 2146, 66, 66, 66, 2146, 66, 66, 2146, 2146, 2146, 2146, 2146, 2146, 2146, 2146, 2146, 2146, 2146, 2146, 66, 2146, 66, 
    65, 65, 66, 2146, 66, 2146, 2146, 66, 2146, 66, 2146, 2146, 2146, 2146, 65, 66, 2146, 66, 2146, 65, 2146, 2146, 2146, 65, 2146, 65, 66, 2146, 2146, 2146, 66, 2146, 65, 2146, 66, 2146, 65, 2146, 2146, 66, 2146, 66, 2146, 66, 2146, 2146, 2146, 
    65, 65, 2146, 66, 2146, 65, 65, 2146, 66, 2146, 66, 66, 66, 66, 2146, 65, 66, 65, 2146, 2146, 2146, 65, 2146, 65, 66, 66, 66, 66, 2146, 65, 66, 66, 2146, 2146, 2146, 65, 66, 2146, 66, 2146, 66, 66, 66, 2146, 65, 66, 66, 
    2146, 65, 66, 2146, 2146, 66, 65, 65, 66, 66, 2146, 66, 2146, 66, 65, 65, 2146, 2146, 65, 2146, 66, 2146, 66, 66, 66, 66, 66, 66, 65, 2146, 2146, 66, 66, 2146, 66, 2146, 66, 65, 66, 66, 2146, 66, 2146, 66, 66, 2146, 66, 
    66, 2146, 65, 65, 2146, 2146, 66, 65, 66, 66, 2146, 66, 2146, 2146, 65, 2146, 65, 66, 2146, 2146, 66, 2146, 66, 2146, 2146, 66, 66, 66, 66, 2146, 65, 2146, 2146, 2146, 66, 2146, 2146, 66, 66, 2146, 66, 2146, 66, 2146, 66, 66, 66, 
    2146, 2146, 2146, 66, 2146, 66, 2146, 66, 2146, 65, 66, 2146, 66, 2146, 65, 66, 2146, 66, 66, 2146, 65, 65, 2146, 2146, 66, 2146, 2146, 2146, 2146, 66, 66, 2146, 66, 2146, 66, 2146, 2146, 66, 2146, 2146, 66, 65, 66, 66, 2146, 2146, 66, 
    2146, 66, 66, 66, 2146, 66, 2146, 2146, 2146, 66, 2146, 2146, 66, 2146, 66, 66, 66, 65, 2146, 65, 66, 66, 66, 2146, 2146, 65, 65, 2146, 2146, 66, 66, 2146, 65, 66, 65, 2146, 66, 2146, 2146, 66, 2146, 2146, 2146, 66, 66, 65, 2146, 
    66, 2146, 65, 2146, 2146, 66, 66, 2146, 2146, 2146, 66, 65, 2146, 66, 2146, 2146, 65, 66, 2146, 66, 66, 2146, 66, 66, 2146, 66, 65, 2146, 2146, 66, 2146, 2146, 66, 2146, 65, 2146, 2146, 2146, 66, 2146, 2146, 2146, 66, 2146, 65, 65, 2146, 
    66, 2146, 66, 2146, 2146, 66, 2146, 66, 66, 2146, 65, 2146, 2146, 65, 65, 2146, 65, 2146, 65, 2146, 66, 2146, 2146, 65, 65, 33, 0, 0, 0, 0, 0, 0, 65, 66, 65, 65, 66, 2146, 66, 2146, 66, 65, 65, 66, 2146, 2146, 66, 
    2146, 66, 2146, 66, 65, 2146, 65, 2146, 65, 2146, 2146, 66, 65, 66, 65, 65, 2146, 65, 33, 0, 0, 0, 0, 0, 0, 6404, 19050, 29615, 42260, 50777, 63390, 65535, 0, 2146, 2146, 2146, 65, 2146, 66, 2146, 66, 2146, 2146, 65, 66, 2146, 65, 
    65, 2146, 66, 66, 66, 2146, 2146, 66, 2146, 65, 2146, 2146, 66, 66, 2146, 66, 0, 0, 10598, 21163, 31760, 48631, 21163, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 2146, 2146, 2146, 66, 66, 66, 66, 66, 66, 66, 66, 66, 66, 2146, 
    2146, 2146, 2146, 66, 66, 65, 65, 66, 66, 65, 66, 2146, 2146, 66, 2146, 0, 65535, 65535, 65535, 65535, 65535, 65535, 25421, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 66, 2146, 2146, 66, 65, 66, 2146, 2146, 2146, 65, 66, 65, 2146, 65, 
    66, 66, 2146, 2146, 65, 2146, 2146, 2146, 2146, 65, 66, 65, 65, 2146, 65, 0, 65535, 65535, 65535, 65535, 65535, 65535, 25389, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 2146, 66, 66, 2146, 2146, 66, 2146, 2146, 2146, 66, 66, 66, 65, 2146, 
    2146, 2146, 65, 66, 2146, 66, 65, 65, 2146, 2146, 2146, 65, 65, 66, 66, 0, 65535, 65535, 65535, 65535, 65535, 65535, 25421, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 66, 2146, 65, 65, 2146, 2146, 66, 66, 2146, 66, 66, 2146, 2146, 65, 
    2146, 2146, 2146, 2146, 2146, 65, 66, 66, 65, 66, 2146, 66, 66, 65, 65, 0, 65535, 65535, 65535, 65535, 65535, 65535, 25389, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 66, 66, 2146, 2146, 65, 66, 2146, 66, 65, 2146, 2146, 2146, 2146, 2146, 
    66, 65, 66, 65, 66, 2146, 66, 65, 66, 2146, 2146, 2146, 2146, 66, 2146, 0, 65535, 65535, 65535, 65535, 65535, 65535, 27502, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 2146, 66, 2146, 65, 66, 2146, 66, 65, 2146, 66, 65, 2146, 65, 66, 
    66, 2146, 66, 2146, 66, 65, 66, 2146, 2146, 66, 65, 2146, 2146, 2146, 65, 0, 29615, 25389, 25389, 25389, 25389, 27502, 8517, 27502, 25389, 25389, 25389, 25389, 25389, 25389, 25389, 29615, 0, 2146, 66, 65, 65, 65, 2146, 66, 2146, 2146, 2146, 2146, 65, 66, 2146, 
    66, 2146, 2146, 65, 2146, 65, 65, 2146, 66, 2146, 66, 66, 65, 65, 66, 0, 65535, 65535, 65535, 65535, 65535, 65535, 27502, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 66, 66, 2146, 66, 2146, 66, 2146, 66, 2146, 65, 2146, 66, 66, 2146, 
    2146, 66, 2146, 65, 2146, 2146, 65, 2146, 2146, 66, 66, 66, 2146, 66, 2146, 0, 65535, 65535, 65535, 65535, 65535, 65535, 25421, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 65, 2146, 66, 2146, 66, 2146, 66, 66, 2146, 66, 65, 2146, 66, 2146, 
    66, 65, 2146, 2146, 65, 66, 66, 65, 2146, 66, 66, 2146, 66, 2146, 66, 0, 65535, 65535, 65535, 65535, 65535, 65535, 25389, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 2146, 2146, 65, 2146, 66, 2146, 2146, 66, 65, 2146, 66, 66, 2146, 66, 
    2146, 2146, 2146, 2146, 66, 66, 65, 2146, 2146, 66, 2146, 66, 66, 2146, 2146, 0, 65535, 65535, 65535, 65535, 65535, 65535, 25389, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 2146, 66, 2146, 66, 2146, 65, 2146, 2146, 2146, 66, 66, 2146, 65, 2146, 
    66, 66, 65, 2146, 2146, 2146, 66, 2146, 2146, 65, 65, 65, 2146, 2146, 2146, 0, 65535, 65535, 65535, 65535, 65535, 65535, 25389, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 65, 2146, 66, 65, 2146, 66, 65, 2146, 2146, 66, 2146, 2146, 2146, 2146, 
    2146, 2146, 66, 66, 66, 66, 2146, 66, 2146, 66, 2146, 2146, 66, 66, 66, 0, 65535, 65535, 65535, 65535, 65535, 65535, 27501, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 2146, 66, 2146, 66, 2146, 66, 2146, 2146, 2146, 66, 2146, 2146, 66, 2146, 
    2146, 2146, 66, 2146, 66, 2146, 66, 2146, 2146, 65, 66, 2146, 65, 65, 65, 66, 0, 0, 10598, 21163, 31760, 48631, 21163, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 65535, 0, 2146, 65, 66, 2146, 66, 2146, 2146, 66, 2146, 65, 2146, 66, 65, 2146, 
    66, 66, 65, 2146, 2146, 2146, 66, 65, 2146, 2146, 66, 2146, 66, 2146, 65, 2146, 2146, 65, 33, 0, 0, 0, 0, 0, 0, 6404, 19050, 29615, 42260, 50777, 63390, 65535, 0, 65, 2146, 2146, 66, 2146, 66, 66, 2146, 66, 2146, 2146, 65, 66, 2146, 
    2146, 2146, 65, 66, 66, 2146, 65, 65, 2146, 66, 65, 2146, 2146, 66, 66, 66, 66, 66, 66, 66, 65, 65, 2146, 65, 65, 33, 0, 0, 0, 0, 0, 0, 2146, 66, 66, 2146, 66, 2146, 65, 2146, 2146, 2146, 66, 66, 66, 66, 2146, 
    2146, 66, 2146, 66, 2146, 2146, 65, 66, 66, 2146, 2146, 2146, 65, 65, 2146, 2146, 65, 65, 66, 66, 2146, 65, 65, 2146, 2146, 2146, 2146, 2146, 66, 2146, 66, 65, 2146, 2146, 2146, 66, 2146, 66, 66, 66, 66, 2146, 2146, 65, 65, 66, 2146, 
    66, 66, 2146, 2146, 65, 2146, 66, 66, 66, 2146, 66, 65, 2146, 65, 65, 66, 66, 2146, 2146, 66, 2146, 2146, 2146, 66, 65, 66, 66, 2146, 2146, 65, 66, 65, 66, 66, 66, 2146, 66, 66, 65, 65, 2146, 66, 66, 2146, 2146, 65, 2146, 
    65, 2146, 65, 2146, 66, 2146, 2146, 66, 66, 66, 2146, 2146, 65, 66, 2146, 66, 65, 65, 65, 2146, 66, 66, 2146, 65, 2146, 2146, 66, 66, 2146, 2146, 66, 66, 66, 2146, 66, 2146, 65, 2146, 66, 66, 2146, 66, 2146, 2146, 66, 66, 2146, 
    2146, 66, 66, 2146, 66, 66, 65, 66, 2146, 66, 66, 66, 65, 65, 65, 66, 2146, 66, 65, 65, 66, 65, 2146, 65, 2146, 65, 2146, 66, 66, 66, 66, 65, 66, 2146, 2146, 66, 2146, 66, 2146, 65, 65, 66, 2146, 2146, 66, 66, 2146, 
    2146, 2146, 65, 2146, 65, 65, 2146, 2146, 66, 66, 65, 2146, 2146, 2146, 66, 2146, 65, 2146, 2146, 66, 66, 65, 66, 2146, 2146, 66, 2146, 66, 2146, 66, 2146, 66, 2146, 66, 2146, 65, 2146, 2146, 2146, 66, 2146, 2146, 66, 66, 2146, 2146, 65, 
    66, 65, 2146, 2146, 2146, 2146, 66, 2146, 65, 2146, 66, 2146, 2146, 2146, 66, 66, 66, 2146, 65, 2146, 2146, 2146, 2146, 66, 66, 2146, 2146, 2146, 66, 2146, 66, 65, 66, 2146, 66, 2146, 66, 66, 66, 2146, 65, 2146, 2146, 2146, 65, 66, 66, 
    66, 2146, 66, 66, 2146, 65, 2146, 66, 65, 2146, 66, 66, 2146, 66, 66, 2146, 2146, 2146, 2146, 66, 65, 65, 66, 2146, 65, 66, 66, 66, 66, 2146, 2146, 2146, 2146, 65, 66, 2146, 2146, 2146, 2146, 66, 2146, 2146, 65, 2146, 2146, 66, 66, 
    66, 66, 2146, 66, 2146, 2146, 66, 2146, 65, 66, 2146, 2146, 2146, 65, 2146, 2146, 66, 65, 65, 2146, 2146, 66, 2146, 2146, 66, 2146, 2146, 66, 2146, 2146, 65, 2146, 2146, 2146, 66, 66, 2146, 66, 2146, 2146, 66, 65, 2146, 66, 2146, 2146, 65, 
    2146, 2146, 66, 2146, 2146, 2146, 2146, 2146, 2146, 65, 66, 2146, 2146, 65, 65, 66, 2146, 66, 66, 65, 66, 66, 66, 2146, 2146, 2146, 2146, 2146, 66, 2146, 2146, 2146, 66, 65, 2146, 65, 65, 66, 66, 65, 66, 66, 2146, 65, 65, 65, 2146, 
    66, 66, 66, 2146, 66, 2146, 65, 66, 66, 2146, 2146, 2146, 66, 65, 2146, 2146, 2146, 65, 2146, 66, 66, 2146, 66, 65, 65, 65, 66, 65, 2146, 66, 66, 2146, 66, 2146, 2146, 2146, 2146, 2146, 2146, 66, 65, 2146, 2146, 2146, 2146, 2146, 2146, 
    2146, 2146, 65, 2146, 66, 2146, 66, 65, 2146, 66, 66, 65, 66, 66, 2146, 66, 66, 2146, 2146, 2146, 2146, 2146, 2146, 65, 66, 65, 2146, 66, 2146, 2146, 66, 2146, 2146, 66, 66, 2146, 2146, 66, 65, 66, 2146, 65, 66, 65, 2146, 66, 2146, 
};
extern const BITMAP_INFO start_icon_bmp;
const BITMAP_INFO start_icon_bmp ={
    47,
    38,
    16,
    raw_data
};
