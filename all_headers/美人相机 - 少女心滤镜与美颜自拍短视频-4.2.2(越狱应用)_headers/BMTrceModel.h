//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BMBaseObject.h"

@class NSString;

@interface BMTrceModel : BMBaseObject
{
    long long _refundOrderId;
    NSString *_remark;
    long long _gmtCreated;
}

@property(nonatomic) long long gmtCreated; // @synthesize gmtCreated=_gmtCreated;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) long long refundOrderId; // @synthesize refundOrderId=_refundOrderId;
- (void).cxx_destruct;

@end

