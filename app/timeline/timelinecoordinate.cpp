/***

  Olive - Non-Linear Video Editor
  Copyright (C) 2019 Olive Team

  This program is free and open source software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.

***/

#include "timelinecoordinate.h"
#include <iostream>

TimelineCoordinate::TimelineCoordinate() :
  track_(Timeline::kTrackTypeNone, 0)
{
}

TimelineCoordinate::TimelineCoordinate(const rational &frame, const TrackReference &track) :
  frame_(frame),
  track_(track)
{
}

TimelineCoordinate::TimelineCoordinate(const rational &frame, const Timeline::TrackType &track_type, const int &track_index) :
  frame_(frame),
  track_(track_type, track_index)
{
}

const rational &TimelineCoordinate::GetFrame() const
{
  return frame_;
}

const TrackReference &TimelineCoordinate::GetTrack() const
{
  return track_;
}

void TimelineCoordinate::SetFrame(const rational &frame)
{
  frame_ = frame;
}

void TimelineCoordinate::SetTrack(const TrackReference &track)
{
  track_ = track;
}

void TimelineCoordinate::SetCoordinate(const TrackReference &TimelineCoordinate) {
	coordinate_ = coordinate;
}
