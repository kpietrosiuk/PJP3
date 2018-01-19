namespace WindowsFormsApp1
{
    partial class TETRIS
    {
        /// <summary>
        /// Wymagana zmienna projektanta.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Wyczyść wszystkie używane zasoby.
        /// </summary>
        /// <param name="disposing">prawda, jeżeli zarządzane zasoby powinny zostać zlikwidowane; Fałsz w przeciwnym wypadku.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Kod generowany przez Projektanta formularzy systemu Windows

        /// <summary>
        /// Metoda wymagana do obsługi projektanta — nie należy modyfikować
        /// jej zawartości w edytorze kodu.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(TETRIS));
            this.Nowa_gra = new System.Windows.Forms.Button();
            this.Ranking = new System.Windows.Forms.Button();
            this.contextMenuStrip1 = new System.Windows.Forms.ContextMenuStrip(this.components);
            this.oAutorzeToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.pomocToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.oAutorzeToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.pomocToolStripMenuItem1 = new System.Windows.Forms.ToolStripMenuItem();
            this.Ustawienia = new System.Windows.Forms.Button();
            this.contextMenuStrip1.SuspendLayout();
            this.menuStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // Nowa_gra
            // 
            this.Nowa_gra.BackColor = System.Drawing.Color.Transparent;
            this.Nowa_gra.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.Nowa_gra.Location = new System.Drawing.Point(267, 263);
            this.Nowa_gra.Name = "Nowa_gra";
            this.Nowa_gra.Size = new System.Drawing.Size(194, 85);
            this.Nowa_gra.TabIndex = 0;
            this.Nowa_gra.Text = "Nowa gra";
            this.Nowa_gra.UseVisualStyleBackColor = false;
            this.Nowa_gra.Click += new System.EventHandler(this.button1_Click);
            // 
            // Ranking
            // 
            this.Ranking.BackColor = System.Drawing.Color.Transparent;
            this.Ranking.Location = new System.Drawing.Point(639, 263);
            this.Ranking.Name = "Ranking";
            this.Ranking.Size = new System.Drawing.Size(209, 85);
            this.Ranking.TabIndex = 1;
            this.Ranking.Text = "Ranking";
            this.Ranking.UseVisualStyleBackColor = false;
            // 
            // contextMenuStrip1
            // 
            this.contextMenuStrip1.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.oAutorzeToolStripMenuItem,
            this.pomocToolStripMenuItem});
            this.contextMenuStrip1.Name = "contextMenuStrip1";
            this.contextMenuStrip1.Size = new System.Drawing.Size(196, 76);
            // 
            // oAutorzeToolStripMenuItem
            // 
            this.oAutorzeToolStripMenuItem.Name = "oAutorzeToolStripMenuItem";
            this.oAutorzeToolStripMenuItem.Size = new System.Drawing.Size(195, 36);
            this.oAutorzeToolStripMenuItem.Text = "O autorze";
            // 
            // pomocToolStripMenuItem
            // 
            this.pomocToolStripMenuItem.Name = "pomocToolStripMenuItem";
            this.pomocToolStripMenuItem.Size = new System.Drawing.Size(195, 36);
            this.pomocToolStripMenuItem.Text = "Pomoc";
            // 
            // menuStrip1
            // 
            this.menuStrip1.ImageScalingSize = new System.Drawing.Size(32, 32);
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.oAutorzeToolStripMenuItem1,
            this.pomocToolStripMenuItem1});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(1574, 40);
            this.menuStrip1.TabIndex = 3;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // oAutorzeToolStripMenuItem1
            // 
            this.oAutorzeToolStripMenuItem1.Name = "oAutorzeToolStripMenuItem1";
            this.oAutorzeToolStripMenuItem1.Size = new System.Drawing.Size(132, 36);
            this.oAutorzeToolStripMenuItem1.Text = "O autorze";
            this.oAutorzeToolStripMenuItem1.Click += new System.EventHandler(this.oAutorzeToolStripMenuItem1_Click);
            // 
            // pomocToolStripMenuItem1
            // 
            this.pomocToolStripMenuItem1.Name = "pomocToolStripMenuItem1";
            this.pomocToolStripMenuItem1.Size = new System.Drawing.Size(99, 36);
            this.pomocToolStripMenuItem1.Text = "Pomoc";
            this.pomocToolStripMenuItem1.Click += new System.EventHandler(this.pomocToolStripMenuItem1_Click);
            // 
            // Ustawienia
            // 
            this.Ustawienia.Location = new System.Drawing.Point(1022, 261);
            this.Ustawienia.Name = "Ustawienia";
            this.Ustawienia.Size = new System.Drawing.Size(209, 88);
            this.Ustawienia.TabIndex = 4;
            this.Ustawienia.Text = "Ustawienia";
            this.Ustawienia.UseVisualStyleBackColor = true;
            this.Ustawienia.Click += new System.EventHandler(this.Ustawienia_Click);
            // 
            // TETRIS
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Maroon;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(1574, 929);
            this.Controls.Add(this.Ustawienia);
            this.Controls.Add(this.menuStrip1);
            this.Controls.Add(this.Ranking);
            this.Controls.Add(this.Nowa_gra);
            this.MainMenuStrip = this.menuStrip1;
            this.Name = "TETRIS";
            this.Text = "TETRIS";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.contextMenuStrip1.ResumeLayout(false);
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button Nowa_gra;
        private System.Windows.Forms.Button Ranking;
        private System.Windows.Forms.ContextMenuStrip contextMenuStrip1;
        private System.Windows.Forms.ToolStripMenuItem oAutorzeToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem pomocToolStripMenuItem;
        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem oAutorzeToolStripMenuItem1;
        private System.Windows.Forms.ToolStripMenuItem pomocToolStripMenuItem1;
        private System.Windows.Forms.Button Ustawienia;
    }
}

