/*
 *  Copyright (C) 2015-2021 Garrett Brown
 *  Copyright (C) 2015-2021 Team Kodi
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#pragma once

#include "filesystem/IFile.h"

namespace JOYSTICK
{
  /*!
   * \brief Generic implementation of GetLength() through other IFile methods
   *
   * NOTE: Derived class must implement IFile::Seek() and IFile::GetPosition()
   */
  class CSeekableFile : public IFile
  {
  public:
    virtual ~CSeekableFile(void) { }

    /*!
     * \brief Determine the length by seeking to the end and getting the position
     */
    virtual int64_t GetLength(void) override;
  };
}
