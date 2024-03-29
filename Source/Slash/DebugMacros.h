#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if (GetWorld()) { DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true); }
#define DRAW_SPHERE_SINGLE_FRAME(Location) if (GetWorld()) { DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, false, -1.f); }
#define DRAW_LINE(Start, End) if (GetWorld()) { DrawDebugLine(GetWorld(), Start, End, FColor::Red, true, -1.f, 0, 1.f); }
#define DRAW_LINE_SINGLE_FRAME(Start, End) if (GetWorld()) { DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, -1.f, 0, 1.f); }
#define DRAW_POINT(Location) if (GetWorld()) { DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true, -1.f); }
#define DRAW_POINT_SINGLE_FRAME(Location) if (GetWorld()) { DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, false, -1.f); }
#define DRAW_VECTOR(Start, End) if (GetWorld()) \
	{ \
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, true, -1.f, 0, 1.f); \
		DrawDebugPoint(GetWorld(), End, 15.f, FColor::Red, true, -1.f); \
	}
#define DRAW_VECTOR_SINGLE_FRAME(Start, End) if (GetWorld()) \
	{ \
		DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, -1.f, 0, 1.f); \
		DrawDebugPoint(GetWorld(), End, 15.f, FColor::Red, false, -1.f); \
	} 
