/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoGlanceSettings/NGSInternalSettingsManager.h>

@protocol NGSSettingsManagerDelegate;
@interface NGSSettingsManager : NGSInternalSettingsManager {

	id<NGSSettingsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NGSSettingsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedSettingsManager;
-(void)loadSettings;
-(void)dealloc;
-(void)setDelegate:(id<NGSSettingsManagerDelegate>)arg1 ;
-(id)init;
-(id<NGSSettingsManagerDelegate>)delegate;
-(void)_handleLocaleChange:(id)arg1 ;
-(void)_updateSockPuppetGlances;
-(id)_fetchSockPuppetGlances;
@end
