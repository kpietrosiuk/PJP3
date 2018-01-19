namespace WindowsFormsApp1
{
    partial class NowaGra
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(NowaGra));
            this.level1 = new System.Windows.Forms.Label();
            this.Sterowanie = new System.Windows.Forms.Label();
            this.Punkty1 = new System.Windows.Forms.Label();
            this.Licznik = new System.Windows.Forms.Timer(this.components);
            this.SuspendLayout();
            // 
            // level1
            // 
            this.level1.AutoSize = true;
            this.level1.BackColor = System.Drawing.Color.Transparent;
            this.level1.Location = new System.Drawing.Point(1043, 183);
            this.level1.Name = "level1";
            this.level1.Size = new System.Drawing.Size(83, 25);
            this.level1.TabIndex = 0;
            this.level1.Text = "Poziom";
            // 
            // Sterowanie
            // 
            this.Sterowanie.AutoSize = true;
            this.Sterowanie.BackColor = System.Drawing.Color.Transparent;
            this.Sterowanie.Location = new System.Drawing.Point(1043, 289);
            this.Sterowanie.Name = "Sterowanie";
            this.Sterowanie.Size = new System.Drawing.Size(119, 25);
            this.Sterowanie.TabIndex = 1;
            this.Sterowanie.Text = "Sterowanie";
            this.Sterowanie.Click += new System.EventHandler(this.Sterowanie_Click);
            // 
            // Punkty1
            // 
            this.Punkty1.AutoSize = true;
            this.Punkty1.BackColor = System.Drawing.Color.Transparent;
            this.Punkty1.Location = new System.Drawing.Point(1043, 240);
            this.Punkty1.Name = "Punkty1";
            this.Punkty1.Size = new System.Drawing.Size(78, 25);
            this.Punkty1.TabIndex = 2;
            this.Punkty1.Text = "Punkty";
            // 
            // NowaGra
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(1574, 829);
            this.Controls.Add(this.Punkty1);
            this.Controls.Add(this.Sterowanie);
            this.Controls.Add(this.level1);
            this.Name = "NowaGra";
            this.Text = "TETRIS - Nowa gra";
            this.Load += new System.EventHandler(this.NowaGra_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label level1;
        private System.Windows.Forms.Label Sterowanie;
        private System.Windows.Forms.Label Punkty1;
        private System.Windows.Forms.Timer Licznik;
    }
}