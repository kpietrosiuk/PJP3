#include <allegro5\allegro.h>
#include <allegro5\allegro_image.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5\allegro_font.h>
#include <allegro5\allegro_ttf.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int speed = 0;
int przesuniecie = 0;
int spadanie = 5;

inline void init() {
	al_init();
	al_init_font_addon();
	al_init_primitives_addon();
	al_init_ttf_addon();
	al_init_image_addon();
	al_install_keyboard();

}
int map[10][18] = {
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,0,0,0,0,0,0,0,0,1,
	1,1,1,1,1,1,1,1,1,1
};



int ksztalt_prosta[4][4] = {
	0,0,0,0,
	0,0,0,0,
	0,0,0,0,
	2,2,2,2
};

int ksztalt_kwadrat[4][4] = {
	0,0,0,0,
	0,0,0,0,
	3,3,0,0,
	3,3,0,0
};

int ksztalt_schody[4][4] = {
	0,0,0,0,
	0,0,0,0,
	0,4,0,0,
	4,4,4,0

};

int ksztalt_piorun[4][4] = {
	0,0,0,0,
	0,0,0,0,
	0,5,5,0,
	5,5,0,0
};

int ksztalt_L[4][4] = {
	0,0,0,0,
	6,0,0,0,
	6,0,0,0,
	6,6,0,0

};

int obrot = 0;
int x_obrot = 0;
void prosta(obrot) {
	
	if (obrot % 2 == 0) {

		al_draw_filled_rectangle(400 + przesuniecie, 100 + spadanie, 450 + przesuniecie, 150 + spadanie, al_map_rgb(255, 69, 0));
		al_draw_rectangle(400 + przesuniecie, 100 + spadanie, 450 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(255, 69, 0));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(255, 69, 0));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(550 + przesuniecie, 100 + spadanie, 600 + przesuniecie, 150 + spadanie, al_map_rgb(255, 69, 0));
		al_draw_rectangle(550 + przesuniecie, 100 + spadanie, 600 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);
		
	}
	else{
		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(255, 69, 0));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(255, 69, 0));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(255, 69, 0));
		al_draw_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 250 + spadanie, 500 + przesuniecie, 300 + spadanie, al_map_rgb(255, 69, 0));
		al_draw_rectangle(450 + przesuniecie, 250 + spadanie, 500 + przesuniecie, 300 + spadanie, al_map_rgb(0, 0, 0), 2);
		
	}
}

void kwadrat(void) {
	al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(106, 90, 205));
	al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

	al_draw_filled_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(106, 90, 205));
	al_draw_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

	al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(106, 90, 205));
	al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

	al_draw_filled_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(106, 90, 205));
	al_draw_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);
}

void schody(obrot) {

	if (obrot % 4 == 0) {

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(400 + przesuniecie, 150 + spadanie, 450 + przesuniecie, 200 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(400 + przesuniecie, 150 + spadanie, 450 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);
	}
	else if (obrot % 4 == 1) {

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);
	}
	else if (obrot % 4 == 2) {

		al_draw_filled_rectangle(400 + przesuniecie, 100 + spadanie, 450 + przesuniecie, 150 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(400 + przesuniecie, 100 + spadanie, 450 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);
	}
	else if (obrot % 4 == 3) {

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(400 + przesuniecie, 150 + spadanie, 450 + przesuniecie, 200 + spadanie, al_map_rgb(255, 215, 0));
		al_draw_rectangle(400 + przesuniecie, 150 + spadanie, 450 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);
	}
}

void piorun(obrot) {

	if (obrot % 2 == 0) {

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(102, 205, 170));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(102, 205, 170));
		al_draw_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(102, 205, 170));
		al_draw_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(550 + przesuniecie, 150 + spadanie, 600 + przesuniecie, 200 + spadanie, al_map_rgb(102, 205, 170));
		al_draw_rectangle(550 + przesuniecie, 150 + spadanie, 600 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);
	} 
	else {

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(102, 205, 170));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(102, 205, 170));
		al_draw_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(0, 0, 0), 2);


		al_draw_filled_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(102, 205, 170));
		al_draw_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(102, 205, 170));
		al_draw_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

	}
}

void L(obrot) {

	if (obrot % 4 == 0) {

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 200 + spadanie, 550 + przesuniecie, 250 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(500 + przesuniecie, 200 + spadanie, 550 + przesuniecie, 250 + spadanie, al_map_rgb(0, 0, 0), 2);
	} 
	else if (obrot % 4 == 1) {

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(500 + przesuniecie, 100 + spadanie, 550 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(550 + przesuniecie, 100 + spadanie, 600 + przesuniecie, 150 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(550 + przesuniecie, 100 + spadanie, 600 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);
	}
	else if (obrot % 4 == 2) {

		al_draw_filled_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 100 + spadanie, 500 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 200 + spadanie, 500 + przesuniecie, 250 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(400 + przesuniecie, 100 + spadanie, 450 + przesuniecie, 150 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(400 + przesuniecie, 100 + spadanie, 450 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);
	}

	else if (obrot % 4 == 3) {

		al_draw_filled_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(450 + przesuniecie, 150 + spadanie, 500 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(500 + przesuniecie, 150 + spadanie, 550 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(550 + przesuniecie, 150 + spadanie, 600 + przesuniecie, 200 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(550 + przesuniecie, 150 + spadanie, 600 + przesuniecie, 200 + spadanie, al_map_rgb(0, 0, 0), 2);

		al_draw_filled_rectangle(550 + przesuniecie, 100 + spadanie, 600 + przesuniecie, 150 + spadanie, al_map_rgb(219, 112, 147));
		al_draw_rectangle(550 + przesuniecie, 100 + spadanie, 600 + przesuniecie, 150 + spadanie, al_map_rgb(0, 0, 0), 2);
	}
}

void next(int nastepny) {
	

	switch (nastepny) {
	case 1: prosta(obrot);
		break;
	case 2: kwadrat(obrot);
		break;
	case 3: schody(obrot);
		break;
	case 4: piorun(obrot);
		break;
	case 5: L(obrot);
		break;
	}
}

int main() {

	init();

	ALLEGRO_DISPLAY* display = al_create_display(1700, 1200);
	ALLEGRO_FONT* font = al_load_ttf_font("C://Windows//WinSxS//amd64_microsoft-windows-font-truetype-calibri_31bf3856ad364e35_10.0.16299.15_none_0d92593f60e8ffa5//calibri.ttf", 24, 0);
	
	ALLEGRO_EVENT_QUEUE *event_queue = al_create_event_queue();

	al_set_window_title(display, "TETRIS");// tytu³ okna 
	al_register_event_source(event_queue, al_get_display_event_source(display));
	al_clear_to_color(al_map_rgb(220, 220, 220));

	
	//G£ÓWNE OKNO ROZGRYWKI
	al_draw_rectangle(50, 100, 950, 1100, al_map_rgb(0, 0, 255), 3);
	al_draw_text(font, al_map_rgb(255, 0, 0), 300, 50, ALLEGRO_ALIGN_CENTER, "TETRIS");
	al_draw_text(font, al_map_rgb(0, 0, 0), 1200, 100, ALLEGRO_ALIGN_CENTER, "PUNKTY");
	al_draw_text(font, al_map_rgb(0, 0, 0), 1200, 500, ALLEGRO_ALIGN_CENTER, "STEROWANIE:");

	al_draw_text(font, al_map_rgb(0, 0, 0), 1100, 550, ALLEGRO_ALIGN_LEFT, "W - Obrot figury o 90 stopni");
	al_draw_text(font, al_map_rgb(0, 0, 0), 1100, 575, ALLEGRO_ALIGN_LEFT, "S - Przyspieszenie spadania figury");
	al_draw_text(font, al_map_rgb(0, 0, 0), 1100, 600, ALLEGRO_ALIGN_LEFT, "A - Przesuniecie figury w lewo");
	al_draw_text(font, al_map_rgb(0, 0, 0), 1100, 625, ALLEGRO_ALIGN_LEFT, "D - Przesuniecie figury w prawo");
	

	ALLEGRO_KEYBOARD_STATE keyboard;
	ALLEGRO_EVENT_QUEUE *event_queue1 = al_create_event_queue();
	al_register_event_source(event_queue1, al_get_keyboard_event_source());
	

	const float FPS = 60.0;
	ALLEGRO_TIMER *timer = al_create_timer(1.0 / FPS);
	al_register_event_source(event_queue1, al_get_timer_event_source(timer));

	al_start_timer(timer);

	bool done = false;
	srand(time(NULL));
	int nastepny = rand() % 6;
	
	
		
		

		while (!done)
		{
			

			ALLEGRO_EVENT events;
			al_wait_for_event(event_queue1, &events);

			if ((events.type == ALLEGRO_EVENT_TIMER) && (spadanie <= 897)) {
				spadanie += 3;
				
			}
			else if ((events.keyboard.keycode == ALLEGRO_KEY_DOWN) && (spadanie <= 847)) {
				spadanie = 846;
				
			}
			else if (events.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
				
				break;
			}
			
			else if (events.type == ALLEGRO_EVENT_KEY_DOWN)
			{
				switch (events.keyboard.keycode)
				{

				case ALLEGRO_KEY_RIGHT:
					przesuniecie += 50;
					break;
				case ALLEGRO_KEY_LEFT:
					przesuniecie -= 50;
					break;
				case ALLEGRO_KEY_UP:
					obrot += 1;
					break;
				case ALLEGRO_KEY_ESCAPE:
					done = true;
					events.type == ALLEGRO_EVENT_DISPLAY_CLOSE;
					break;
				}
			}
			
			next(nastepny);
			al_flip_display();
			
			al_clear_to_color(al_map_rgb(220, 220, 220));
			

			//G£ÓWNE OKNO ROZGRYWKI
			al_draw_rectangle(50, 100, 950, 1100, al_map_rgb(0, 0, 255), 3);
			al_draw_text(font, al_map_rgb(255, 0, 0), 300, 50, ALLEGRO_ALIGN_CENTER, "TETRIS");
			al_draw_text(font, al_map_rgb(0, 0, 0), 1200, 100, ALLEGRO_ALIGN_CENTER, "PUNKTY");
			al_draw_text(font, al_map_rgb(0, 0, 0), 1200, 500, ALLEGRO_ALIGN_CENTER, "STEROWANIE:");

			al_draw_text(font, al_map_rgb(0, 0, 0), 1100, 550, ALLEGRO_ALIGN_LEFT, "W - Obrot figury o 90 stopni");
			al_draw_text(font, al_map_rgb(0, 0, 0), 1100, 575, ALLEGRO_ALIGN_LEFT, "S - Przyspieszenie spadania figury");
			al_draw_text(font, al_map_rgb(0, 0, 0), 1100, 600, ALLEGRO_ALIGN_LEFT, "< - Przesuniecie figury w lewo");
			al_draw_text(font, al_map_rgb(0, 0, 0), 1100, 625, ALLEGRO_ALIGN_LEFT, "> - Przesuniecie figury w prawo");


			
		}
		
	
	//prosta();
	//al_flip_display();
	//al_rest(2.0);

	al_destroy_display(display);
	al_destroy_font;

	al_destroy_event_queue(event_queue);
	//al_destroy_event_queue(event_queue1);
	//system("pause");
	return 0;
}
