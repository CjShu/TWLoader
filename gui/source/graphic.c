#include "graphic.h"

void pp2d_draw_texture_blend(size_t id, int x, int y, u32 color)
{
	pp2d_texture_select(id, x, y);
	pp2d_texture_blend(color);
	pp2d_texture_draw();		
}

void pp2d_draw_texture_scale(size_t id, int x, int y, float scaleX, float scaleY)
{
	pp2d_texture_select(id, x, y);
	pp2d_texture_scale(scaleX, scaleY);
	pp2d_texture_draw();
}

void pp2d_draw_texture_scale_blend(size_t id, int x, int y, float scaleX, float scaleY, u32 color)
{
	pp2d_texture_select(id, x, y);
	pp2d_texture_blend(color);
	pp2d_texture_scale(scaleX, scaleY);
	pp2d_texture_draw();		
}

void pp2d_draw_texture_part_blend(size_t id, int x, int y, int xbegin, int ybegin, int width, int height, u32 color)
{
	pp2d_texture_select_part(id, x, y, xbegin, ybegin, width, height);
	pp2d_texture_blend(color);
	pp2d_texture_draw();		
}

void pp2d_draw_texture_part_scale(size_t id, int x, int y, int xbegin, int ybegin, int width, int height, float scaleX, float scaleY)
{
	pp2d_texture_select_part(id, x, y, xbegin, ybegin, width, height);
	pp2d_texture_scale(scaleX, scaleY);
	pp2d_texture_draw();
}

void pp2d_draw_texture_part_scale_blend(size_t id, int x, int y, int xbegin, int ybegin, int width, int height, float scaleX, float scaleY, u32 color)
{
	pp2d_texture_select_part(id, x, y, xbegin, ybegin, width, height);
	pp2d_texture_blend(color);
	pp2d_texture_scale(scaleX, scaleY);
	pp2d_texture_draw();		
}