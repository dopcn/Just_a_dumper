//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IndexLiveBaseInfo.h"

@class NSNumber, NSString;

@interface IndexBannerInfo : IndexLiveBaseInfo
{
    NSNumber *_ID;
    NSString *_thumb;
    NSString *_url;
    NSString *_adId;
}

@property(retain, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) NSNumber *ID; // @synthesize ID=_ID;
- (void).cxx_destruct;
- (id)initWithDataDic:(id)arg1;

@end

