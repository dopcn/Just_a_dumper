//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface NHSqlitePropertyColumnClass : NSObject
{
    _Bool _isNSDateProperyType;
    _Bool _isMapSuccess;
    NSString *_propertyName;
    NSString *_propertyType;
    NSString *_columnName;
    NSString *_columnType;
}

+ (id)getPropertyName:(struct objc_property *)arg1;
@property(readonly, nonatomic) _Bool isMapSuccess; // @synthesize isMapSuccess=_isMapSuccess;
@property(readonly, nonatomic) _Bool isNSDateProperyType; // @synthesize isNSDateProperyType=_isNSDateProperyType;
@property(readonly, copy, nonatomic) NSString *columnType; // @synthesize columnType=_columnType;
@property(readonly, copy, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
@property(readonly, copy, nonatomic) NSString *propertyType; // @synthesize propertyType=_propertyType;
@property(readonly, copy, nonatomic) NSString *propertyName; // @synthesize propertyName=_propertyName;
- (void).cxx_destruct;
- (id)columnTypeWithPropertyType:(id)arg1;
- (id)getPropertyType:(struct objc_property *)arg1;
- (id)initWithProperty:(struct objc_property *)arg1;

@end

