/*
 * THIS SOFTWARE IS PROVIDED BY THE AUTHORS ''AS IS'' AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL THE AUTHORS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
Contributors:
	- algorhitmically

Thanks to:
	- Incognito - streamer plugin.
	- Abagail and Crayder - modelsizes include.

Required plugins:
	- Streamer
*/

/*
	 ________  __    __  ________  _______   __      __
	/        |/  \  /  |/        |/       \ /  \    /  |
	$$$$$$$$/ $$  \ $$ |$$$$$$$$/ $$$$$$$  |$$  \  /$$/
	$$ |__    $$$  \$$ |   $$ |   $$ |__$$ | $$  \/$$/
	$$    |   $$$$  $$ |   $$ |   $$    $$<   $$  $$/
	$$$$$/    $$ $$ $$ |   $$ |   $$$$$$$  |   $$$$/
	$$ |_____ $$ |$$$$ |   $$ |   $$ |  $$ |    $$ |
	$$       |$$ | $$$ |   $$ |   $$ |  $$ |    $$ |
	$$$$$$$$/ $$/   $$/    $$/    $$/   $$/     $$/

*/
#define _optidraw_included

#define METHOD_BOX (0)
#define METHOD_SPHERE (1)

#if !defined CURRENT_METHOD
	#define CURRENT_METHOD METHOD_BOX
#endif

#include <a_samp>

#tryinclude "..\modelsizes"
#tryinclude "modelsizes"
#tryinclude <modelsizes>

#if !defined GetModelColDimensions
	#error Optidraw: modelsizes doesn't have required functions or it's not loaded.
#endif

#if !defined _streamer_included
	#tryinclude <streamer>
	#tryinclude "streamer"
	#tryinclude "..\streamer"
#endif

#if !defined _streamer_included
	#error Optidraw: Cannot load streamer.
#endif

#include "od_impl"
#include "od_hooks"