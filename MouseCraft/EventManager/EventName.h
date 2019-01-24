#pragma once

// Enumerated type used for indexing and referencing events
enum EventName {
    PLAY_SONG,  // used to trigger a BGM track to play
    PLAY_SOUND, // used to trigger a Sound Effect
	JOYSTICK,   // joystick/mouse movement/change
	BUTTON_DOWN,// on button down
	BUTTON_UP   // on button up
};
