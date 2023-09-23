class Solution {
public:
    vector<double> convertTemperature(double celsius) {

       double kel = celsius + 273.15;
       double fah = celsius * 1.80 + 32.00;

       vector<double> val;
       val.push_back(kel);
       val.push_back(fah);

       return val; 
    }
};