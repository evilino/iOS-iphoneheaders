/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:47 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBLockScreenBatteryChargingViewControllerDelegate;
@class SBLockScreenBatteryChargingView, NSTimer;

@interface SBLockScreenBatteryChargingViewController : UIViewController {

	SBLockScreenBatteryChargingView* _chargingView;
	NSTimer* _visibilityTimer;
	BOOL _displayDetailedCharge;
	int _chargePercentage;
	<SBLockScreenBatteryChargingViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic) <SBLockScreenBatteryChargingViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_batteryStatusChanged:(id)arg1 ;
-(void)_clearVisibilityTimer;
-(BOOL)batteryVisible;
-(id)chargingView;
-(void)showChargeLevelWithBatteryVisible:(BOOL)arg1 ;
-(void)_visibilityTimerFired:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)prepareForDismissal;
@end

