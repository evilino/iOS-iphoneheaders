/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:53 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WebGeolocationProvider <NSObject>
@required
-(void)setEnableHighAccuracy:(BOOL)arg1;
-(void)registerWebView:(id)arg1;
-(void)unregisterWebView:(id)arg1;
-(void)initializeGeolocationForWebView:(id)arg1 listener:(id)arg2;
-(id)lastPosition;
-(void)stopTrackingWebView:(id)arg1;

@end
