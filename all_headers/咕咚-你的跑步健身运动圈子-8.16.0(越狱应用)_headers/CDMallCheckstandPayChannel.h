//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface CDMallCheckstandPayChannel : NSObject <NSCoding, NSCopying>
{
    NSNumber *_channelID;
    NSString *_channelName;
    NSString *_channelIcon;
    NSString *_channelRightIcon;
    NSString *_channelDesc;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *channelDesc; // @synthesize channelDesc=_channelDesc;
@property(retain, nonatomic) NSString *channelRightIcon; // @synthesize channelRightIcon=_channelRightIcon;
@property(retain, nonatomic) NSString *channelIcon; // @synthesize channelIcon=_channelIcon;
@property(retain, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(retain, nonatomic) NSNumber *channelID; // @synthesize channelID=_channelID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

