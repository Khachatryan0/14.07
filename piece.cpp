#include <string>

class piece
{    
public:
    std :: string color;
    std :: string name;
};
class black_king : public piece 
{
    public:
    color = 'Black';
    name = 'BK'
};
class white_king : public piece
{
    public:
    color = 'White';
    name = 'WK';
};
class white_queen : public piece
{
    public:
    color = 'White';
    name = 'WQ';
};
class white_bishop : public piece
{
    public:
    color = 'White';
    name = 'B';
};
class white_night : public piece
{
    public:
    color = 'White';
    name = 'N';
};