/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:25:41 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
@interface AssistiveTouchHelper : NSObject
+(void)initializeMonitoring;
-(void)_sendKeyboardStatusUpdate:(CGRect)arg1 window:(id)arg2 ;
-(void)installMediaCategoriesAndValidate;
-(void)installiPodUICategoriesAndValidate;
-(void)installKeyboardListener;
-(void)installMediaControlsListener;
-(void)_handleMediaPlaybackEnded;
-(id)init;
-(void)enable;
@end
