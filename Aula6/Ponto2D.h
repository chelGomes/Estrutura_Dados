#ifndef PONTO2D_H_INCLUDED
#define PONTO2D_H_INCLUDED

class Ponto2D
{
    private:
        float x,y;

    public:
        Ponto2D(float a, float b);
        ~Ponto2D();

        float getX();
		float getY();
        void setX(float val);
		void setY(float val);
		void imprime();
};

#endif
