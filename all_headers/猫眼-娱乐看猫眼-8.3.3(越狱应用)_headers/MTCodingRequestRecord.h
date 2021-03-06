//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MTRequestRecord-Protocol.h"
#import "NSCoding-Protocol.h"

@class MTResponse, NSString;

@interface MTCodingRequestRecord : NSObject <MTRequestRecord, NSCoding>
{
    NSString *_requestFingerPrint;
    MTResponse *_response;
}

@property(retain, nonatomic) MTResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSString *requestFingerPrint; // @synthesize requestFingerPrint=_requestFingerPrint;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

