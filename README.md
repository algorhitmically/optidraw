## General

This include will help you with map optimization.

### Required dependencies

• [Streamer](https://github.com/samp-incognito/samp-streamer-plugin)<br />
• [Model-Sizes-Plus](https://github.com/Crayder/Model-Sizes-Plus)<br /> 
  OR<br /> 
• [Model-Sizes-SQL](https://github.com/algorhitmically/modelsizes-sql)<br />

### Methods

These are optimization methods that you can choose to define before including optidraw:<br />

• METHOD_BOX<br />
• METHOD_SPHERE<br />

#### Use

#define OD_METHOD your_method<br />

### Tips

• Choose optimization method. Example: #define OD_METHOD METHOD_BOX<br />
• Include optidraw below streamer!<br />
• You can disable startup messages with: #define OD_DISABLE_STARTUP_MESSAGE<br />
• You can disable static objects with: #define OD_DISABLE_STATIC_OBJECTS


