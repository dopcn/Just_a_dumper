//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface MPCustomModulePreference : NSObject <NSCoding>
{
    NSNumber *_moduleId;
    NSString *_defaultValue;
    NSString *_readKey;
    id _value;
    NSString *_writeKey;
    long long _dataType;
    NSString *_location;
}

@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSString *writeKey; // @synthesize writeKey=_writeKey;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *readKey; // @synthesize readKey=_readKey;
@property(readonly, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(readonly, nonatomic) NSNumber *moduleId; // @synthesize moduleId=_moduleId;
- (void).cxx_destruct;
- (id)uuidWithNoDashes;
- (id)defaultValueForMacroPlaceholder:(id)arg1;
- (id)appBoyJSONStringFromDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 location:(id)arg2 moduleId:(id)arg3;

@end

