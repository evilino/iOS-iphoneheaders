/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardFoundation/_SBFVibrantTableViewCell.h>
#import <SpringBoard/SBModalLayoutCaching.h>

@class UILabel, UIImageView, NSString;

@interface SBTodayBulletinCell : _SBFVibrantTableViewCell <SBModalLayoutCaching> {

	UILabel* _label;
	UIImageView* _iconImageView;
	long long _layoutMode;

}

@property (assign,nonatomic) CGRect textRect; 
@property (nonatomic,copy) NSString * labelText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long layoutMode;                  //@synthesize layoutMode=_layoutMode - In the implementation block
+(double)interCellSpacingInLayoutMode:(long long)arg1 ;
+(id)defaultFontColor;
+(id)defaultFont;
+(id)defaultTextAttributes;
-(void)setLayoutMode:(long long)arg1 ;
-(void)setTextRect:(CGRect)arg1 ;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)labelText;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setIcon:(id)arg1 ;
-(CGRect)textRect;
-(long long)layoutMode;
@end

