//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray;

@interface NVModelBaseOHSAPreferencePoiOperationRequest : NVBaseModel
{
    NSArray *_pois;
    long long _bizType;
}

+ (id)metaInfo;
@property(nonatomic) long long bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSArray *pois; // @synthesize pois=_pois;
- (void).cxx_destruct;

@end

