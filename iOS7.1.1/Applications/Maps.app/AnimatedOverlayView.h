/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:00 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UITextField, UIView;

@interface AnimatedOverlayView : UIView {

	UITextField* _associatedTextField;
	UIView* _clippingView;
	UITextField* _textField;
	BOOL _isAnimating;

}

@property (nonatomic,retain) UITextField * associatedTextField;              //@synthesize associatedTextField=_associatedTextField - In the implementation block
@property (nonatomic,retain) UIView * clippingView;                          //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) UITextField * textField;                        //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                               //@synthesize isAnimating=_isAnimating - In the implementation block
-(void)setAssociatedTextField:(id)arg1 ;
-(void)orientationWillChangeToInterfaceOrientation:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 associatedTextField:(id)arg2 ;
-(id)clippingView;
-(void)setClippingView:(id)arg1 ;
-(id)associatedTextField;
-(void)setTextField:(id)arg1 ;
-(BOOL)isAnimating;
-(id)textField;
-(void).cxx_destruct;
-(void)setIsAnimating:(BOOL)arg1 ;
@end

