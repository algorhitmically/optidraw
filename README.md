## General

This include will help you with map optimization.

### Required dependencies

• [Streamer](https://github.com/samp-incognito/samp-streamer-plugin)<br />
• [Model-Sizes-Plus](https://github.com/Crayder/Model-Sizes-Plus)<br />

### Methods

These are optimization methods that you can define before including optidraw:<br />

• METHOD_BOX<br />
• METHOD_SPHERE<br />

#### Use

#define CURRENT_METHOD your_method<br />

### Tips

• Choose optimization method, but you don't have to if you want to use box method which is defined by default.<br />
• Include optidraw below streamer!<br />
• You can disable startup messages with: #define OD_DISABLE_STARTUP_MESSAGE<br />


