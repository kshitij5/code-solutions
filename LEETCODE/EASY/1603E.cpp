class ParkingSystem {
private:
    int a[3];
public:
    ParkingSystem(int big, int medium, int small) {
        a[0] = big;
        a[1] = medium;
        a[2] = small;
    }
    
    bool addCar(int carType) {
        if (a[carType-1] > 0) {
            a[carType-1]--;
            return true;
        }
        return false;
    }
};