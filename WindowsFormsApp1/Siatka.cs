using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;



namespace WindowsFormsApp1
{ //klasa dzieląca pole do gry na siatkę
   public class Siatka
    {
        private Rectangle kwadrat;
        private Color kolor; //kolor kratki
        private int x, y;
        private bool pelna;
        public const int wymiar = 20; //odpowiada wymiarowi pojedynczego kwadratu 
                                      //z którego składają się klocki




        public Siatka()
        {
            kwadrat = new Rectangle(x * wymiar + 2,
                                    y * wymiar + 2,
                                    wymiar - 2,
                                    wymiar - 2);
            pelna = false;
            x = y = 0;
            kolor = Color.Black;
        }

        public Siatka(int a, int b)
        {
            x = a;
            y = b;
            kwadrat = new Rectangle(x * wymiar + 2,
                                    y * wymiar + 2,
                                    wymiar - 2,
                                    wymiar - 2);
            pelna = false;
            kolor = Color.Black;
        }

        public Siatka(int a, int b, Color k)
        {
            x = a;
            y = b;
            kolor = k;
            kwadrat = new Rectangle(x * wymiar + 2,
                                    y * wymiar + 2,
                                    wymiar - 2,
                                    wymiar - 2);
            pelna = false;
        }

        public bool SprawdzCzyPelna()
        {
            return pelna;
        }

        public void setkolor(Color k)
        {
            kolor = k;
        }

        public Color getkolor()
        {
            return kolor;
        }

        public void rysuj(Graphics g)
        {
            SolidBrush p = new SolidBrush(kolor);
            g.FillRectangle(p, kwadrat);
            g.DrawRectangle(Pens.Black, kwadrat);
            pelna = true;
        }

        public void kasuj(Graphics g, Color k)
        {
            SolidBrush p = new SolidBrush(k);
            g.FillRectangle(p, kwadrat);
            g.DrawRectangle(new Pen(p), kwadrat);
            pelna = false;
        }
    }

   
}
