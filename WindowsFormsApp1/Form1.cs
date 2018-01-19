using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Diagnostics;

namespace WindowsFormsApp1
{
    public partial class TETRIS : Form
    {

        public TETRIS()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            System.Diagnostics.Process.Start("C:\\Users\\kasia\\source\\repos\\WindowsFormsApp1\\Tetris\\Debug\\Tetris.exe");
            //NowaGra form3 = new NowaGra();
           // form3.Show();
            
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void pomocToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            String filename = "C:\\Users\\kasia\\source\\repos\\WindowsFormsApp1\\pomoc.txt";

            Process.Start(filename);
        }

        private void oAutorzeToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            String filename = "C:\\Users\\kasia\\source\\repos\\WindowsFormsApp1\\o_autorze.txt";

            Process.Start(filename);
        }

        private void Ustawienia_Click(object sender, EventArgs e)
        {
            Ustawienia form2 = new Ustawienia();
            form2.Show();
           
        }
    }
}
