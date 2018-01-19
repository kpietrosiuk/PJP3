namespace WindowsFormsApp1
{
    partial class Ustawienia
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Ustawienia));
            this.wyglad1 = new System.Windows.Forms.CheckBox();
            this.wyglad2 = new System.Windows.Forms.CheckBox();
            this.SuspendLayout();
            // 
            // wyglad1
            // 
            this.wyglad1.AutoSize = true;
            this.wyglad1.BackColor = System.Drawing.Color.Transparent;
            this.wyglad1.Location = new System.Drawing.Point(544, 196);
            this.wyglad1.Name = "wyglad1";
            this.wyglad1.Size = new System.Drawing.Size(134, 29);
            this.wyglad1.TabIndex = 0;
            this.wyglad1.Text = "Wygląd 1";
            this.wyglad1.UseVisualStyleBackColor = false;
            // 
            // wyglad2
            // 
            this.wyglad2.AutoSize = true;
            this.wyglad2.BackColor = System.Drawing.Color.Transparent;
            this.wyglad2.Location = new System.Drawing.Point(544, 292);
            this.wyglad2.Name = "wyglad2";
            this.wyglad2.Size = new System.Drawing.Size(134, 29);
            this.wyglad2.TabIndex = 1;
            this.wyglad2.Text = "Wygląd 2";
            this.wyglad2.UseVisualStyleBackColor = false;
            // 
            // Ustawienia
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(12F, 25F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(1396, 801);
            this.Controls.Add(this.wyglad2);
            this.Controls.Add(this.wyglad1);
            this.Name = "Ustawienia";
            this.Text = "TETRIS - USTAWIENIA";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.CheckBox wyglad1;
        private System.Windows.Forms.CheckBox wyglad2;
    }
}