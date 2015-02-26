/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysDictionary.h>

@class NSKnownKeysMappingStrategy;

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {

	int _cd_rc;
	int _count;
	NSKnownKeysMappingStrategy* _keySearch;
	id _values[0];

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)initWithCoder:(id)arg1 ;
+(id)alloc;
+(id)init;
+(id)initWithDictionary:(id)arg1 ;
+(id)initWithCapacity:(unsigned)arg1 ;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)initWithObjects:(id*)arg1 forKeys:(id*)arg2 count:(unsigned)arg3 ;
+(id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2 ;
+(id)initWithSearchStrategy:(id)arg1 ;
+(id)initForKeys:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(Class)classForArchiver;
-(const id*)knownKeyValuesPointer;
-(unsigned)_valueCountByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)_setValues:(id*)arg1 retain:(BOOL)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(void)_recount;
-(unsigned)_countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 forKeys:(BOOL)arg4 ;
-(void)getKeys:(id*)arg1 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)count;
-(void)removeAllObjects;
-(unsigned)retainCount;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(void)setValues:(id*)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(const id*)values;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)allValues;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)setValue:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)mapping;
-(id)valueAtIndex:(unsigned)arg1 ;
@end
