/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:35:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFButton.h>

@class UILabel, _UIBackdropView;

@interface SBSUIWallpaperMotionButton : SBFButton {

	UILabel* _leftLabel;
	UILabel* _rightLabel;
	float _maxRightLabelWidth;
	_UIBackdropView* _backdropView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_updateForStateChange;
-(float)_maxRightLabelWidth;
-(id)_newBackdropView;
-(float)_labelHorizontalPadding;
-(float)_separationWidth;
@end
