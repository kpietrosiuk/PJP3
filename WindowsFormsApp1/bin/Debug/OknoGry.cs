using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Drawing;

namespace WindowsFormsApp1
{


    public class OknoGry : Panel
    {
        protected Graphics g;
        protected Siatka[,] siatka;
        protected int sz_ekranu;
        protected int wys_ekranu;

        public OknoGry()
        {
            sz_ekranu = 10;
            wys_ekranu = 10;
            this.Size = new System.Drawing.Size(sz_ekranu * Siatka.wymiar + 4, wys_ekranu * Siatka.wymiar + 4);
            siatka = new Siatka[sz_ekranu, wys_ekranu];
            for (int i = 0; i < sz_ekranu; i++)
                for (int j = 0; j < wys_ekranu; j++)
                    siatka[i, j] = new Siatka(i, j);
            g = CreateGraphics();
            this.Show();
        }

        public OknoGry(int a, int b)
        {
            if (a <= 0 || b <= 0) a = b = 10;
            sz_ekranu = a;
            wys_ekranu = b;
            this.Size = new System.Drawing.Size(sz_ekranu * Siatka.wymiar + 4, wys_ekranu * Siatka.wymiar + 4);
            siatka = new Siatka[sz_ekranu, wys_ekranu];
            for (int i = 0; i < sz_ekranu; i++)
                for (int j = 0; j < wys_ekranu; j++)
                    siatka[i, j] = new Siatka(i, j);
            g = CreateGraphics();
            this.Show();
        }

        public bool sprawdzwymiary(int x, int y)
        {
            if (x < 0 || x >= sz_ekranu || y < 0 || y >= wys_ekranu) return false;
            else return true;
        }

        public bool rysujkratke(int x, int y)
        {
            if (!sprawdzwymiary(x, y)) return false;
            if (siatka[x, y].SprawdzCzyPelna()) return false;
            siatka[x, y].rysuj(g);
            return true;
        }

        public void odswiez()
        {
            for (int i = 0; i < sz_ekranu; i++)
                for (int j = 0; j < wys_ekranu; j++)
                {
                    if (siatka[i, j].SprawdzCzyPelna())
                        siatka[i, j].rysuj(g);
                }
        }

        public void reset()
        {
            for (int i = 0; i < sz_ekranu; i++)
                for (int j = 0; j < wys_ekranu; j++)
                    siatka[i, j].kasuj(g, BackColor);
        }
    } }