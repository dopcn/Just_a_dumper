//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMModelsRequest.h"

@class ZDMTag;

@interface ZDMTagDetailsRequest : ZDMModelsRequest
{
    ZDMTag *_tag;
}

@property(readonly, nonatomic) ZDMTag *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)initWithSubmodule:(long long)arg1 tag:(id)arg2 pageNumber:(long long)arg3;

@end

