//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMPTMBaseRequest.h"

@class NSString;

@interface SNMPTMCategoryRequest : SNMPTMBaseRequest
{
    NSString *_version;
    CDUnknownBlockType _categoryRequestBlock;
}

@property(copy, nonatomic) CDUnknownBlockType categoryRequestBlock; // @synthesize categoryRequestBlock=_categoryRequestBlock;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (void)requestDidCompleted;
- (void)requestDidFailed;
- (long long)requestMethod;
- (id)requestUrl;

@end

