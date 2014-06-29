/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:49 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class NSSet, UIColor, NSDictionary, NSString, UIImage;

@interface UINavigationButton : UIButton {

	NSSet* _possibleTitles;
	int _style;
	long long _barStyle;
	UIColor* _navigationBarTintColor;
	CGSize _boundsAdjustment;
	id _appearanceStorage;
	NSSet* _possibleSystemItems;
	unsigned _size : 2;
	unsigned _wantsLetterpressContent : 1;
	bool _createdByBarButtonItem;
	bool _isFontScaleInvalid;
	bool _wantsBlendModeForAccessibilityBackgrounds;
	double _minimumWidth;
	double _maximumWidth;
	long long _buttonItemStyle;
	NSDictionary* _stylesForSizingTitles;
	double _fontScaleAdjustment;
	Class _appearanceGuideClass;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) long long barStyle;                                                                                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) int style;                                                                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int controlSize; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (assign,nonatomic) double minimumWidth;                                                                                                //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                                                                                //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;                                                       //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (assign,setter=_setButtonItemStyle:,nonatomic) long long _buttonItemStyle;                                                             //@synthesize buttonItemStyle=_buttonItemStyle - In the implementation block
@property (setter=_setStylesForSizingTitles:,nonatomic,copy) NSDictionary * _stylesForSizingTitles;                                              //@synthesize stylesForSizingTitles=_stylesForSizingTitles - In the implementation block
@property (assign,setter=_setFontScaleAdjustment:,nonatomic) double _fontScaleAdjustment;                                                        //@synthesize fontScaleAdjustment=_fontScaleAdjustment - In the implementation block
@property (assign,setter=_setFontScaleInvalid:,nonatomic) bool _isFontScaleInvalid;                                                              //@synthesize isFontScaleInvalid=_isFontScaleInvalid - In the implementation block
@property (assign,setter=_setCreatedByBarButtonItem:,nonatomic) bool _createdByBarButtonItem;                                                    //@synthesize createdByBarButtonItem=_createdByBarButtonItem - In the implementation block
@property (assign,setter=_setWantsBlendModeForAccessibilityBackgrounds:,nonatomic) bool _wantsBlendModeForAccessibilityBackgrounds;              //@synthesize wantsBlendModeForAccessibilityBackgrounds=_wantsBlendModeForAccessibilityBackgrounds - In the implementation block
+(id)defaultFont;
+(void)_resetRenderingModesForBackgroundImageView:(id)arg1 inBarStyle:(long long)arg2 isEnabled:(bool)arg3 withAccessibilityBackground:(bool)arg4 wantsBlendModeForAccessibilityBackgrounds:(bool)arg5 ;
-(void)_prepareToAppearInNavigationItemOnLeft:(bool)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(bool)_contentHuggingDefault_isUsuallyFixedHeight;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(int)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)image;
-(int)style;
-(bool)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(Class)_appearanceGuideClass;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)setEnabled:(bool)arg1 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3 ;
-(id)_scriptingInfo;
-(void)_setFontScaleAdjustment:(double)arg1 ;
-(void)_updateStyle;
-(id)initWithTitle:(id)arg1 ;
-(id)_appearanceStorage;
-(void)_applyBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)title;
-(double)_fontScaleAdjustment;
-(bool)_wantsAccessibilityButtonShapes;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(void)setControlSize:(int)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)setNavigationBarTintColor:(id)arg1 ;
-(void)_UIAppearance_setTintColor:(id)arg1 ;
-(long long)barStyle;
-(bool)contentsEqualTo:(id)arg1 withStyle:(int)arg2 ;
-(void)_setTintColor:(id)arg1 ;
-(bool)_showsAccessibilityBackgroundWhenEnabled;
-(void)_setWantsBlendModeForAccessibilityBackgrounds:(bool)arg1 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(bool)_hasBaselineAlignedAbsoluteVerticalPosition:(out double*)arg1 withinNavBar:(id)arg2 forSize:(CGSize)arg3 ;
-(double)_backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(bool)_wantsBlendModeForAccessibilityBackgrounds;
-(id)_defaultTitleColorForState:(unsigned long long)arg1 ;
-(CGSize)_defaultTitleShadowOffsetForState:(unsigned long long)arg1 ;
-(void)_setFrame:(CGRect)arg1 deferLayout:(bool)arg2 ;
-(void)_updateTitleForLetterpress;
-(id)_defaultTitleShadowColorForState:(unsigned long long)arg1 ;
-(void)_updateShadowOffsetWithAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(long long)_barButtonItemStyle;
-(id)_tintColor;
-(id)_customOrAccessibilityBackgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 isMini:(bool)arg3 ;
-(UIEdgeInsets)_buttonTitleEdgeInsets;
-(void)_updateContentInsets;
-(id)_adjustedDefaultTitleFont;
-(void)_updateTitleColorsForState:(unsigned long long)arg1 ;
-(void)_setTitleFrozen:(bool)arg1 ;
-(id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 possibleSystemItems:(id)arg6 tintColor:(id)arg7 applyBezel:(bool)arg8 forButtonItemStyle:(long long)arg9 ;
-(id)initWithValue:(id)arg1 width:(double)arg2 style:(int)arg3 barStyle:(long long)arg4 possibleTitles:(id)arg5 tintColor:(id)arg6 ;
-(void)setHighlighted:(bool)arg1 ;
-(void)_adjustBounds;
-(int)controlSize;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4 ;
-(void)_UIAppearance_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(void)_setWantsLetterpressContent;
-(void)_sendSetNeedsLayoutToSuperviewOnTitleAnimationCompletionIfNecessary;
-(UIEdgeInsets)_pathTitleEdgeInsets;
-(UIEdgeInsets)_pathImageEdgeInsets;
-(id)initWithTitle:(id)arg1 style:(int)arg2 ;
-(id)initWithTitle:(id)arg1 possibleTitles:(id)arg2 style:(int)arg3 ;
-(id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 applyBezel:(bool)arg4 forBarStyle:(long long)arg5 buttonItemStyle:(long long)arg6 ;
-(id)initWithImage:(id)arg1 width:(double)arg2 style:(int)arg3 ;
-(id)initWithImage:(id)arg1 style:(int)arg2 ;
-(bool)_isModernButton;
-(void)_setBoundsAdjustment:(CGSize)arg1 ;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(id)_backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2 ;
-(id)_titleTextAttributesForState:(unsigned long long)arg1 ;
-(void)_UIAppearance_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3 ;
-(UIOffset)_titlePositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonTitlePositionAdjustment:(UIOffset)arg1 forBarMetrics:(long long)arg2 ;
-(void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(double)minimumWidth;
-(double)maximumWidth;
-(long long)_buttonItemStyle;
-(void)_setButtonItemStyle:(long long)arg1 ;
-(id)_stylesForSizingTitles;
-(void)_setStylesForSizingTitles:(id)arg1 ;
-(bool)_createdByBarButtonItem;
-(void)_setCreatedByBarButtonItem:(bool)arg1 ;
-(bool)_isFontScaleInvalid;
-(void)_setFontScaleInvalid:(bool)arg1 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
@end
