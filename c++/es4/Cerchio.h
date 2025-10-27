#ifndef CERCHIO_H
#define CERCHIO_H

class Cerchio {
    private:
        int raggio;
        double pi_val;
    public:
        Cerchio();

        void setRaggio(int _raggio);
        float getArea();
        float getCirconferenza();
        int getRaggio();
        
};
#endif