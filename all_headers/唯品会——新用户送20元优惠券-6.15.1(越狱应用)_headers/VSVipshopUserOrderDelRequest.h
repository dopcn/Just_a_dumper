//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSRequest.h"

@class NSString;

@interface VSVipshopUserOrderDelRequest : VSRequest
{
    NSString *_orderSn;
}

@property(copy, nonatomic) NSString *orderSn; // @synthesize orderSn=_orderSn;
- (void).cxx_destruct;
- (Class)responseClass;
- (void)buildParameters:(id)arg1;
- (id)init;

@end

