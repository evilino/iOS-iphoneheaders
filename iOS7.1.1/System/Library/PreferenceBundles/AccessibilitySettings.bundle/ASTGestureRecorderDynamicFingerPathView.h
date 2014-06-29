/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:17 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/ASTGestureRecorderHelperView.h>

@class UIColor;

@interface ASTGestureRecorderDynamicFingerPathView : ASTGestureRecorderHelperView {

	unsigned long long _dynamicFingerPathIndex;
	UIColor* _backgroundGradientPatternColor;

}

@property (assign,nonatomic) unsigned long long dynamicFingerPathIndex;              //@synthesize dynamicFingerPathIndex=_dynamicFingerPathIndex - In the implementation block
@property (nonatomic,retain) UIColor * backgroundGradientPatternColor;               //@synthesize backgroundGradientPatternColor=_backgroundGradientPatternColor - In the implementation block
-(void)setDynamicFingerPathIndex:(unsigned long long)arg1 ;
-(id)backgroundGradientPatternColor;
-(unsigned long long)dynamicFingerPathIndex;
-(void)setBackgroundGradientPatternColor:(id)arg1 ;
-(void)_replacedStyleProvider:(id)arg1 withStyleProvider:(id)arg2 ;
-(void)_replacedDataSource:(id)arg1 withDataSource:(id)arg2 ;
-(void)fingerPathDidChange;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)_commonInit;
@end
