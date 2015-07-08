#if !defined(HANDMADE_H)

/*
	TODO: Services that the platform layer provides to the game 
*/

/*
	NOTE: Services that the game provedes to the platform layer.
*/

// FOUR THINGS - timing, Controller/keyboard input, bitmap buffer to use, sound buffer to use

// TODO: In the future, rendering _specifically_ will become a three-tiered abstraction!!
struct game_offscreen_buffer
{
	// NOTE: Pixels are always 32-bis wide, Memory Order BB GG RR XX
	void *Memory;
	int Width;
	int Height;
	int Pitch;
};

struct game_sound_output_buffer
{
	int SamplesPerSecond;
	int SampleCount;
	int16 *Samples;
};
internal void GameUpdateAndRender(game_offscreen_buffer *Buffer, int BlueOffset, int GreenOffset,
								  game_sound_output_buffer *SoundBuffer, int ToneHz);

#define HANDMADE_H
#endif