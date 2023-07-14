#include <iostream>
#include <string>
class Board_cage
{
    public:
    std :: string employment = "_|";
    std :: string color;
    std :: string position;
    void set_employment(std :: string piece_name)
    {
        this->employment = piece_name;
    }
};
class chess_board : public Board_cage
{
    public:
    std :: string chess_position;
    

void chess_board_creation()
{
    Board_cage** board = new Board_cage*[8];
    for (int row = 1; row < 9; row++)
    {
        board[row] = new Board_cage[8];
    }
}
std :: string get_employment()
{
    return this->employment;
}
void show_chess_position()
{
    for ( int i = 0; i < 8; i++)
    {
        for (int i1 = 0; i1 < 8; i1++)
        {
            std :: cout << this->get_employment();
        }
        std :: cout << std :: endl;
    }
}
};