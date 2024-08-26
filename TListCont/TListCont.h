#ifndef TLISTCONT_H
#define TLISTCONT_H
class TListCont{
   private:
      int m; // capacidade máxima de elementos do vetor
      int ultimo; // índice do ultimo No da lista
      float *X; // vetor que armazena a lista
   public:
      TListCont(int tam);
      float Consulta(int k);
      void Atribui(int k, float val);
      void Inserek(int k, float val);//insere antes de xk
      void Insereult(float val); // insere ultimo no
      void Eliminak(int k); // elimina No xk
      void Eliminault(); // elimina ultimo No
      ~TListCont();
};


#endif // TLISTCONT_H
