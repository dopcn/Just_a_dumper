//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface WMOrderDetailInsuranceInfo : SAKDomainObject
{
    _Bool _show;
    NSString *_name;
    double _cost;
    NSString *_detailURL;
}

+ (id)predicateDictionary;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(copy, nonatomic) NSString *detailURL; // @synthesize detailURL=_detailURL;
@property(nonatomic) double cost; // @synthesize cost=_cost;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

