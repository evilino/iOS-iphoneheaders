/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:06:18 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface IDSDServiceController : NSObject {

	NSMutableDictionary* _services;

}

@property (nonatomic,readonly) NSArray * allServices; 
+(id)sharedInstance;
-(id)serviceWithIdentifier:(id)arg1 ;
-(id)serviceWithPushTopic:(id)arg1 ;
-(void)_loadServices;
-(void)_loadServiceWithDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)allServices;
-(id)serviceWithName:(id)arg1 ;
@end
