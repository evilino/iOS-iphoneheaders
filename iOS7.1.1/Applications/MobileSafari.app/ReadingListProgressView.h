/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:11 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView;

@interface ReadingListProgressView : UIButton {

	double _progress;
	BOOL _usesSmallVersion;
	UIImageView* _glasses;
	UIImageView* _track;
	UIImageView* _fill;

}

@property (assign,nonatomic) double progress;                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL usesSmallVersion;              //@synthesize usesSmallVersion=_usesSmallVersion - In the implementation block
-(id)initWithFrame:(CGRect)arg1 usesSmallVersion:(BOOL)arg2 ;
-(void)setUsesSmallVersion:(BOOL)arg1 ;
-(BOOL)usesSmallVersion;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setToolbarTintColor:(id)arg1 ;
-(CGPoint)pressFeedbackPosition;
-(double)progress;
@end
