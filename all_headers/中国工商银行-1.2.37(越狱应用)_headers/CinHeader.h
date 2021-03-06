//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSData, NSMutableData;

@interface CinHeader : NSObject <NSCoding>
{
    int _type;
    unsigned short _valueLength;
    NSMutableData *_valueData;
}

+ (id)headerOfType:(int)arg1 andStringValue:(id)arg2;
+ (id)headerOfType:(int)arg1 andLongValue:(long long)arg2;
+ (id)headerOfType:(int)arg1 andValue:(id)arg2;
+ (id)headerOfType:(int)arg1 andHexStringValue:(id)arg2;
+ (id)headerOfType:(int)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSData *Value; // @synthesize Value=_valueData;
- (void)dealloc;
- (void)appendData:(const char *)arg1 dataLength:(long long)arg2;
- (void)mallocData:(long long)arg1;
- (int)getType;
- (_Bool)isID:(unsigned char)arg1;
- (_Bool)isType:(int)arg1;
- (id)toString;
- (id)description;
- (id)getRestrictedStringValue;
- (id)getHexString;
- (id)getString;
- (id)getDateValue;
- (double)doubleValue;
- (long long)getInt64;
- (id)getValue;
- (unsigned short)getLength;
- (void)newValue:(long long)arg1;
- (id)initWith:(int)arg1 andLongValue:(long long)arg2;
- (id)initWith:(int)arg1 andStringValue:(id)arg2;
- (id)initWith:(int)arg1 andHexStringValue:(id)arg2;
- (id)initWith:(int)arg1 andValue:(id)arg2;
- (id)initWith:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

