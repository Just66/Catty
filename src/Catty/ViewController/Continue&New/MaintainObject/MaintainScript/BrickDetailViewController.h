/**
 *  Copyright (C) 2010-2014 The Catrobat Team
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

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, BrickDetailViewControllerState) {
    BrickDetailViewControllerStateNone = 0,
    BrickDetailViewControllerStateBrickUpdated,
    BrickDetailViewControllerStateDeleteScript,
    BrickDetailViewControllerStateDeleteBrick,
    BrickDetailViewControllerStateCopyBrick,
    BrickDetailViewControllerStateAnimateBrick,
    BrickDetailViewControllerStateEditFormula,
};

@class Brick;
@interface BrickDetailViewController : UIViewController
- (instancetype)initWithBrick:(Brick *)brick NS_DESIGNATED_INITIALIZER;
+ (BrickDetailViewController *)brickDetailViewController;

// Disallow init.
- (instancetype)init __attribute__((unavailable("init is not a supported initializer for this class.")));

//@property (weak, nonatomic) id<BrickDetailViewControllerDelegate> delegate;
@property (nonatomic, readonly) BrickDetailViewControllerState state;
@property (nonatomic, readonly) Brick *brick;

- (void)setBrick:(Brick *)brick;

@end
