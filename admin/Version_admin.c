/* vim: set expandtab ts=4 sw=4: */
/*
 * You may redistribute this program and/or modify it under the terms of
 * the GNU General Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "admin/Admin.h"
#include "benc/String.h"
#include "benc/Dict.h"
#include "benc/Int.h"
#include "util/version/Version.h"

static void getVersion(Dict* input, void* vadmin, String* txid)
{
    Dict d = Dict_CONST(String_CONST("q"), String_OBJ(String_CONST("pong")), NULL);
    Admin_sendMessage(&d, txid, (struct Admin*) vadmin);
}

void Version_admin_register(struct Admin* admin)
{
  Admin_registerFunction("Version_getVersion", getVersion, admin, false, NULL, admin);
}
