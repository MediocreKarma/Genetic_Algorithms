#pragma once
#include "Graph.h"
#include "Nod_2D.h"
#include "Common.h"
#include <math.h>

struct ATT_Graph : public Graph {
	std::vector<Nod_2D> towns;

	int getNrCities() const;
	long long int distance(int i, int j) const;
};

void ATTReadInput(std::ifstream& fin, ATT_Graph& G);