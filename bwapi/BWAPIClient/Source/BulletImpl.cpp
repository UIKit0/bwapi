#include <BWAPI.h>
#include "GameImpl.h"
#include "BulletImpl.h"

namespace BWAPI
{
  BulletImpl::BulletImpl(int _index)
    : self( &(BWAPI::BWAPIClient.data->bullets[index]) )
    , index(_index)
  {
  }
}