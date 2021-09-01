/*
 *  Copyright (C) 2015-2021 Garrett Brown
 *  Copyright (C) 2015-2021 Team Kodi
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSE.md for more information.
 */

#include "Filesystem.h"
#include "DirectoryUtils.h"
#include "FileUtils.h"

using namespace JOYSTICK;

bool CFilesystem::Initialize(void)
{
  return CFileUtils::Initialize() &&
         CDirectoryUtils::Initialize();
}

void CFilesystem::Deinitialize(void)
{
  CFileUtils::Deinitialize();
  CDirectoryUtils::Deinitialize();
}
