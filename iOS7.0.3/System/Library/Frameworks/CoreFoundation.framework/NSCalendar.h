/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:55 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@interface NSCalendar : NSObject <NSCopying, NSSecureCoding>
+(id)__ck_currentCalendar;
+(id)autoupdatingCurrentCalendar;
+(id)allocWithZone:(NSZoneRef)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)currentCalendar;
-(unsigned)__ck_unitOfDisambiguityFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)_dateOnlyComponentsForDate:(id)arg1 ;
-(id)_timeOnlyComponentsForDate:(id)arg1 ;
-(BOOL)date:(id)arg1 isSameDayAsDate:(id)arg2 ;
-(BOOL)date:(id)arg1 isSameYearAsDate:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)classForCoder;
-(unsigned long)_cfTypeID;
-(void)setFirstWeekday:(unsigned)arg1 ;
-(void)setMinimumDaysInFirstWeek:(unsigned)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned)arg1 ;
-(unsigned)ordinalityOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(id)_copyLocale;
-(id)_copyTimeZone;
-(void)_setGregorianStartDate:(id)arg1 ;
-(id)_gregorianStartDate;
-(id)eraSymbols;
-(id)weekdaySymbols;
-(id)shortWeekdaySymbols;
-(id)longEraSymbols;
-(id)veryShortMonthSymbols;
-(id)veryShortStandaloneMonthSymbols;
-(id)veryShortWeekdaySymbols;
-(id)standaloneWeekdaySymbols;
-(id)shortStandaloneWeekdaySymbols;
-(id)veryShortStandaloneWeekdaySymbols;
-(id)quarterSymbols;
-(id)shortQuarterSymbols;
-(id)standaloneQuarterSymbols;
-(id)shortStandaloneQuarterSymbols;
-(SCD_Struct_NS7)_minimumRangeOfUnit:(unsigned)arg1 ;
-(SCD_Struct_NS7)_maximumRangeOfUnit:(unsigned)arg1 ;
-(SCD_Struct_NS7)_rangeOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forAT:(double)arg3 ;
-(long)_ordinalityOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forAT:(double)arg3 ;
-(unsigned char)_rangeOfUnit:(unsigned)arg1 startTime:(double*)arg2 interval:(double*)arg3 forAT:(double)arg4 ;
-(unsigned char)_composeAbsoluteTime:(double*)arg1 :(const char*)arg2 :(void*)arg3 ;
-(unsigned char)_decomposeAbsoluteTime:(double)arg1 :(const char*)arg2 :(void*)arg3 ;
-(unsigned char)_addComponents:(double*)arg1 :(unsigned long)arg2 :(const char*)arg3 :(void*)arg4 ;
-(unsigned char)_diffComponents:(double)arg1 :(double)arg2 :(unsigned long)arg3 :(const char*)arg4 :(void*)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)calendarIdentifier;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned)arg3 ;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 ;
-(id)dateFromComponents:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)AMSymbol;
-(id)PMSymbol;
-(id)timeZone;
-(id)locale;
-(id)components:(unsigned)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned)arg4 ;
-(BOOL)rangeOfUnit:(unsigned)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(unsigned)firstWeekday;
-(unsigned)minimumDaysInFirstWeek;
-(NSRange)rangeOfUnit:(unsigned)arg1 inUnit:(unsigned)arg2 forDate:(id)arg3 ;
-(NSRange)maximumRangeOfUnit:(unsigned)arg1 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(id)monthSymbols;
-(id)shortMonthSymbols;
-(id)standaloneMonthSymbols;
-(id)shortStandaloneMonthSymbols;
@end
