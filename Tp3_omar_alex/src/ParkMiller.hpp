#ifndef PARKMILLER_HPP
#define PARKMILLER_HPP


class ParkMiller{
    private:
    int seed;
    int seed0; //le seed initial, pour pouvoir revenir avec resert_seed
    
    public:
    ParkMiller();
    ParkMiller(int seed);
    ParkMiller(const ParkMiller & toCopy);

    int generate_int();
    
    void set_seed(int seed);
    int get_seed() const;
    void reset_seed();
};





#endif