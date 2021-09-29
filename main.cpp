#include <iostream>

class Airplane {
    private:
        int NumEmp {0}; // Number of employees
        int NumSea {0}; // Number of seats
        int FliDay {0}; // Number of flights per day
    public:
        void set_Emp(int e) { NumEmp = e;    }
        void set_Sea(int s) { NumSea = s;    }
        void set_Day(int d) { FliDay = d;    }
        int getNumEmp()     { return NumEmp; }
        int getNumSea()     { return NumSea; }
        int getFliDay()     { return FliDay; }
};

class idPA : public Airplane {
    private:
        int idPilot {0}; // The id code of the pilot
        int idAirpl {0}; // The id code of the airplane
    public:
        void set_idP(int idP)  { idPilot = idP;  }
        void set_idA(int idA)  { idAirpl = idA;  }
        int getidP()           { return idPilot; }
        int getidA()           { return idAirpl; }
        void ShowData();
};

void idPA::ShowData() {
    std::cout << "Pilot id: " << getidP() << "\n";
    std::cout << "Airplane id: " << getidA() << "\n";
    std::cout << "Number of seats: " << getNumSea() << "\n";
    std::cout << "Number of employees: " << getNumEmp() << "\n";
    std::cout << "Number of flights per day: " << getFliDay() << "\n";
}

int main() {
    idPA airP;
    airP.set_Emp(6);
    airP.set_Sea(300);
    airP.set_Day(11);
    airP.set_idP(55327221);
    airP.set_idA(55327);
    airP.ShowData();
    std::cout << "\n";
    #ifdef Win32
        system("pause");
    #else
        system("echo 'press [ENTER] to continue...' && read");
    #endif
    return 0;
}
