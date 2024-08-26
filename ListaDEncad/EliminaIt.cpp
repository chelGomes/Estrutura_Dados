#include <iostream>
#include <stdlib.h> //exit()
#include <"ListaDEncad.h">

void ListaDEncad::EliminaIt()
{
   No *p;
   if(it != NULL)
   {
      if(it == pri)
      {
         pri = pri->consultaProx();
         delete it;
         it = pri;
      }
      else
      {
         p = pri;
         while(p->consultaProx() != it)
            p=p->consultaProx();

         p->atribProx(it->consultaProx());
         delete it;
         it = p->consultaProx();
      }
   }

}
