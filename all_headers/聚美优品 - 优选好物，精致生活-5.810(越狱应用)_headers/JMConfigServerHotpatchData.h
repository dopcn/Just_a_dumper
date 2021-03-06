//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface JMConfigServerHotpatchData : NSObject <NSCoding>
{
    int _code;
    NSString *_patchID;
    NSString *_status;
    long long _size;
    NSString *_md5;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *patchID; // @synthesize patchID=_patchID;
@property(nonatomic) int code; // @synthesize code=_code;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)description;

@end

