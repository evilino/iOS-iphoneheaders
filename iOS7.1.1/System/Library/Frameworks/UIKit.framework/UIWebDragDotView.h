/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface UIWebDragDotView : UIView {

	UIColor* m_insertionPointColor;
	UIColor* m_selectionBarColor;
	UIImageView* m_dot;
	int m_orientation;
	CGRect m_stickFrame;
	CGRect m_dotFrame;

}

@property (assign,nonatomic) bool showsBall; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(bool)isPointedDown;
-(bool)isPointedUp;
-(bool)isPointedRight;
-(bool)isPointedLeft;
-(bool)isVertical;
-(id)initWithEdge:(CGRect)arg1 container:(id)arg2 orientation:(int)arg3 ;
-(void)setEdge:(CGRect)arg1 ;
-(void)setShowsBall:(bool)arg1 ;
-(CGRect)stickFrameForEdge:(CGRect)arg1 withOverlap:(double)arg2 ;
-(bool)showsBall;
@end

