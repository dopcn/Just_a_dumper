//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBMTOPBaseRequest.h"

@class NSDictionary;

@interface TMMPreviewRequest : TBMTOPBaseRequest
{
    long long _previewId;
    NSDictionary *_extentions;
}

@property(copy, nonatomic) NSDictionary *extentions; // @synthesize extentions=_extentions;
@property(nonatomic) long long previewId; // @synthesize previewId=_previewId;
- (void).cxx_destruct;
- (id)init;

@end

