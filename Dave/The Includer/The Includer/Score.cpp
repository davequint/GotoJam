#include "Score.h"

Score::Score()
{
	_score = 0;
}

void Score::setScore(int puntos)
{
	_score += puntos;
}

int Score::getScore()
{
	return _score;
}
