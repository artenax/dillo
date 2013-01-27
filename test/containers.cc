#include "../lout/object.hh"
#include "../lout/container.hh"

using namespace lout::object;
using namespace lout::container::typed;

void testHashTable ()
{
   HashTable<String, Integer> h(true, true);

   h.put (new String ("one"), new Integer (1));
   h.put (new String ("two"), new Integer (2));
   h.put (new String ("three"), new Integer (3));
   
   Iterator<String> it = h.iterator ();
   while (it.hasNext ()) {
      String *k = it.getNext ();
      Integer *v = h.get (k);
      printf ("%s -> %d\n", k->chars(), v->getValue());
   }
}

int main (int argc, char *argv[])
{
   testHashTable ();

   return 0;
}
