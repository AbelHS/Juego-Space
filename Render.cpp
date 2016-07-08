#include "SpaceShip.h"

/*
SpaceShip *ship;
ALLEGRO_BITMAP *shipImage = NULL;
	shipImage = al_load_bitmap("spaceship_by_arboris.png");
	al_convert_mask_to_alpha(shipImage, al_map_rgb(255, 0, 255));
	ship->Init(shipImage);
//prototypes
void __cdecl TakeLife();
// void TakeLife() __attribute__((cdecl));
void __cdecl ScorePoint();
// void ScorePoint() __attribute__((cdecl));
void ChangeState(int &state, int newState);


void __cdecl TakeLife()
{
	ship->LoseLife();
}

void __cdecl ScorePoint()
{
	ship->AddPoint();
}

void ChangeState(int &state, int newState)
{
	if(state ==TITLE)
	{}
	else if(state == PLAYING)
	{
		for(iter = objects.begin(); iter != objects.end(); ++iter)
		{
			if( (*iter)->GetID() != PLAYER && (*iter)->GetID() != MISC)
				(*iter)->SetAlive(false);
		}

		al_stop_sample_instance(songInstance);
	}
	else if(state == LOST)
	{}

	state = newState;

	if(state ==TITLE)
	{}
	else if(state == PLAYING)
	{
		ship->Init();
		al_play_sample_instance(songInstance);
	}
	else if(state == LOST)
	{}
}
*/
