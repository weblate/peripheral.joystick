/*
 *  Copyright (C) 2015-2021 Garrett Brown
 *  Copyright (C) 2015-2021 Team Kodi
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#pragma once

namespace JOYSTICK
{
  class CJoystick;

  class CJoystickUtils
  {
  public:
    /*!
     * \brief Check if joystick belongs to a wireless receiver that always
     *        reports a joystick attached, even though none is present
     */
    static bool IsGhostJoystick(const CJoystick& joystick);
  };
}
