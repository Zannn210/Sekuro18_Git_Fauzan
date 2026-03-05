#include <iostream>

#include <string>

using namespace std;

class RobotPemadam{
    private:
        int jarak;
        string status;
    public:
        void inputSensor(int inputJarak){
            this->jarak = inputJarak;
        }
        void prosesLogika(){
            if (jarak > 20)
            {
                status = "Maju Mencari Api";
            }else if (jarak <= 20 && jarak > 5)
            {
                status = "UDAH DEKET NIH BRAY";
            }else
            {
                status = "Posisi Tepat! gas semprot kali ya!";
            }
            
        }
        void cetakStatus(){
            cout << "[Sensor: "<< this->jarak << " cm] -> Action: [" << status << "]" << endl;
        }
    };

int main(){
    RobotPemadam rp;
    int dataSensor;
    cout << "=== Simulasi Robot Pemadam Api ===" <<endl;
    cout << "Ketik 67 untuk mengakhiri program" << endl;
    while (true)
    {
        cout << "Input jarak sensor: ";
        cin >> dataSensor;

        if (dataSensor == 67)
        {
            cout << "Program dihentikan" << endl;
            break;
        }
        rp.inputSensor(dataSensor);
        rp.prosesLogika();
        rp.cetakStatus();
    }

    return 0;
}