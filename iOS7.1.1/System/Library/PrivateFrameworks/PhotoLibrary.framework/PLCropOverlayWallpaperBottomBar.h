/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:27 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class PLWallpaperButton, _UILegibilityLabel, UIView, _UIBackdropView;

@interface PLCropOverlayWallpaperBottomBar : UIView {

	bool _motionToggleHidden;
	bool _shouldOnlyShowLockScreenButton;
	bool _shouldOnlyShowHomeScreenButton;
	PLWallpaperButton* _doCancelButton;
	PLWallpaperButton* _doSetButton;
	PLWallpaperButton* _doSetHomeScreenButton;
	PLWallpaperButton* _doSetLockScreenButton;
	PLWallpaperButton* _doSetBothScreenButton;
	PLWallpaperButton* _motionToggle;
	_UILegibilityLabel* _titleLabel;
	UIView* _separatorLine;
	_UIBackdropView* _backdropView;
	double _maxToggleWidth;

}

@property (nonatomic,readonly) PLWallpaperButton * doCancelButton;                     //@synthesize doCancelButton=_doCancelButton - In the implementation block
@property (nonatomic,readonly) PLWallpaperButton * doSetButton;                        //@synthesize doSetButton=_doSetButton - In the implementation block
@property (nonatomic,readonly) PLWallpaperButton * doSetHomeScreenButton;              //@synthesize doSetHomeScreenButton=_doSetHomeScreenButton - In the implementation block
@property (nonatomic,readonly) PLWallpaperButton * doSetLockScreenButton;              //@synthesize doSetLockScreenButton=_doSetLockScreenButton - In the implementation block
@property (nonatomic,readonly) PLWallpaperButton * doSetBothScreenButton;              //@synthesize doSetBothScreenButton=_doSetBothScreenButton - In the implementation block
@property (nonatomic,readonly) PLWallpaperButton * motionToggle;                       //@synthesize motionToggle=_motionToggle - In the implementation block
@property (assign,nonatomic) bool motionToggleHidden;                                  //@synthesize motionToggleHidden=_motionToggleHidden - In the implementation block
@property (assign,nonatomic) bool shouldOnlyShowLockScreenButton;                      //@synthesize shouldOnlyShowLockScreenButton=_shouldOnlyShowLockScreenButton - In the implementation block
@property (assign,nonatomic) bool shouldOnlyShowHomeScreenButton;                      //@synthesize shouldOnlyShowHomeScreenButton=_shouldOnlyShowHomeScreenButton - In the implementation block
@property (nonatomic,retain) _UILegibilityLabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                                   //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                           //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) double maxToggleWidth;                                    //@synthesize maxToggleWidth=_maxToggleWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(id)titleLabel;
-(void)setTitleLabel:(id)arg1 ;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
-(void)updateForChangedSettings:(id)arg1 ;
-(id)doCancelButton;
-(id)doSetHomeScreenButton;
-(id)doSetLockScreenButton;
-(id)doSetBothScreenButton;
-(id)motionToggle;
-(id)doSetButton;
-(void)setShouldOnlyShowHomeScreenButton:(bool)arg1 ;
-(void)setShouldOnlyShowLockScreenButton:(bool)arg1 ;
-(void)setMotionToggleHidden:(bool)arg1 ;
-(bool)motionToggleHidden;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
-(double)widthForToggleText;
-(void)setMaxToggleWidth:(double)arg1 ;
-(void)_commonPLCropOverlayWallpaperBottomBarInitialization;
-(void)_layoutSubviewsPad;
-(void)_layoutSubviewsPhone;
-(id)separatorLine;
-(CGSize)_sizeForString:(id)arg1 ;
-(bool)shouldOnlyShowLockScreenButton;
-(bool)shouldOnlyShowHomeScreenButton;
-(void)setSeparatorLine:(id)arg1 ;
-(double)maxToggleWidth;
@end
