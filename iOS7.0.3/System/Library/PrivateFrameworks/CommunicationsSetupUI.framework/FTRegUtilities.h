/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface FTRegUtilities : NSObject
+(id)serviceWithType:(int)arg1 ;
+(id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3 ;
+(id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2 ;
+(void)changePasswordControllerDidCancel:(id)arg1 ;
+(void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
+(void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2 ;
@end
