//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNAccountRequestModel.h"

@class NSNumber, NSString;
@protocol Optional;

@interface BDNMyCouponRequestModel : BDNAccountRequestModel
{
    NSString<Optional> *_dealIds;
    NSString<Optional> *_userId;
    NSNumber<Optional> *_status;
    NSNumber<Optional> *_pn;
    NSNumber<Optional> *_pageSize;
}

@property(retain, nonatomic) NSNumber<Optional> *pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSNumber<Optional> *pn; // @synthesize pn=_pn;
@property(retain, nonatomic) NSNumber<Optional> *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString<Optional> *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString<Optional> *dealIds; // @synthesize dealIds=_dealIds;
- (void).cxx_destruct;
- (id)initWithUserId:(id)arg1 status:(long long)arg2;

@end

