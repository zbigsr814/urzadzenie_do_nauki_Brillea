
struct Braille
{
  int table[6];
  Braille(int a1, int a2, int a3, int a4, int a5, int a6)
  {
    table[0] = a1;
    table[1] = a2;
    table[2] = a3;
    table[3] = a4;
    table[4] = a5;
    table[5] = a6;
  }
  
};

class Letters
{
public:
  int N;
   Braille *table[25];
  
  
  Letters(String zdanie)
  {
    N = zdanie.length();
   int i =0;
    
    for(int a = 0; a < N; a++)
      {
        char letter = zdanie[a];
         switch(letter)   //kolekcja znakow brilla
         {
            case 'a':
              table[i]= new Braille(1, 0, 0, 0, 0, 0);
              break;
            case 'b':
              table[i]= new Braille(1, 1, 0, 0, 0, 0);
              break;
            case 'c':
              table[i]= new Braille(1, 0, 0, 1, 0, 0);
              break;
            case 'd':
              table[i]= new Braille(1, 0, 0, 1, 1, 0);
              break;
            case 'e':
              table[i]= new Braille(1, 0, 0, 0, 1, 0);
              break;
            case 'f':
              table[i]= new Braille(1, 1, 0, 1, 0, 0);
              break;
            case 'g':
              table[i]= new Braille(1, 1, 0, 1, 1, 0);
              break;
            case 'h':
              table[i]= new Braille(1, 1, 0, 0, 1, 0);
              break;
            case 'i':
              table[i]= new Braille(0, 1, 0, 1, 0, 0);
              break;
            case 'j':
              table[i]= new Braille(0, 1, 0, 1, 1, 0);
              break;
            case 'k':
              table[i]= new Braille(1, 0, 1, 0, 0, 0);
              break;
            case 'l':
              table[i]= new Braille(1, 1, 1, 0, 0, 0);
              break;
            case 'm':
              table[i]= new Braille(1, 0, 1, 1, 0, 0);
              break;
            case 'n':
              table[i]= new Braille(1, 0, 1, 1, 1, 0);
              break;
            case 'o':
              table[i]= new Braille(1, 0, 1, 0, 1, 0);
              break;
            case 'p':
              table[i]= new Braille(1, 1, 1, 1, 0, 0);
              break;
            case 'q':
              table[i]= new Braille(1, 1, 1, 1, 1, 0);
              break;
            case 'r':
              table[i]= new Braille(1, 1, 1, 0, 1, 0);
              break;
            case 's':
              table[i]= new Braille(0, 1, 1, 1, 0, 0);
              break;
            case 't':
              table[i]= new Braille(0, 1, 1, 1, 1, 0);
              break;
            case 'u':
              table[i]= new Braille(1, 0, 1, 0, 0, 1);
              break;
            case 'v':
              table[i]= new Braille(1, 1, 1, 0, 0, 1);
              break;
            case 'x':
              table[i]= new Braille(1, 0, 1, 1, 0, 1);
              break;
            case 'y':
              table[i]= new Braille(1, 0, 1, 1, 1, 1);
              break;
            case 'z':
              table[i]= new Braille(1, 0, 1, 0, 1, 1);
              break;
            case 'w':
              table[i]= new Braille(0, 1, 0, 1, 1, 1);
              break;
            case 32:
              continue;
            default:
              table[i]=new Braille(0, 0, 0, 0, 0, 0);
         }
         i++;
      }
  }
};
