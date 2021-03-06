//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface CDVideoBroadcastLiveActivityBaseClass : NSObject <NSCoding, NSCopying>
{
    double _internalBaseClassIdentifier;
    NSString *_coverImg;
    NSArray *_rooms;
    NSString *_desc;
    NSString *_title;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSArray *rooms; // @synthesize rooms=_rooms;
@property(retain, nonatomic) NSString *coverImg; // @synthesize coverImg=_coverImg;
@property(nonatomic) double internalBaseClassIdentifier; // @synthesize internalBaseClassIdentifier=_internalBaseClassIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

