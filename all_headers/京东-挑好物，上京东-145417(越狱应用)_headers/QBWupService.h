//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QBWupTransfer;

@interface QBWupService : NSObject
{
    QBWupTransfer *_transfer;
    NSString *_servantName;
}

+ (id)service;
@property(readonly, nonatomic) NSString *servantName; // @synthesize servantName=_servantName;
- (void).cxx_destruct;
- (id)invocation:(id)arg1 parameter:(id)arg2 completeHandle:(CDUnknownBlockType)arg3;
- (id)encodePackageWithFuncName:(id)arg1 parameter:(id)arg2;
- (id)initWithServant:(id)arg1;
- (id)init;

@end

