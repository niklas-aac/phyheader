/* -*- c++ -*- */
/*
 * 
 * 
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MYMODULE_PHY_HEADER_IMPL_H
#define INCLUDED_MYMODULE_PHY_HEADER_IMPL_H

#include "/home/inets/Workspace/OOT_modules/gr-mymodule/include/gnuradio/mymodule/phy_header.h"
#include <boost/enable_shared_from_this.hpp>
#include <boost/crc.hpp>
#include <boost/cstdint.hpp>
#include <gnuradio/tags.h>
#include <gnuradio/digital/api.h>

namespace gr {
  namespace mymodule {

    class phy_header_impl : public phy_header
    {
     private:
      int get_bit(int byte, int index);

     public:
      phy_header_impl();
      ~phy_header_impl();

      bool header_formatter(long packet_len, unsigned char *out, const std::vector<tag_t> &tags);
      bool header_parser(const unsigned char *header, std::vector<tag_t> &tags);
    };

  } // namespace mymodule
} // namespace gr

#endif /* INCLUDED_MYMODULE_PHY_HEADER_IMPL_H */