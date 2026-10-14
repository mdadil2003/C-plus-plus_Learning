// A class HotelRoom has room number, type (AC/Non-AC), and rent. Use a constructor to initialize and display all rooms available.

class HotelRoom
{
private:
    int rnumber;
    char type[6];
    int rent;

public:
    HotelRoom();
    void display();
};
