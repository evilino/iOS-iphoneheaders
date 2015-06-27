/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:04:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSSet, NSArray;

@interface IDSDServiceController : NSObject {

	NSMutableDictionary* _services;
	NSMutableDictionary* _servicesToNameMap;
	NSMutableDictionary* _servicesToTopicMap;
	NSSet* _allAdHocServices;

}

@property (nonatomic,readonly) NSArray * allServices; 
@property (nonatomic,retain,readonly) NSSet * allAdHocServices;                //@synthesize allAdHocServices=_allAdHocServices - In the implementation block
@property (nonatomic,retain,readonly) NSSet * allPrimaryServices; 
+(id)sharedInstance;
-(id)serviceWithPushTopic:(id)arg1 ;
-(id)serviceWithIdentifier:(id)arg1 ;
-(NSSet *)allPrimaryServices;
-(id)allServicesWithAdHocServiceType:(unsigned)arg1 ;
-(void)_loadServices;
-(void)_loadServiceWithDictionary:(id)arg1 ;
-(NSSet *)allAdHocServices;
-(void)dealloc;
-(id)init;
-(NSArray *)allServices;
-(id)serviceWithName:(id)arg1 ;
@end
