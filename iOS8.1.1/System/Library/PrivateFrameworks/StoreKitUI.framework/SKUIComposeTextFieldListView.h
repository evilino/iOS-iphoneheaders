/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@protocol SKUIComposeTextFieldListViewDelegate;
@class NSMutableArray, UIResponder;

@interface SKUIComposeTextFieldListView : UIView {

	id<SKUIComposeTextFieldListViewDelegate> _delegate;
	NSMutableArray* _fields;
	BOOL _isValid;
	long long _style;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeTextFieldListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIResponder * initialFirstResponder; 
-(void)dealloc;
-(void)setDelegate:(id<SKUIComposeTextFieldListViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(id<SKUIComposeTextFieldListViewDelegate>)delegate;
-(BOOL)isValid;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(double)height;
-(UIResponder *)initialFirstResponder;
-(id)textForFieldAtIndex:(unsigned long long)arg1 ;
-(long long)composeReviewStyle;
-(void)composeTextFieldValidityChanged:(id)arg1 ;
-(void)_updateValidity;
@end
