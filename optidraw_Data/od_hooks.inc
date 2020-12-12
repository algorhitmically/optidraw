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
	- Mergevos

Thanks to:
	- Incognito - streamer plugin.
	- Abagail and Crayder - modelsizes include.

Required plugins:
	- Streamer
*/

/*
	 __    __   ______    ______   __    __   ______
	/  |  /  | /      \  /      \ /  |  /  | /      \
	$$ |  $$ |/$$$$$$  |/$$$$$$  |$$ | /$$/ /$$$$$$  |
	$$ |__$$ |$$ |  $$ |$$ |  $$ |$$ |/$$/  $$ \__$$/
	$$    $$ |$$ |  $$ |$$ |  $$ |$$  $$<   $$      \
	$$$$$$$$ |$$ |  $$ |$$ |  $$ |$$$$$  \   $$$$$$  |
	$$ |  $$ |$$ \__$$ |$$ \__$$ |$$ |$$  \ /  \__$$ |
	$$ |  $$ |$$    $$/ $$    $$/ $$ | $$  |$$    $$/
	$$/   $$/  $$$$$$/   $$$$$$/  $$/   $$/  $$$$$$/

*/

#include <YSI_Coding\y_hooks>

hook OnScriptInit()
{
	Streamer_ToggleChunkStream(true);
	Streamer_SetChunkSize(STREAMER_TYPE_OBJECT, 250);
	Streamer_VisibleItems(STREAMER_TYPE_OBJECT, 975);
	Streamer_SetTickRate(25);
	#if !defined OD_DISABLE_STARTUP_MESSAGE
		print("==================================================");
		print("\t* OptiDraw loaded successfully * (12.12.2020.)");
		#if OD_METHOD
		print("\t* Current method: SPHERE");
		#else
		print("\t* Current method: BOX");
		#endif
		print("==================================================");
	#endif
	return Y_HOOKS_CONTINUE_RETURN_1;
}

hook function STREAMER_TAG_OBJECT:CreateDynamicObject(modelid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz, worldid = -1, interiorid = -1, playerid = -1, Float:streamdistance = 325.0, Float:drawdistance = 365.0, STREAMER_TAG_AREA:areaid = STREAMER_TAG_AREA:-1, priority = 0)
{
	new 
		STREAMER_TAG_OBJECT:od_objectid = continue(modelid, x, y, z, rx, ry, rz, worldid, interiorid, playerid, streamdistance, drawdistance, STREAMER_TAG_AREA:areaid, priority);
	Optidraw_DynamicObjectOptimize(od_objectid);
	return od_objectid;
}

hook function STREAMER_TAG_OBJECT:CreateDynamicObjectEx(modelid, Float:x, Float:y, Float:z, Float:rx, Float:ry, Float:rz, Float:streamdistance = STREAMER_OBJECT_SD, Float:drawdistance = STREAMER_OBJECT_DD, const worlds[], const interiors[], const players[], const STREAMER_TAG_AREA:areas[], priority = 0, maxworlds = sizeof worlds, maxinteriors = sizeof interiors, maxplayers = sizeof players, maxareas = sizeof areas)
{
	new 
		od_objectid = continue(modelid, x, y, z, rx, ry, rz, streamdistance, drawdistance, worlds, interiors, players, STREAMER_TAG_AREA:areas, priority, maxworlds, maxinteriors, maxplayers, maxareas);
	Optidraw_DynamicObjectOptimize(od_objectid);
	
	return od_objectid;
}
