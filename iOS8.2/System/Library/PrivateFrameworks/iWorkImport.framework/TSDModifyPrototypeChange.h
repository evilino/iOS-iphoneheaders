/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSDPrototypeChange.h>

@class TSSMutablePropertySet, TSSPropertyMap, TSDPropertySourceForModifyPrototypeChange, NSString;

@interface TSDModifyPrototypeChange : NSObject <TSDPrototypeChange> {

	id mPrototype;
	TSSMutablePropertySet* mChangedPropertySet;
	TSSPropertyMap* mChangedPropertyMapBeforeChange;
	TSSPropertyMap* mChangedPropertyMapAfterChange;
	TSDPropertySourceForModifyPrototypeChange* mPropertySourceBeforeChange;
	TSDPropertySourceForModifyPrototypeChange* mPropertySourceAfterChange;
	TSSMutablePropertySet* mPropertiesWithOldValuesRecordedButNotNewValues;

}

@property (retain,readonly) TSSMutablePropertySet * changedPropertySet; 
@property (retain,readonly) TSSPropertyMap * changedPropertyMapBeforeChange; 
@property (retain,readonly) TSSPropertyMap * changedPropertyMapAfterChange; 
@property (retain,readonly) TSSMutablePropertySet * i_propertiesWithOldValuesRecordedButNotNewValues; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) char prototypeIsBeingReplaced; 
@property (readonly) char prototypeIsBeingModified; 
@property (readonly) char prototypeIsBeingDeleted; 
@property (retain,readonly) id prototype; 
@property (retain,readonly) id replacement; 
@property (retain,readonly) id<TSSPropertySource> propertiesBeforeChange; 
@property (retain,readonly) id<TSSPropertySource> propertiesAfterChange; 
-(char)prototypeIsBeingDeleted;
-(char)prototypeIsBeingReplaced;
-(id)initModifyPrototypeChangeForPrototype:(id)arg1 ;
-(char)prototypeIsBeingModified;
-(TSSMutablePropertySet *)changedPropertySet;
-(TSSMutablePropertySet *)i_propertiesWithOldValuesRecordedButNotNewValues;
-(TSSPropertyMap *)changedPropertyMapBeforeChange;
-(TSSPropertyMap *)changedPropertyMapAfterChange;
-(id)prototype;
-(char)propertyIsChanging:(int)arg1 ;
-(char)propertiesAreChanging:(id)arg1 ;
-(id<TSSPropertySource>)propertiesBeforeChange;
-(id<TSSPropertySource>)propertiesAfterChange;
-(void)dealloc;
-(NSString *)description;
-(id)replacement;
@end

