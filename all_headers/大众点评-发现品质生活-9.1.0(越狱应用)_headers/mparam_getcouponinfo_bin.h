//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVQueryParameter.h"

@class NSNumber, NSString;

@interface mparam_getcouponinfo_bin : NVQueryParameter
{
    NSString *_token;
    NSNumber *_shopid;
    NSString *_dpid;
}

@property(copy, nonatomic) NSString *dpid; // @synthesize dpid=_dpid;
@property(copy, nonatomic) NSNumber *shopid; // @synthesize shopid=_shopid;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

