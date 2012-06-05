/*
**
** Copyright 2008, The Android Open Source Project
** Copyright 2012, Samsung Electronics Co. LTD
**
** Licensed under the Apache License, Version 2.0 (the "License");
** you may not use this file except in compliance with the License.
** You may obtain a copy of the License at
**
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS,
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
** See the License for the specific language governing permissions and
** limitations under the License.
*/

/*!
 * \file      MetadataConverter.h
 * \brief     header file for Metadata converter ( for camera hal2 implementation )
 * \author    Sungjoong Kang(sj3.kang@samsung.com)
 * \date      2012/05/31
 *
 * <b>Revision History: </b>
 * - 2012/05/31 : Sungjoong Kang(sj3.kang@samsung.com) \n
 *   Initial Release
 */

#ifndef METADATA_CONVERTER_H
#define METADATA_CONVERTER_H

#include <hardware/camera2.h>
#include <camera/Camera.h>
#include <camera/CameraParameters.h>

#include "system/camera_metadata.h"
#include "camera2_internal_metadata.h"


namespace android {


class MetadataConverter  {
public:
    MetadataConverter();
    ~MetadataConverter();

    status_t ToInternalCtl(camera_metadata_t * request, camera2_ctl_metadata_NEW_t * dst);
	status_t ToDynamicMetadata(camera2_ctl_metadata_NEW_t * metadata, camera_metadata_t * dst);

private:
    status_t CheckEntryTypeMismatch(camera_metadata_entry_t * entry, uint8_t type);	
    status_t CheckEntryTypeMismatch(camera_metadata_entry_t * entry, uint8_t type, size_t count);
  
};

}; // namespace android

#endif

