//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface MQAREngineSDKVersionNumber : NSObject <NSCopying, NSSecureCoding>
{
    unsigned int _major;
    unsigned int _minor;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int minor; // @synthesize minor=_minor;
@property(readonly, nonatomic) unsigned int major; // @synthesize major=_major;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMajor:(unsigned int)arg1 minor:(unsigned int)arg2;

@end

