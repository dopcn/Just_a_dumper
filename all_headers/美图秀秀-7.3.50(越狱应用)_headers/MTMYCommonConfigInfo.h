//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class MTMYCommonConfigInfoData, NSString;

@interface MTMYCommonConfigInfo : NSObject <NSCoding>
{
    long long _code;
    NSString *_msg;
    MTMYCommonConfigInfoData *_data;
}

+ (id)defaultMapping;
@property(retain, nonatomic) MTMYCommonConfigInfoData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

