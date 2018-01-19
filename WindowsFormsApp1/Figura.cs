using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Drawing;
using System.Windows.Forms;


namespace WindowsFormsApp1
{

    public class figura
    {
        public enum kolory { niebieski, zolty, czerwony, brazowy, zielony };
        public enum figury { L, prosta, kwadrat, schodki, piorun};

        public bool[,] siatka;
        public figury jaka;
        public Color kolor;
        public int kat;
        private static Random losuj = new Random();

        public figura()
        {
            kat = 0;
            siatka = new bool[4, 4];
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++)
                    siatka[i, j] = false;
            kolory nowy_kolor = (kolory)losuj.Next(4);
            switch (nowy_kolor)
            {
                case kolory.niebieski: kolor = Color.LightBlue; break;
                case kolory.zolty: kolor = Color.LemonChiffon; break;
                case kolory.brazowy: kolor = Color.BurlyWood; break;
                case kolory.czerwony: kolor = Color.Coral; break;
                case kolory.zielony: kolor = Color.YellowGreen; break;

                default: kolor = Color.Black; break;
            }

            figury nowa_figura = (figury)losuj.Next(6);
            switch (nowa_figura)
            {
                // L
                case figury.L:
                    siatka[0, 0] = siatka[0, 1] = siatka[0, 2] = siatka[1, 2] = true;
                    jaka = figury.L;
                    break;
                // palka
                case figury.prosta:
                    siatka[0, 0] = siatka[0, 1] = siatka[0, 2] = siatka[0, 3] = true;
                    jaka = figury.prosta;
                    break;
                // kwadrat
                case figury.kwadrat:
                    siatka[0, 0] = siatka[1, 0] = siatka[0, 1] = siatka[1, 1] = true;
                    jaka = figury.kwadrat;
                    break;
                // trojkat
                case figury.schodki:
                    siatka[1, 0] = siatka[0, 1] = siatka[1, 1] = siatka[2, 1] = true;
                    jaka = figury.schodki;
                    break;
                // piorun
                case figury.piorun:
                    siatka[0, 0] = siatka[0, 1] = siatka[1, 1] = siatka[1, 2] = true;
                    jaka = figury.piorun;
                    break;
            }
        }

        public figura odwrocona(int fi)
        {
            if (fi != 0 && fi != 90 && fi != 180 && fi != 270) return this;
            figura nowa = new figura();
            nowa.kat = fi;
            nowa.kolor = kolor;
            nowa.jaka = jaka;
            for (int i = 0; i < 4; i++)
                for (int j = 0; j < 4; j++)
                    nowa.siatka[i, j] = false;
            switch (jaka)
            {
                case figury.L:
                    switch (fi)
                    {
                        case 0: nowa.siatka[0, 0] = nowa.siatka[0, 1] = nowa.siatka[0, 2] = nowa.siatka[1, 2] = true; break;
                        case 90: nowa.siatka[0, 0] = nowa.siatka[1, 0] = nowa.siatka[2, 0] = nowa.siatka[0, 1] = true; break;
                        case 180: nowa.siatka[0, 0] = nowa.siatka[1, 0] = nowa.siatka[1, 1] = nowa.siatka[1, 2] = true; break;
                        case 270: nowa.siatka[2, 0] = nowa.siatka[0, 1] = nowa.siatka[1, 1] = nowa.siatka[2, 1] = true; break;
                    }
                    break;

             

                case figury.prosta:
                    switch (fi)
                    {
                        case 0:
                        case 180:
                            nowa.siatka[0, 0] = nowa.siatka[0, 1] = nowa.siatka[0, 2] = nowa.siatka[0, 3] = true; break;
                        case 90:
                        case 270:
                            nowa.siatka[0, 0] = nowa.siatka[1, 0] = nowa.siatka[2, 0] = nowa.siatka[3, 0] = true; break;
                    }
                    break;

                case figury.kwadrat:
                    nowa.siatka[0, 0] = nowa.siatka[1, 0] = nowa.siatka[0, 1] = nowa.siatka[1, 1] = true; break;

                case figury.schodki:
                    switch (fi)
                    {
                        case 0: nowa.siatka[1, 0] = nowa.siatka[0, 1] = nowa.siatka[1, 1] = nowa.siatka[2, 1] = true; break;
                        case 90: nowa.siatka[0, 0] = nowa.siatka[0, 1] = nowa.siatka[0, 2] = nowa.siatka[1, 1] = true; break;
                        case 180: nowa.siatka[0, 0] = nowa.siatka[1, 0] = nowa.siatka[2, 0] = nowa.siatka[1, 1] = true; break;
                        case 270: nowa.siatka[1, 0] = nowa.siatka[1, 1] = nowa.siatka[1, 2] = nowa.siatka[0, 1] = true; break;
                    }
                    break;

                case figury.piorun:
                    switch (fi)
                    {
                        case 0:
                        case 180:
                            nowa.siatka[0, 0] = nowa.siatka[0, 1] = nowa.siatka[1, 1] = nowa.siatka[1, 2] = true; break;
                        case 90:
                        case 270:
                            nowa.siatka[1, 0] = nowa.siatka[2, 0] = nowa.siatka[0, 1] = nowa.siatka[1, 1] = true; break;
                    }
                    break;
            }
            return nowa;
        }
    }
}
