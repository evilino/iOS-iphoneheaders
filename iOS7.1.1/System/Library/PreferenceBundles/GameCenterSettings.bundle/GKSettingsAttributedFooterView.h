/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Preferences/PSHeaderFooterView.h>

@class PSSpecifier, NSString, GKTextStyle, GKLabel;

@interface GKSettingsAttributedFooterView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	NSString* _text;
	GKTextStyle* _textStyle;
	GKLabel* _label;

}

@property (nonatomic,retain) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) GKTextStyle * textStyle;                       //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) GKTextStyle * defaultTextStyle; 
@property (nonatomic,retain) GKLabel * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PSSpecifier * specifier; 
-(id)attributedStringForString:(id)arg1 ;
-(id)specifier;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)textStyle;
-(id)defaultTextStyle;
-(void)setTextStyle:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end
