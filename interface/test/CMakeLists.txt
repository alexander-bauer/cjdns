# You may redistribute this program and/or modify it under the terms of
# the GNU General Public License as published by the Free Software Foundation,
# either version 3 of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
set(Test_FILES
    UDPInterface_test.c
    UDPInterface_communication_test.c
    ICMP6Generator_test.c
    MultiInterface_test.c
)
set(Test_ROOT_FILES
    TUNInterface_ipv4_root_test.c
    TUNInterface_ipv6_root_test.c
)
set(Test_LIBRARIES
    cjdns-admin
    cjdns-admin-client
    cjdns-memory-canary
    cjdns-interface-pipeinterface
    cjdadmintest
    interface
)
include(${CMAKE_SOURCE_DIR}/cmake/modules/Test.cmake)
