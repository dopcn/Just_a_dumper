//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseShenquRsp.h"

@class NSArray;

@interface ShenquAnchorBestRsp : BaseShenquRsp
{
    long long _anchorId;
    NSArray *_shenquInfos;
}

@property(copy, nonatomic) NSArray *shenquInfos; // @synthesize shenquInfos=_shenquInfos;
@property(nonatomic) long long anchorId; // @synthesize anchorId=_anchorId;
- (void).cxx_destruct;

@end

