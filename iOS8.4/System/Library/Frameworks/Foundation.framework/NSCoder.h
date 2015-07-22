/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSCoder : NSObject
-(void)safeEncodeUIColor:(id)arg1 forKey:(id)arg2 ;
-(void)encodeArrayOfConditionalObjects:(id)arg1 forKey:(id)arg2 ;
-(id)decodeArrayOfConditionalObjects:(Class)arg1 forKey:(id)arg2 ;
-(void)encodeSetOfConditionalObjects:(id)arg1 forKey:(id)arg2 ;
-(id)decodeSetOfConditionalObjects:(Class)arg1 forKey:(id)arg2 ;
-(id)safeDecodeObjectForKey:(id)arg1 expectedClass:(Class)arg2 ;
-(id)_safeDecodeContainerForKey:(id)arg1 containerClass:(Class)arg2 valueClass:(Class)arg3 ;
-(id)safeDecodeStringForKey:(id)arg1 ;
-(id)safeDecodeDateForKey:(id)arg1 ;
-(id)safeDecodeNumberForKey:(id)arg1 ;
-(id)safeDecodeArrayForKey:(id)arg1 valueClass:(Class)arg2 ;
-(id)safeDecodeSetForKey:(id)arg1 valueClass:(Class)arg2 ;
-(id)safeDecodeDictionaryForKey:(id)arg1 keyClass:(Class)arg2 valueClass:(Class)arg3 ;
-(void)encodeCMTime:(SCD_Struct_NS11)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS11)decodeCMTimeForKey:(id)arg1 ;
-(void)encodeCMTimeRange:(SCD_Struct_NS12)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS12)decodeCMTimeRangeForKey:(id)arg1 ;
-(void)encodeCMTimeMapping:(SCD_Struct_NS13)arg1 forKey:(id)arg2 ;
-(SCD_Struct_NS13)decodeCMTimeMappingForKey:(id)arg1 ;
-(id)_copyDecodedObjectForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGVector:(CGVector)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeCGRect:(CGRect)arg1 forKey:(id)arg2 ;
-(void)encodeCGAffineTransform:(CGAffineTransform)arg1 forKey:(id)arg2 ;
-(void)encodeUIEdgeInsets:(UIEdgeInsets)arg1 forKey:(id)arg2 ;
-(void)encodeUIOffset:(UIOffset)arg1 forKey:(id)arg2 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGVector)decodeCGVectorForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(CGRect)decodeCGRectForKey:(id)arg1 ;
-(CGAffineTransform)decodeCGAffineTransformForKey:(id)arg1 ;
-(UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)arg1 ;
-(UIOffset)decodeUIOffsetForKey:(id)arg1 ;
-(void)encodeTheme:(unsigned long long)arg1 ;
-(void)encodeTheme:(unsigned long long)arg1 forKey:(id)arg2 ;
-(unsigned long long)decodeTheme;
-(unsigned long long)decodeThemeForKey:(id)arg1 ;
-(void)CA_encodeCGFloatArray:(const double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(BOOL)CA_decodeCGFloatArray:(double*)arg1 count:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(BOOL)arg3 ;
-(id)CA_decodeObjectForKey:(id)arg1 ;
-(void)encodeCGPoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(void)encodeCGVector:(CGVector)arg1 forKey:(id)arg2 ;
-(void)encodeCGSize:(CGSize)arg1 forKey:(id)arg2 ;
-(CGPoint)decodeCGPointForKey:(id)arg1 ;
-(CGVector)decodeCGVectorForKey:(id)arg1 ;
-(CGSize)decodeCGSizeForKey:(id)arg1 ;
-(void)encodePoint:(CGPoint)arg1 forKey:(id)arg2 ;
-(CGPoint)decodePointForKey:(id)arg1 ;
-(CGSize)decodeSizeForKey:(id)arg1 ;
-(void)encodeSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)encodeRect:(CGRect)arg1 forKey:(id)arg2 ;
-(CGRect)decodeRectForKey:(id)arg1 ;
-(void)encodePoint:(CGPoint)arg1 ;
-(CGPoint)decodePoint;
-(void)encodeSize:(CGSize)arg1 ;
-(CGSize)decodeSize;
-(void)encodeRect:(CGRect)arg1 ;
-(CGRect)decodeRect;
-(id)allowedClasses;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)encodeRootObject:(id)arg1 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)setObjectZone:(NSZone*)arg1 ;
-(NSZone*)objectZone;
-(void)encodeBycopyObject:(id)arg1 ;
-(void)_validateAllowedClass:(Class)arg1 forKey:(id)arg2 allowingInvocations:(BOOL)arg3 ;
-(void)validateClassSupportsSecureCoding:(Class)arg1 ;
-(void)encodeByrefObject:(id)arg1 ;
-(void)encodeLong:(long long)arg1 forKey:(id)arg2 ;
-(long long)decodeLongForKey:(id)arg1 ;
-(void)setAllowedClasses:(id)arg1 ;
-(void)validateAllowedClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodePropertyListForKey:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(id)decodeObjectForKey:(id)arg1 ;
-(BOOL)decodeBoolForKey:(id)arg1 ;
-(BOOL)containsValueForKey:(id)arg1 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(unsigned)systemVersion;
-(int)decodeIntForKey:(id)arg1 ;
-(BOOL)allowsKeyedCoding;
-(long long)decodeIntegerForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 forKey:(id)arg2 ;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(id)decodeDataObject;
-(id)decodeObject;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)requiresSecureCoding;
-(void)encodeObject:(id)arg1 ;
@end
