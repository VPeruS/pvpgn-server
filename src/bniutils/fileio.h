/*
	Copyright (C) 2000  Marco Ziech
	Copyright (C) 2000  Ross Combs (rocombs@cs.nmsu.edu)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
	*/
#ifndef JUST_NEED_TYPES
#ifndef INCLUDED_FILEIO_PROTOS
#define INCLUDED_FILEIO_PROTOS

#include <cstdint>
#include <cstdio>

namespace pvpgn
{

	namespace bni
	{

		extern void file_rpush(std::FILE *f);
		extern void file_rpop(void);
		extern void file_wpush(std::FILE *f);
		extern void file_wpop(void);

		extern std::uint8_t file_readb(void);
		extern std::uint16_t file_readw_le(void);
		extern std::uint16_t file_readw_be(void);
		extern std::uint32_t file_readd_le(void);
		extern std::uint32_t file_readd_be(void);
		extern int file_writeb(std::uint8_t u);
		extern int file_writew_le(std::uint16_t u);
		extern int file_writew_be(std::uint16_t u);
		extern int file_writed_le(std::uint32_t u);
		extern int file_writed_be(std::uint32_t u);

	}

}
#endif
#endif
