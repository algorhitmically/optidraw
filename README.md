# samp-optidraw

[![algorhitmically](https://img.shields.io/badge/algorhitmically-optidraw-2f2f2f.svg?style=for-the-badge)](https://github.com/algorhitmically/optidraw)

This include will help you with map optimization along with streamer plugin.

## Installation

Simply install to your project:

```bash
sampctl package install algorhitmically/optidraw
```

Include in your code and begin using the library:

```c
#include <optidraw>
```

## Usage

### Methods

These are optimization methods that you can choose to define before including optidraw:<br />

• METHOD_BOX<br />
• METHOD_SPHERE<br />

```c
#define OD_METHOD your_method
```

### Tips

• Choose optimization method. Example: #define OD_METHOD METHOD_BOX<br />
• Include optidraw below streamer!<br />
• You can disable startup messages with: `#define OD_DISABLE_STARTUP_MESSAGE`<br />
• You can disable static objects with: `#define OD_DISABLE_STATIC_OBJECTS`

## Testing

To test, simply run the package:

```bash
sampctl package run
```
