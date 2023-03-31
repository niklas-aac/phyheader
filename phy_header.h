/* -*- c++ -*- */
/*
 * Copyright 2023 
 * Author: 
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

#ifndef INCLUDED_MYMODULE_PHY_HEADER_H
#define INCLUDED_MYMODULE_PHY_HEADER_H

#include "/home/inets/Workspace/OOT_modules/gr-mymodule/include/gnuradio/mymodule/api.h"
#include <gnuradio/digital/packet_header_default.h>
#include <gnuadio/block.h>

namespace gr {
  namespace mymodule {

    /*!
     * \brief Customized PHY header (802.11ad compliant)
     * \ingroup mymodule
     *
     */
    class MYMODULE_API phy_header : virtual public digital::packet_header_default
    {
     public:
      typedef std::shared_ptr<phy_header> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of mymodule::phy_header.
       *
       * To avoid accidental use of raw pointers, mymodule::phy_header's
       * constructor is in a private implementation
       * class. mymodule::phy_header::make is the public interface for
       * creating new instances.
       */
      static sptr make();

     protected:
      phy_header();
    };

  } // namespace mymodule
} // namespace gr

#endif /* INCLUDED_MYMODULE_PHY_HEADER_H */