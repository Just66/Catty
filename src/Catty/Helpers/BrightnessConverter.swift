/**
 *  Copyright (C) 2010-2017 The Catrobat Team
 *  (http://developer.catrobat.org/credits)
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Affero General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  An additional term exception under section 7 of the GNU Affero
 *  General Public License, version 3, is available at
 *  (http://developer.catrobat.org/license_additional_term)
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU Affero General Public License for more details.
 *
 *  You should have received a copy of the GNU Affero General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 */


// TODO: Move defines to external file and wrap in sensorDefines struct!
struct kBrightnessDefines {
    static let initValueIntern:CGFloat    = 1.0
    static let minValueIntern:CGFloat     = 0.0
    static let maxValueIntern:CGFloat     = 1.0
}

class BrightnessConverter: Convert2Android {
    
    static let init_value: CGFloat = kBrightnessDefines.initValueIntern
    static let min_value: CGFloat = kBrightnessDefines.minValueIntern
    static let max_value: CGFloat = kBrightnessDefines.maxValueIntern
    
    class func convertValueToAndroid(ios_value: CGFloat) -> CGFloat {
        var android_value:CGFloat
        
        android_value = 100.0 * ios_value
        
        print("Converting brightness from ios_value = \(ios_value) to android value = \(android_value).")
        return ios_value;
    }
    
}