//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MNBRequest.h"

@class ShareViewContent;

@interface MNRShare : MNBRequest
{
    ShareViewContent *_shareViewContent;
}

@property(retain, nonatomic) ShareViewContent *shareViewContent; // @synthesize shareViewContent=_shareViewContent;
- (void).cxx_destruct;
- (id)requestArgument;
- (id)requestUrl;

@end

