//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface AMASSCircumbusDetailData : NSObject <NSCoding, NSCopying>
{
    NSString *_linekey;
    NSString *_alia;
    struct ANPoint _platform;
    NSString *_lineid;
    NSString *_linename;
    long long _platformIndex;
}

@property(nonatomic) long long platformIndex; // @synthesize platformIndex=_platformIndex;
@property(copy, nonatomic) NSString *linename; // @synthesize linename=_linename;
@property(copy, nonatomic) NSString *lineid; // @synthesize lineid=_lineid;
@property(nonatomic) struct ANPoint platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *alia; // @synthesize alia=_alia;
@property(copy, nonatomic) NSString *linekey; // @synthesize linekey=_linekey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

