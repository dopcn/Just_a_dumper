//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VSEasyAPIRequestParameter.h"

@class NSString;

@interface VSLabelRecommendProductListRequest : VSEasyAPIRequestParameter
{
    NSString *_abtestId;
    NSString *_vreParamAddons;
    long long _page;
    long long _pageSize;
    NSString *_device;
}

@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *vreParamAddons; // @synthesize vreParamAddons=_vreParamAddons;
@property(copy, nonatomic) NSString *abtestId; // @synthesize abtestId=_abtestId;
- (void).cxx_destruct;

@end

